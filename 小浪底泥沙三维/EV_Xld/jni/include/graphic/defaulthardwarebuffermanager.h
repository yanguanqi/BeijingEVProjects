#ifndef __DefaultHardwareBufferManager_H__
#define __DefaultHardwareBufferManager_H__
#include "graphic/graphic_config.h"
#include "hardwarebuffermanager.h"
#include "hardwarevertexbuffer.h"
#include "hardwareindexbuffer.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            ///// Specialisation of EarthView::World::Graphic::CHardwareVertexBuffer for emulation
            /// <summary>
            /// 默认硬件顶点缓存类
            /// 定义内存中缓存的相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CDefaultHardwareVertexBuffer : public EarthView::World::Graphic::CHardwareVertexBuffer
            {
            protected:
                ev_uchar *mpData;
                
            ev_internal:
                /// <summary>
                /// 锁的实现函数
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="options">选项</param>
                /// <returns></returns>
                void *lockImpl(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);
                
                /// <summary>
                /// 解锁的实现函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unlockImpl();
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="vertexSize">顶点大小</param>
                /// <param name="numVertices">至高点编号</param>
                /// <param name="usage">缓存方式</param>
                /// <returns></returns>
                CDefaultHardwareVertexBuffer(ev_size_t vertexSize, ev_size_t numVertices, EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="mgr">缓存管理基础</param>
                /// <param name="vertexSize">顶点大小</param>
                /// <param name="numVertices">至高点编号</param>
                /// <param name="usage">缓存方式</param>
                /// <returns></returns>
                CDefaultHardwareVertexBuffer(_in EarthView::World::Graphic::CHardwareBufferManagerBase *ref_mgr, ev_size_t vertexSize, ev_size_t numVertices,
                                             EarthView::World::Graphic::CHardwareBuffer::Usage usage);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDefaultHardwareVertexBuffer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CDefaultHardwareVertexBuffer();
                /***** See CHardwareBuffer. ****/
                /// <summary>
                /// 读数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pDest">内存大小</param>
                /// <returns></returns>
                void readData(ev_size_t offset, ev_size_t length, _inout void *pDest);
                /***** See CHardwareBuffer. ****/
                /**** void writeData(ev_size_t offset, ev_size_t length, const void* pSource,
                		ev_bool discardWholeBuffer = false);
                		****/
                /// <summary>
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <param name="discardWholeBuffer">是否放弃整个缓存</param>
                /// <returns></returns>
                void writeData(ev_size_t offset, ev_size_t length, const void *pSource,
                               ev_bool discardWholeBuffer);
                /// <summary>
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <returns></returns>
                void writeData(ev_size_t offset, ev_size_t length, const void *pSource);
                /***** Override CHardwareBuffer to turn off all shadowing. ****/
                /// <summary>
                /// 锁
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="options">选项</param>
                /// <returns></returns>
                void *lock(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);
                /***** Override CHardwareBuffer to turn off all shadowing. ****/
                /// <summary>
                /// 解锁
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unlock();
            };
            //// Specialisation of EarthView::World::Graphic::CHardwareIndexBuffer for emulation
            /// <summary>
            /// 默认硬件索引缓存类
            /// 定义内存中缓存的相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CDefaultHardwareIndexBuffer : public EarthView::World::Graphic::CHardwareIndexBuffer
            {
            protected:
                ev_uchar *mpData;
            ev_internal:
                
                /// <summary>
                /// 锁的实现函数
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="options">选项</param>
                /// <returns></returns>
                void *lockImpl(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);
                
                /// <summary>
                /// 解锁的实现函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unlockImpl();
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="idxType">索引类型</param>
                /// <param name="numIndexes">索引个数</param>
                /// <param name="usage">索引缓存用法</param>
                /// <returns></returns>
                CDefaultHardwareIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType idxType, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDefaultHardwareIndexBuffer(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CDefaultHardwareIndexBuffer();
                /***** See CHardwareBuffer. ****/
                /// <summary>
                /// 读数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pDest">内存大小</param>
                /// <returns></returns>
                void readData(ev_size_t offset, ev_size_t length, _inout void *pDest);
                /***** See CHardwareBuffer. ****/
                /****void writeData(ev_size_t offset, ev_size_t length, const void* pSource,
                		ev_bool discardWholeBuffer = false);****/
                /// <summary>
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <param name="discardWholeBuffer">是否放弃整个缓存</param>
                /// <returns></returns>
                void writeData(ev_size_t offset, ev_size_t length, const void *pSource,
                               ev_bool discardWholeBuffer );
                /// 写数据
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="pSource">资源</param>
                /// <returns></returns>
                void writeData(ev_size_t offset, ev_size_t length, const void *pSource);

                /***** Override CHardwareBuffer to turn off all shadowing. ****/
                /// <summary>
                /// 锁
                /// </summary>
                /// <param name="offset">偏移量</param>
                /// <param name="length">长度</param>
                /// <param name="options">选项</param>
                /// <returns></returns>
                void *lock(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);

                /***** Override CHardwareBuffer to turn off all shadowing. ****/
                /// <summary>
                /// 解锁
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unlock();
            };
            /***** Specialisation of EarthView::World::Graphic::CHardwareBufferManagerBase to emulate hardware buffers.
            @remarks
            	You might want to instantiate this class if you want to utilise
            	classes like CMeshSerializer without having initialised the
            	rendering system (which is required to create a 'real' hardware
            	buffer manager.
            ****/
            /// <summary>
            /// 默认硬件缓存管理基类
            /// 定义内存中缓存的相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CDefaultHardwareBufferManagerBase : public EarthView::World::Graphic::CHardwareBufferManagerBase
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CDefaultHardwareBufferManagerBase();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDefaultHardwareBufferManagerBase(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CDefaultHardwareBufferManagerBase();
                //// Creates a vertex buffer
                /****EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                    createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts,
                		EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer = false);

                		****/
                /// <summary>
                /// 创建硬件顶点缓冲
                /// </summary>
                /// <param name="vertexSize">顶点尺寸大小</param>
                /// <param name="numVerts">至高点编号</param>
                /// <param name="usage">缓存使用方法</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns>顶点缓存的共享信息</returns>
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts,
                                   EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer);
                /// <summary>
                /// 创建硬件顶点缓冲
                /// </summary>
                /// <param name="vertexSize">顶点尺寸大小</param>
                /// <param name="numVerts">顶点编号</param>
                /// <param name="usage">缓存使用方法</param>
                /// <returns>顶点缓存的共享信息</returns>
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts,
                                   EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                //// Create a hardware vertex buffer
                /****EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                	createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                	EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer = false);
                	****/
                /// <summary>
                /// 创建硬件索引缓冲
                /// </summary>
                /// <param name="itype">索引类型</param>
                /// <param name="numVerts">索引编号</param>
                /// <param name="usage">缓存使用方法</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns>索引缓存的共享信息</returns>
                EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer);
                /// <summary>
                /// 创建硬件索引缓冲
                /// </summary>
                /// <param name="itype">索引类型</param>
                /// <param name="numVerts">索引编号</param>
                /// <param name="usage">缓冲器使用方法</param>
                /// <returns>索引缓存的共享信息</returns>
                EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                //// Create a hardware vertex buffer
                /// <summary>
                /// 创建渲染到硬件顶点缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点缓存的共享信息</returns>
                EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer();
            };
            //// CDefaultHardwareBufferManagerBase as a CSingleton
            class EV_GRAPHIC_DLL CDefaultHardwareBufferManager : public EarthView::World::Graphic::CHardwareBufferManager
            {
            private:
                static EarthView::World::Graphic::CDefaultHardwareBufferManager *ms_Singleton;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CDefaultHardwareBufferManager();
                /// <summary>
                /// 单例（引用）
                /// </summary>
                /// <param =""></param>
                /// <returns>硬件缓存管理信息</returns>
                static EarthView::World::Graphic::CDefaultHardwareBufferManager &getSingleton();
                /// <summary>
                /// 单例（指针）
                /// </summary>
                /// <param =""></param>
                /// <returns>硬件缓存管理信息</returns>
                static EarthView::World::Graphic::CDefaultHardwareBufferManager *getSingletonPtr();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDefaultHardwareBufferManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CDefaultHardwareBufferManager()
                {
                    EV_DELETE mImpl;
                    ms_Singleton = NULL;
                }
            };
        }
    }
}

#endif

