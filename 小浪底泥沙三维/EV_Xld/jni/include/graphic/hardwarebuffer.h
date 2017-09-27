#ifndef __HardwareBuffer__
#define __HardwareBuffer__
#include "graphic_config.h"
#include <core/memoryallocatedobject.h>
#include <core/graphic_exception.h>
#include <core/mutex.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Abstract class defining common features of hardware buffers.
            @remarks
                A 'hardware buffer' is any area of memory held outside of core system ram,
                and in our case refers mostly to video ram, although in theory this class
                could be used with other memory areas such as sound card memory, custom
                coprocessor memory etc.
            @par
                This reflects the fact that memory held outside of main system RAM must
                be interacted with in a more formal fashion in order to promote
                cooperative and optimal usage of the buffers between the various
                processing units which manipulate them.
            @par
                This abstract class defines the core interface which is common to all
                buffers, whether it be vertex buffers, index buffers, texture memory
                or framebuffer memory etc.
            @par
            	Buffers have the ability to be 'shadowed' in system memory, this is because
            	the kinds of access allowed on hardware buffers is not always as flexible as
            	that allowed for areas of system memory - for example it is often either
            	impossible, or extremely undesirable from a performance standpoint to read from
            	a hardware buffer; when writing to hardware buffers, you should also write every
            	byte and do it sequentially. In situations where this is too restrictive,
            	it is possible to create a hardware, write-only buffer (the most efficient kind)
            	and to back it with a system memory 'shadow' copy which can be read and updated arbitrarily.
            	EV_World handles synchronising this buffer with the real hardware buffer (which should still be
            	created with the HBU_DYNAMIC flag if you intend to update it very frequently). Whilst this
            	approach does have it's own costs, such as increased memory overhead, these costs can
            	You should look for the 'useShadowBuffer' parameter on the creation methods used to create
            	the buffer of the type you require (see CHardwareBufferManager) to enable this feature.
            ****/
            /// <summary>
            /// 硬件缓存类
            /// 定义内存中缓存的相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CHardwareBuffer : public EarthView::World::Core::CAllocatedObject
            {
            public:
                //// Enums describing buffer usage; not mutually exclusive
                enum Usage
                {
                    /***** Static buffer which the application rarely modifies once created. Modifying
                    the contents of this buffer will involve a performance hit.
                    ****/
                    HBU_STATIC = 1,
                    /***** Indicates the application would like to modify this buffer with the CPU
                    fairly often.
                    Buffers created with this flag will typically end up in AGP memory rather
                    than video memory.
                    ****/
                    HBU_DYNAMIC = 2,
                    /***** Indicates the application will never read the contents of the buffer back,
                    it will only ever write data. Locking a buffer with this flag will ALWAYS
                    return a pointer to new, blank memory rather than the memory associated
                    with the contents of the buffer; this avoids DMA stalls because you can
                    write to a new memory area while the previous one is being used.
                    ****/
                    HBU_WRITE_ONLY = 4,
                    /***** Indicates that the application will be refilling the contents
                    of the buffer regularly (not just updating, but generating the
                    contents from scratch), and therefore does not mind if the contents
                    of the buffer are lost somehow and need to be recreated. This
                    allows and additional level of optimisation on the buffer.
                    This option only really makes sense when combined with
                    HBU_DYNAMIC_WRITE_ONLY.
                    ****/
                    HBU_DISCARDABLE = 8,
                    //// Combination of HBU_STATIC and HBU_WRITE_ONLY
                    HBU_STATIC_WRITE_ONLY = 5,
                    /***** Combination of HBU_DYNAMIC and HBU_WRITE_ONLY. If you use
                    instead if you update the entire contents of the buffer very
                    regularly.
                    ****/
                    HBU_DYNAMIC_WRITE_ONLY = 6,
                    //// Combination of HBU_DYNAMIC, HBU_WRITE_ONLY and HBU_DISCARDABLE
                    HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE = 14

                };
                //// Locking options
                enum LockOptions
                {
                    /***** Normal mode, ie allows read/write and contents are preserved. ****/
                    HBL_NORMAL,
                    /***** Discards the <em>entire</em> buffer while locking; this allows optimisation to be
                    performed because synchronisation issues are relaxed. Only allowed on buffers
                    created with the HBU_DYNAMIC flag.
                    ****/
                    HBL_DISCARD,
                    /***** Lock the buffer for reading only. Not allowed in buffers which are created with HBU_WRITE_ONLY.
                    Mandatory on static buffers, i.e. those created without the HBU_DYNAMIC flag.
                    ****/
                    HBL_READ_ONLY,
                    /***** As HBL_NORMAL, except the application guarantees not to overwrite any
                    region of the buffer which has already been used in this frame, can allow
                    some optimisation on some APIs. ****/
                    HBL_NO_OVERWRITE

                };
            protected:
                ev_size_t mSizeInBytes;
                EarthView::World::Graphic::CHardwareBuffer::Usage mUsage;
                ev_bool mIsLocked;
                ev_size_t mLockStart;
                ev_size_t mLockSize;
                ev_bool mSystemMemory;
                ev_bool mUseShadowBuffer;
                EarthView::World::Graphic::CHardwareBuffer *mpShadowBuffer;
                ev_bool mShadowUpdated;
                ev_bool mSuppressHardwareUpdate;

				EarthView::World::Core::CRecursiveMutex mMutex;

            ev_internal:
                //// Internal implementation of lock()
                /// <summary>
                /// 锁Impl函数
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="options">选项</param>
                /// <returns></returns>
                virtual void *lockImpl(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);
                //// Internal implementation of unlock()
                /// <summary>
                /// 解锁Impl函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void unlockImpl();
            public:
                //// Constructor, to be called by CHardwareBufferManager only
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="usage">缓存方法</param>
                /// <param name="systemMemory">是否使用系统内存</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns></returns>
                CHardwareBuffer(EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool systemMemory, ev_bool useShadowBuffer) ;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CHardwareBuffer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CHardwareBuffer();


                /// <summary>
                /// 写锁
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="options">选项</param>
                /// <returns></returns>
                virtual void *lock(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);

                /// <summary>
                /// 写锁
                /// </summary>
                /// <param name="options">选项</param>
                /// <returns></returns>
                void *lock(EarthView::World::Graphic::CHardwareBuffer::LockOptions options);

                /// <summary>
                /// 解锁
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void unlock();


                /// <summary>
                /// 读数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pDest">内存大小</param>
                /// <returns></returns>
                virtual void readData(ev_size_t offset, ev_size_t length, _inout void *pDest);


                /// <summary>
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <param name="discardWholeBuffer">是否放弃整个缓存</param>
                /// <returns></returns>
                virtual void writeData(ev_size_t offset, ev_size_t length, const void *pSource,
                                       ev_bool discardWholeBuffer);
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <returns></returns>
                virtual void writeData(ev_size_t offset, ev_size_t length, const void *pSource);

                /// <summary>
                /// 复制数据
                /// </summary>
                /// <param name="srcBuffer">资源缓存</param>
                /// <param name="srcOffset">资源偏移量</param>
                /// <param name="dstOffset">指令操作缓存</param>
                /// <param name="length">长度</param>
                /// <param name="discardWholeBuffer">是否放弃整个缓存</param>
                /// <returns></returns>
                virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer &srcBuffer, ev_size_t srcOffset,
                                      ev_size_t dstOffset, ev_size_t length, ev_bool discardWholeBuffer);
                /// <summary>
                /// 复制数据
                /// </summary>
                /// <param name="srcBuffer">资源缓存</param>
                /// <param name="srcOffset">资源偏移量</param>
                /// <param name="dstOffset">指令操作缓存</param>
                /// <param name="length">长度</param>
                /// <returns></returns>
                virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer &srcBuffer, ev_size_t srcOffset,
                                      ev_size_t dstOffset, ev_size_t length);
                /***** Copy all data from another buffer into this one.
                @remarks
                	Normally these buffers should be of identical size, but if they're
                	not, the routine will use the smallest of the two sizes.
                ****/
                /// <summary>
                /// 复制数据
                /// </summary>
                /// <param name="srcBuffer">资源缓存</param>
                /// <returns></returns>
                virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer &srcBuffer);

                //// Updates the real buffer from the shadow buffer, if required
                /// <summary>
                /// 从阴影缓存中更新
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _updateFromShadow();
                //// Returns the size of this buffer in bytes
                /// <summary>
                /// 获得缓存的字节大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>字节大小</returns>
                ev_size_t getSizeInBytes() const;
                //// Returns the EarthView::World::Graphic::CHardwareBuffer::Usage flags with which this buffer was created
                /// <summary>
                /// 获得缓存的方法
                /// </summary>
                /// <param name=""></param>
                /// <returns>EarthView::World::Graphic::CHardwareBuffer::Usage方法</returns>
                EarthView::World::Graphic::CHardwareBuffer::Usage getUsage() const;
                //// Returns whether this buffer is held in system memory
                /// <summary>
                /// 是否是系统内存
                /// </summary>
                /// <param name=""></param>
                /// <returns>是系统内存返回true，否则返回false</returns>
                ev_bool isSystemMemory() const;
                //// Returns whether this buffer has a system memory shadow for quicker reading
                /// <summary>
                /// 是否有阴影缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns>有阴影缓存返回true，否则返回false</returns>
                ev_bool hasShadowBuffer() const;
                //// Returns whether or not this buffer is currently locked.
                /// <summary>
                /// 是否上锁
                /// </summary>
                /// <param name=""></param>
                /// <returns>上锁返回true，否则返回false</returns>
                ev_bool isLocked() const ;
                //// CPass true to suppress hardware upload of shadow buffer changes
                /// <summary>
                /// 禁止硬件更新
                /// </summary>
                /// <param name="suppress">是否禁止</param>
                /// <returns></returns>
                void suppressHardwareUpdate(ev_bool suppress) ;
            };
        }
    }
}

#endif


