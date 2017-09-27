#ifndef __HardwareIndexBuffer__
#define __HardwareIndexBuffer__
#include "graphic/graphic_config.h"
#include <core/sharedptr.h>
#include "hardwarebuffer.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CHardwareBufferManagerBase;
            /***** Specialisation of EarthView::World::Graphic::CHardwareBuffer for vertex index buffers, still abstract. ****/
            /// <summary>
            /// 硬件索引缓存类
            /// 定义内存中索引缓存的相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CHardwareIndexBuffer : public EarthView::World::Graphic::CHardwareBuffer
            {
            public:
                enum IndexType
                {
                    IT_16BIT,
                    IT_32BIT
                };
            protected:
                EarthView::World::Graphic::CHardwareBufferManagerBase *mMgr;
                CHardwareIndexBuffer::IndexType mIndexType;
                ev_size_t mNumIndexes;
                ev_size_t mIndexSize;
            public:
                //// Should be called by CHardwareBufferManager
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="mgr">缓存管理基类的指针</param>
                /// <param name="idxType">索引类型</param>
                /// <param name="numIndexes">索引编号</param>
                /// <param name="usage">缓存方法</param>
                /// <param name="systemMemory">是否使用系统内存</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns></returns>
                CHardwareIndexBuffer( EarthView::World::Graphic::CHardwareBufferManagerBase *ref_mgr, CHardwareIndexBuffer::IndexType idxType, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage,
                                      ev_bool useSystemMemory, ev_bool useShadowBuffer);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CHardwareIndexBuffer (_in EarthView::World::Core::CNameValuePairList *pList);
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
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CHardwareIndexBuffer();
                //// Return the manager of this buffer, if any
                /// <summary>
                /// 获得硬件缓存管理方式
                /// </summary>
                /// <param name=""></param>
                /// <returns>缓存管理方式</returns>
                EarthView::World::Graphic::CHardwareBufferManagerBase *getManager() const;
                //// Get the type of indexes used in this buffer
                /// <summary>
                /// 获得索引类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>索引类型</returns>
                CHardwareIndexBuffer::IndexType getType() const;

                //// Get the number of indexes in this buffer
                /// <summary>
                /// 获得索引编号
                /// </summary>
                /// <param name=""></param>
                /// <returns>索引编号</returns>
                ev_size_t getNumIndexes() const;

                //// Get the size in bytes of each index
                /// <summary>
                /// 获得每一个索引字节大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>索引字节大小</returns>
                ev_size_t getIndexSize() const;


                //// NB subclasses should override lock, unlock, readData, writeData
            };

            /***** Shared pointer implementation used to share index buffers. ****/
            class EV_GRAPHIC_DLL CHardwareIndexBufferSharedPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<CHardwareIndexBuffer>
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CHardwareIndexBufferSharedPtr();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="buf">硬件索引缓存</param>
                /// <returns></returns>
                explicit CHardwareIndexBufferSharedPtr( CHardwareIndexBuffer *ref_buf);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="buf">硬件索引缓存</param>
                /// <param name="inFreeMethod">共享方法</param>
                /// <returns></returns>
                explicit CHardwareIndexBufferSharedPtr( CHardwareIndexBuffer *ref_buf, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
                /// <summary>
                /// 获取索引缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns>索引缓存</returns>
                CHardwareIndexBuffer *get() const;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CHardwareIndexBufferSharedPtr(_in EarthView::World::Core::CNameValuePairList *pList);
            };
        }
    }
}

#endif

