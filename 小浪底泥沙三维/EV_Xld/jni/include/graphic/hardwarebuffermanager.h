#ifndef __HardwareBufferManager__
#define __HardwareBufferManager__
#include "graphic/graphic_config.h"
#include "hardwarevertexbuffer.h"
#include "hardwareindexbuffer.h"
#include "rendertovertexbuffer.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Abstract interface representing a 'licensee' of a hardware buffer copy.
            remarks
                Often it's useful to have temporary buffers which are used for working
                but are not necessarily needed permanently. However, creating and
                destroying buffers is expensive, so we need a way to share these
                working areas, especially those based on existing fixed buffers.
                This class represents a licensee of one of those temporary buffers,
                and must be implemented by any user of a temporary buffer if they
                wish to be notified when the license is expired.
            ****/
            /// <summary>
            /// 硬件缓存许可类
            /// 定义内存中缓存许可的相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CHardwareBufferLicensee : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CHardwareBufferLicensee();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CHardwareBufferLicensee(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CHardwareBufferLicensee();
                /***** This method is called when the buffer license is expired and is about
                to be returned to the shared pool. ****/
                ///virtual void licenseExpired(EarthView::World::Graphic::CHardwareBuffer* buffer) = 0;
                /// <summary>
                /// 许可期限
                /// </summary>
                /// <param name="buffer">缓存</param>
                /// <returns></returns>
                virtual void licenseExpired(_in EarthView::World::Graphic::CHardwareBuffer *buffer);
            };
            /***** Structure for recording the use of temporary blend buffers ****/
            /// <summary>
            /// 记录短暂混合缓存用途结构类
            /// 定义这些缓冲器用途结构的相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CTempBlendedBufferInfo : public EarthView::World::Graphic::CHardwareBufferLicensee
            {
            private:
                //// Pre-blended
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr srcPositionBuffer;
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr srcNormalBuffer;
                //// Post-blended
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr destPositionBuffer;
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr destNormalBuffer;
                //// Both positions and normals are contained in the same buffer
                ev_bool posNormalShareBuffer;
                ev_uint16 posBindIndex;
                ev_uint16 normBindIndex;
                ev_bool bindPositions;
                ev_bool bindNormals;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTempBlendedBufferInfo(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CTempBlendedBufferInfo();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CTempBlendedBufferInfo();
                //// Utility method, extract info from the given EarthView::World::Graphic::CVertexData
                /// <summary>
                /// 从已给顶点数据中获取有效方法和提取信息
                /// </summary>
                /// <param name="sourceData">资源数据</param>
                /// <returns></returns>
                void extractFrom(const EarthView::World::Graphic::CVertexData *sourceData);
                //// Utility method, checks out temporary copies of src into dest
                ///void checkoutTempCopies(ev_bool positions = true, ev_bool normals = true);
                /// <summary>
                /// 检验临时副本
                /// </summary>
                /// <param name="positions">位置是否正确</param>
                /// <param name="normals">是否正常</param>
                /// <returns></returns>
                void checkoutTempCopies(ev_bool positions, ev_bool normals);
                /// <summary>
                /// 检验临时副本
                /// </summary>
                /// <param name="positions">位置是否正确</param>
                /// <returns></returns>
                void checkoutTempCopies(ev_bool positions);
                /// <summary>
                /// 检验临时副本
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void checkoutTempCopies();
                //// Utility method, binds dest copies into a given CVertexData struct
                /// <summary>
                /// 绑定临时复制情况
                /// </summary>
                /// <param name="targetData">顶点目标数据</param>
                /// <param name="suppressHardwareUpload">是否禁止缓存上传</param>
                /// <returns></returns>
                void bindTempCopies( EarthView::World::Graphic::CVertexData *targetData, ev_bool suppressHardwareUpload);
                /***** Overridden member from EarthView::World::Graphic::CHardwareBufferLicensee. ****/
                /// <summary>
                /// 许可期限
                /// </summary>
                /// <param name="buffer">缓存</param>
                /// <returns></returns>
                void licenseExpired( EarthView::World::Graphic::CHardwareBuffer *buffer);
                /***** Detect currently have buffer copies checked out and touch it ****/
                ///ev_bool buffersCheckedOut(ev_bool positions = true, ev_bool normals = true) const;
                /// <summary>
                /// 是否缓存检验
                /// </summary>
                /// <param name="positions">位置是否正确</param>
                /// <param name="normals">是否正常</param>
                /// <returns>检验返回true，否则返回false</returns>
                ev_bool buffersCheckedOut(ev_bool positions, ev_bool normals) const;
                /// <summary>
                /// 是否缓存检验
                /// </summary>
                /// <param name="positions">位置是否正确</param>
                /// <returns>检验返回true，否则返回false</returns>
                ev_bool buffersCheckedOut(ev_bool positions) const;
                /// <summary>
                /// 是否缓存检验
                /// </summary>
                /// <param name=""></param>
                /// <returns>检验返回true，否则返回false</returns>
                ev_bool buffersCheckedOut() const;
            };

            /***** Base definition of a hardware buffer manager.
            @remarks
            	This class is deliberately not a CSingleton, so that multiple types can
            	exist at once. The CSingleton is wrapped via the Decorator pattern
            	in EarthView::World::Graphic::CHardwareBufferManager, below. Each concrete implementation should
            	provide a subclass of CHardwareBufferManagerBase, which does the actual
            	work, and also a very simple subclass of CHardwareBufferManager which
            	simply constructs the instance of the CHardwareBufferManagerBase subclass
            	and passes it to the CHardwareBufferManager superclass as a delegate.
            	This subclass must also delete the implementation instance it creates.
            ****/
            /// <summary>
            /// 硬件缓存管理基类
            /// 定义相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CHardwareBufferManagerBase : public EarthView::World::Core::CAllocatedObject
            {
                friend class CHardwareVertexBufferSharedPtr;
                friend class CHardwareIndexBufferSharedPtr;
            protected:
                /***** WARNING: The following two members should place before all other members.
                    Members destruct order is very important here, because destructing other
                    members will cause notify back to this class, and then will access to this
                    two members.
                ****/
                typedef set<EarthView::World::Graphic::CHardwareVertexBuffer *> VertexBufferList;
                typedef set<EarthView::World::Graphic::CHardwareIndexBuffer *> IndexBufferList;
                VertexBufferList mVertexBuffers;
                IndexBufferList mIndexBuffers;

                typedef set<EarthView::World::Graphic::CVertexDeclaration *> VertexDeclarationList;
                typedef set<EarthView::World::Graphic::CVertexBufferBinding *> VertexBufferBindingList;
                VertexDeclarationList mVertexDeclarations;
                VertexBufferBindingList mVertexBufferBindings;
                //// Mutexes
                EV_MUTEX(mVertexBuffersMutex)
                EV_MUTEX(mIndexBuffersMutex)
                EV_MUTEX(mVertexDeclarationsMutex)
                EV_MUTEX(mVertexBufferBindingsMutex)
            ev_internal:
                //// Internal method for destroys all vertex declarations
                /// <summary>
                /// 销毁所有的声明
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void destroyAllDeclarations();
                //// Internal method for destroys all vertex buffer bindings
                /// <summary>
                /// 销毁所有的绑定
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void destroyAllBindings();
                //// Internal method for creates a new vertex declaration, may be overridden by certain rendering APIs
                /// <summary>
                /// 创建一个新的顶点声明内在方法
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点声明</returns>
                virtual _extfree EarthView::World::Graphic::CVertexDeclaration *createVertexDeclarationImpl();
                //// Internal method for destroys a vertex declaration, may be overridden by certain rendering APIs
                /// <summary>
                /// 销毁一个新的顶点声明内在方法
                /// </summary>
                /// <param name="decl">顶点声明</param>
                /// <returns></returns>
                virtual void destroyVertexDeclarationImpl( EarthView::World::Graphic::CVertexDeclaration *decl);
                //// Internal method for creates a new EarthView::World::Graphic::CVertexBufferBinding, may be overridden by certain rendering APIs
                /// <summary>
                /// 创建顶点缓存绑定内在方法
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点缓存绑定</returns>
                virtual _extfree EarthView::World::Graphic::CVertexBufferBinding *createVertexBufferBindingImpl();
                //// Internal method for destroys a EarthView::World::Graphic::CVertexBufferBinding, may be overridden by certain rendering APIs
                /// <summary>
                /// 销毁顶点缓存绑定内在方法
                /// </summary>
                /// <param name="binding">顶点缓存绑定</param>
                /// <returns></returns>
                virtual void destroyVertexBufferBindingImpl( EarthView::World::Graphic::CVertexBufferBinding *binding);
            public:
                enum BufferLicenseType
                {
                    //// Licensee will only release buffer when it says so
                    BLT_MANUAL_RELEASE,
                    //// Licensee can have license revoked
                    BLT_AUTOMATIC_RELEASE
                };
            protected:
                /***** Struct holding details of a license to use a temporary shared buffer. ****/
                /// <summary>
                /// 顶点缓存许可类
                /// 定义相关操作
                /// </summary>
                class EV_GRAPHIC_PRIVATE CVertexBufferLicense
                {
                public:
                    EarthView::World::Graphic::CHardwareVertexBuffer *originalBufferPtr;
                    EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType;
                    ev_size_t expiredDelay;
                    EarthView::World::Graphic::CHardwareVertexBufferSharedPtr buffer;
                    EarthView::World::Graphic::CHardwareBufferLicensee *licensee;
                    /// <summary>
                    /// 销毁顶点缓存绑定内在方法
                    /// </summary>
                    /// <param name="orig">顶点缓存起点</param>
                    /// <param name="ltype">缓存许可类型</param>
                    /// <param name="delay">期限延期</param>
                    /// <param name="buf">缓存</param>
                    /// <param name="lic">许可证</param>
                    /// <returns></returns>
                    CVertexBufferLicense(
                        EarthView::World::Graphic::CHardwareVertexBuffer *ref_orig,
                        EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType ltype,
                        ev_size_t delay,
                        EarthView::World::Graphic::CHardwareVertexBufferSharedPtr buf,
                        EarthView::World::Graphic::CHardwareBufferLicensee *ref_lic)
                        : originalBufferPtr(ref_orig)
                        , licenseType(ltype)
                        , expiredDelay(delay)
                        , buffer(buf)
                        , licensee(ref_lic)
                    {}
				ev_private:
					CVertexBufferLicense(_in EarthView::World::Core::CNameValuePairList *pList)
						:originalBufferPtr((EarthView::World::Graphic::CHardwareVertexBuffer*)pList->GetAt("ref_orig"))
						,licenseType(*(EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType*)pList->GetAt("ltype"))
						,expiredDelay(*(ev_size_t*)pList->GetAt("delay"))
						,buffer(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)pList->GetAt("buf"))
						,licensee((EarthView::World::Graphic::CHardwareBufferLicensee*)pList->GetAt("ref_lic"))
					{}

                };
                //// Map from original buffer to temporary buffers
                typedef multimap<EarthView::World::Graphic::CHardwareVertexBuffer *, EarthView::World::Graphic::CHardwareVertexBufferSharedPtr> FreeTemporaryVertexBufferMap;
                //// Map of current available temp buffers
                FreeTemporaryVertexBufferMap mFreeTempVertexBufferMap;
                //// Map from temporary buffer to details of a license
                typedef map<EarthView::World::Graphic::CHardwareVertexBuffer *, CVertexBufferLicense> TemporaryVertexBufferLicenseMap;
                //// Map of currently licensed temporary buffers
                TemporaryVertexBufferLicenseMap mTempVertexBufferLicenses;
                //// Number of frames elapsed since temporary buffers utilization was above half the available
                ev_size_t mUnderUsedFrameCount;
                //// Number of frames to wait before free unused temporary buffers
                static const ev_size_t UNDER_USED_FRAME_THRESHOLD;
                //// Frame delay for BLT_AUTOMATIC_RELEASE temporary buffers
                static const ev_size_t EXPIRED_DELAY_FRAME_THRESHOLD;
                //// Mutexes
                EV_MUTEX(mTempBuffersMutex)

                //// Creates  a new buffer as a copy of the source, does not copy data
            ev_internal:
                /// <summary>
                /// 创建一个新缓存作为一个资源的复制
                /// </summary>
                /// <param name="source">资源</param>
                /// <param name="usage">缓存用法</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns>顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &source,
                    EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CHardwareBufferManagerBase();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CHardwareBufferManagerBase(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CHardwareBufferManagerBase();
                /***** Create a hardware vertex buffer.
                @remarks
                    This method creates a new vertex buffer; this will act as a source of geometry
                    data for rendering objects. Note that because the meaning of the contents of
                    the vertex buffer depends on the usage, this method does not specify a
                    vertex format; the user of this buffer can actually insert whatever data
                    they wish, in any format. However, in order to use this with a CRenderOperation,
                    the data in this vertex buffer will have to be associated with a semantic element
                    of the rendering pipeline, e.g. a position, or texture coordinates. This is done
                    referring to the source data.
                @remarks Note that because vertex buffers can be shared, they are reference
                    counted so you do not need to worry about destroying themm this will be done
                    automatically.
                @param vertexSize The size in bytes of each vertex in this buffer; you must calculate
                    this based on the kind of data you expect to populate this buffer with.
                @param numVerts The number of vertices in this buffer.
                @param usage One or more members of the CHardwareBuffer::Usage enumeration; you are
                    strongly advised to use HBU_STATIC_WRITE_ONLY wherever possible, if you need to
                    update regularly, consider HBU_DYNAMIC_WRITE_ONLY and useShadowBuffer=true.
                @param useShadowBuffer If set to true, this buffer will be 'shadowed' by one stored in
                    system memory rather than GPU or AGP memory. You should set this flag if you intend
                    to read data back from the vertex buffer, because reading data from a buffer
                	in the GPU or AGP memory is very expensive, and is in fact impossible if you
                    specify HBU_WRITE_ONLY for the main buffer. If you use this option, all
                    reads and writes will be done to the shadow buffer, and the shadow buffer will
                    be synchronised with the real buffer at an appropriate time.
                ****/
                /****virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                    createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage,
                	ev_bool useShadowBuffer = false) = 0;
                	****/
                /// <summary>
                /// 创建硬件顶点缓存
                /// </summary>
                /// <param name="vertexSize">顶点尺寸大小</param>
                /// <param name="numVerts">顶点编号</param>
                /// <param name="usage">缓存使用方法</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns>顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage,
                                   ev_bool useShadowBuffer);
                /// <summary>
                /// 创建硬件顶点缓存
                /// </summary>
                /// <param name="vertexSize">顶点尺寸大小</param>
                /// <param name="numVerts">顶点编号</param>
                /// <param name="usage">缓存使用方法</param>
                /// <returns>顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                /***** Create a hardware index buffer.
                @remarks Note that because buffers can be shared, they are reference
                    counted so you do not need to worry about destroying them this will be done
                    automatically.
                @param itype The type in index, either 16- or 32-bit, depending on how many vertices
                	you need to be able to address
                @param numIndexes The number of indexes in the buffer
                @param usage One or more members of the CHardwareBuffer::Usage enumeration.
                @param useShadowBuffer If set to true, this buffer will be 'shadowed' by one stored in
                    system memory rather than GPU or AGP memory. You should set this flag if you intend
                    to read data back from the index buffer, because reading data from a buffer
                	in the GPU or AGP memory is very expensive, and is in fact impossible if you
                    specify HBU_WRITE_ONLY for the main buffer. If you use this option, all
                    reads and writes will be done to the shadow buffer, and the shadow buffer will
                    be synchronised with the real buffer at an appropriate time.
                ****/
                /****virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                	createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                	EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer = false) = 0;
                	****/
                /// <summary>
                /// 创建硬件索引缓存
                /// </summary>
                /// <param name="itype">索引类型</param>
                /// <param name="numVerts">索引编号</param>
                /// <param name="usage">缓存使用方法</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns>索引缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer);
                /// <summary>
                /// 创建硬件索引缓存
                /// </summary>
                /// <param name="itype">索引类型</param>
                /// <param name="numVerts">索引编号</param>
                /// <param name="usage">缓冲器使用方法</param>
                /// <returns>索引缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage usage);

                /***** Create a render to vertex buffer.
                @remarks The parameters (such as vertex size etc) are determined later
                	and are allocated when needed.
                ****/
                /// <summary>
                /// 创建渲染到顶点缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns>渲染到顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer();
                /***** Creates a new vertex declaration. ****/
                /// <summary>
                /// 创建硬件顶点声明
                /// </summary>
                /// <param =""></param>
                /// <returns>顶点声明</returns>
                virtual EarthView::World::Graphic::CVertexDeclaration *createVertexDeclaration();
                /***** Destroys a vertex declaration. ****/
                /// <summary>
                /// 销毁硬件顶点声明
                /// </summary>
                /// <param ="decl">顶点声明</param>
                /// <returns></returns>
                virtual void destroyVertexDeclaration( EarthView::World::Graphic::CVertexDeclaration *decl);
                /***** Creates a new EarthView::World::Graphic::CVertexBufferBinding. ****/
                /// <summary>
                /// 创建硬件顶点缓存绑定
                /// </summary>
                /// <param =""></param>
                /// <returns>顶点缓存绑定</returns>
                virtual EarthView::World::Graphic::CVertexBufferBinding *createVertexBufferBinding();
                /***** Destroys a EarthView::World::Graphic::CVertexBufferBinding. ****/
                /// <summary>
                /// 销毁硬件顶点缓存绑定
                /// </summary>
                /// <param ="binding">顶点缓存绑定</param>
                /// <returns></returns>
                virtual void destroyVertexBufferBinding( EarthView::World::Graphic::CVertexBufferBinding *binding);
                /***** Registers a vertex buffer as a copy of another.
                @remarks
                	This is useful for registering an existing buffer as a temporary buffer
                	which can be allocated just like a copy.
                ****/
                /// <summary>
                /// 注册顶点缓存作为副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存</param>
                /// <param ="copy">复制对象</param>
                /// <returns></returns>
                virtual void registerVertexBufferSourceAndCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer,
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &copy);
                /***** Allocates a copy of a given vertex buffer.
                @remarks
                    This method allocates a temporary copy of an existing vertex buffer.
                    This buffer is subsequently stored and can be made available for
                    other purposes later without incurring the cost of construction /
                    destruction.
                @param sourceBuffer The source buffer to use as a copy
                @param licenseType The type of license required on this buffer - automatic
                    release causes this class to release licenses every frame so that
                    they can be reallocated anew.
                @param licensee Pointer back to the class requesting the copy, which must
                    implement HardwareBufferLicense in order to be notified when the license
                    expires.
                @param copyData If true, the current data is copied as well as the
                    structure of the buffer
                ****/
                /****virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(
                	const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer,
                	EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType,
                	EarthView::World::Graphic::CHardwareBufferLicensee* licensee,
                	ev_bool copyData = false);****/
                /// <summary>
                /// 分配顶点缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存</param>
                /// <param ="licenseType">缓存许可类型</param>
                /// <param ="licensee">硬件缓存许可</param>
                /// <param ="copyData">是否有副本数据</param>
                /// <returns>顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer,
                    EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType,
                    EarthView::World::Graphic::CHardwareBufferLicensee *licensee,
                    ev_bool copyData);
                /// <summary>
                /// 分配顶点缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存</param>
                /// <param ="licenseType">缓存许可类型</param>
                /// <param ="licensee">硬件缓存许可</param>
                /// <returns>顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer,
                    EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType,
                    EarthView::World::Graphic::CHardwareBufferLicensee *licensee);
                /***** Manually release a vertex buffer copy for others to subsequently use.
                @remarks
                    Only required if the original call to allocateVertexBufferCopy
                    included a licenseType of BLT_MANUAL_RELEASE.
                @param bufferCopy The buffer copy. The caller is expected to delete
                    or at least no longer use this reference, since another user may
                    well begin to modify the contents of the buffer.
                ****/
                /// <summary>
                /// 释放顶点缓存副本
                /// </summary>
                /// <param ="bufferCopy">缓存副本</param>
                /// <returns></returns>
                virtual void releaseVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy);

                /***** Tell engine that the vertex buffer copy intent to reuse.
                @remarks
                    EV_World internal keep an expired delay counter of BLT_AUTOMATIC_RELEASE
                    buffers, when the counter count down to zero, it'll release for other
                    purposes later. But you can use this function to reset the counter to
                    the internal configured value, keep the buffer not get released for
                    some frames.
                @param bufferCopy The buffer copy. The caller is expected to keep this
                    buffer copy for use.
                ****/
                virtual void touchVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy);
                /***** Free all unused vertex buffer copies.
                @remarks
                    This method free all temporary vertex buffers that not in used.
                    In normally, temporary vertex buffers are subsequently stored and can
                    be made available for other purposes later without incurring the cost
                    of construction / destruction. But in some cases you want to free them
                    to save hardware memory (e.g. application was runs in a ev_int32 time, you
                    might free temporary buffers periodically to avoid memory overload).
                ****/
                /// <summary>
                /// 释放未使用的缓存副本
                /// </summary>
                /// <param =""></param>
                /// <returns></returns>
                virtual void _freeUnusedBufferCopies();
                /***** Internal method for releasing all temporary buffers which have been
                @param forceFreeUnused If true, free all unused temporary buffers.
                    If false, auto detect and free all unused temporary buffers based on
                    temporary buffers utilization.
                ****/
                ///virtual void _releaseBufferCopies(ev_bool forceFreeUnused = false);
                /// <summary>
                /// 释放缓存副本
                /// </summary>
                /// <param ="forceFreeUnused">是否是强制释放未使用的</param>
                /// <returns></returns>
                virtual void _releaseBufferCopies(ev_bool forceFreeUnused );
                /// <summary>
                /// 释放缓存副本
                /// </summary>
                /// <param =""></param>
                /// <returns></returns>
                virtual void _releaseBufferCopies();


                /***** Internal method that forces the release of copies of a given buffer.
                @remarks
                    This usually means that the buffer which the copies are based on has
                    been changed in some fundamental way, and the owner of the original
                    wishes to make that known so that new copies will reflect the
                    changes.
                @param sourceBuffer the source buffer as a shared pointer.  EarthView::World::Core::CAny buffer copies created from the source buffer
                    are deleted.
                ****/
                /// <summary>
                /// 强制释放缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存</param>
                /// <returns></returns>
                virtual void _forceReleaseBufferCopies(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer);
                /***** Internal method that forces the release of copies of a given buffer.
                @remarks
                    This usually means that the buffer which the copies are based on has
                    been changed in some fundamental way, and the owner of the original
                    wishes to make that known so that new copies will reflect the
                    changes.
                @param sourceBuffer the source buffer as a pointer.  EarthView::World::Core::CAny buffer copies created from the source buffer
                    are deleted.
                ****/
                /// <summary>
                /// 强制释放缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存（顶点缓存）</param>
                /// <returns></returns>
                virtual void _forceReleaseBufferCopies( EarthView::World::Graphic::CHardwareVertexBuffer *sourceBuffer);
                //// Notification that a hardware vertex buffer has been destroyed
                /// <summary>
                /// 通知定点缓存销毁
                /// </summary>
                /// <param ="buf">硬件顶点缓存（顶点缓存）</param>
                /// <returns></returns>
                void _notifyVertexBufferDestroyed( EarthView::World::Graphic::CHardwareVertexBuffer *buf);
                //// Notification that a hardware index buffer has been destroyed
                /// <summary>
                /// 通知索引缓存销毁
                /// </summary>
                /// <param ="buf">硬件索引缓存</param>
                /// <returns></returns>
                void _notifyIndexBufferDestroyed( EarthView::World::Graphic::CHardwareIndexBuffer *buf);
            };
            /***** CSingleton wrapper for hardware buffer manager. ****/
            class EV_GRAPHIC_DLL CHardwareBufferManager : public EarthView::World::Graphic::CHardwareBufferManagerBase/****, public CSingleton<CHardwareBufferManager>****/
            {
                friend class CHardwareVertexBufferSharedPtr;
                friend class CHardwareIndexBufferSharedPtr;
            private:
                static EarthView::World::Graphic::CHardwareBufferManager *ms_Singleton;
            protected:
                EarthView::World::Graphic::CHardwareBufferManagerBase *mImpl;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="imp">硬件缓存管理基础</param>
                /// <returns></returns>
                CHardwareBufferManager( EarthView::World::Graphic::CHardwareBufferManagerBase *ref_imp);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CHardwareBufferManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CHardwareBufferManager();
                /***** @copydoc HardwareBufferManagerInterface::createVertexBuffer ****/
                /****EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                    createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage,
                	ev_bool useShadowBuffer = false)
                {
                	return mImpl->createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
                }****/
                /// <summary>
                /// 创建顶点缓存
                /// </summary>
                /// <param name="vertexSize">顶点大小</param>
                /// <param name="numVerts">顶点编号</param>
                /// <param name="usage">缓存方式</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns>硬件顶点缓存共享信息</returns>
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage,
                                   ev_bool useShadowBuffer);
                /// <summary>
                /// 创建顶点缓存
                /// </summary>
                /// <param name="vertexSize">顶点大小</param>
                /// <param name="numVerts">顶点编号</param>
                /// <param name="usage">缓存方式</param>
                /// <returns>硬件顶点缓存共享信息</returns>
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr
                createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                /***** @copydoc HardwareBufferManagerInterface::createIndexBuffer ****/
                /****EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                	createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                	EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer = false)
                {
                	return mImpl->createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
                }
                ****/
                /// <summary>
                /// 创建索引6缓存
                /// </summary>
                /// <param name="vertexSize">顶点大小</param>
                /// <param name="numVerts">顶点编号</param>
                /// <param name="usage">缓存方式</param>
                /// <param name="useShadowBuffer">是否使用阴影缓存</param>
                /// <returns>硬件索引缓存共享信息</returns>
                EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer);
                /// <summary>
                /// 创建顶点缓存
                /// </summary>
                /// <param name="vertexSize">顶点大小</param>
                /// <param name="numVerts">顶点编号</param>
                /// <param name="usage">缓存方式</param>
                /// <returns>硬件索引缓存共享信息</returns>
                EarthView::World::Graphic::CHardwareIndexBufferSharedPtr
                createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes,
                                  EarthView::World::Graphic::CHardwareBuffer::Usage usage);
                /***** @copydoc HardwareBufferManagerInterface::createRenderToVertexBuffer ****/
                /// <summary>
                /// 创建渲染到顶点缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns>渲染到顶点缓存共享信息</returns>
                EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer();
                /***** @copydoc HardwareBufferManagerInterface::createVertexDeclaration ****/
                /// <summary>
                /// 创建顶点声明
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点声明信息</returns>
                virtual EarthView::World::Graphic::CVertexDeclaration *createVertexDeclaration();
                /***** @copydoc HardwareBufferManagerInterface::destroyVertexDeclaration ****/
                /// <summary>
                /// 销毁顶点声明
                /// </summary>
                /// <param name="decl">顶点声明</param>
                /// <returns></returns>
                virtual void destroyVertexDeclaration( EarthView::World::Graphic::CVertexDeclaration *decl);
                /***** @copydoc HardwareBufferManagerInterface::createVertexBufferBinding ****/
                /// <summary>
                /// 创建顶点缓存绑定
                /// </summary>
                /// <param name=""></param>
                /// <returns>顶点声明绑定信息</returns>
                virtual EarthView::World::Graphic::CVertexBufferBinding *createVertexBufferBinding();
                /***** @copydoc HardwareBufferManagerInterface::destroyVertexBufferBinding ****/
                /// <summary>
                /// 销毁顶点缓存绑定
                /// </summary>
                /// <param name="binding">顶点缓存绑定信息</param>
                /// <returns></returns>
                virtual void destroyVertexBufferBinding( EarthView::World::Graphic::CVertexBufferBinding *binding);
                /***** @copydoc HardwareBufferManagerInterface::registerVertexBufferSourceAndCopy ****/
                /// <summary>
                /// 注册顶点缓存资源和副本
                /// </summary>
                /// <param name="sourceBuffer">资源缓存</param>
                /// <param name="copy">副本</param>
                /// <returns></returns>
                virtual void registerVertexBufferSourceAndCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer,
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &copy);
                /***** @copydoc HardwareBufferManagerInterface::allocateVertexBufferCopy ****/
                /**** virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(
                     const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer,
                     EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType,
                     EarthView::World::Graphic::CHardwareBufferLicensee* licensee,
                     ev_bool copyData = false)
                {
                	return mImpl->allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
                }****/
                /// <summary>
                /// 分配顶点缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存</param>
                /// <param ="licenseType">缓存许可类型</param>
                /// <param ="licensee">硬件缓存许可</param>
                /// <param ="copyData">是否有副本数据</param>
                /// <returns>顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer,
                    EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType,
                    EarthView::World::Graphic::CHardwareBufferLicensee *licensee,
                    ev_bool copyData);
                /// <summary>
                /// 分配顶点缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存</param>
                /// <param ="licenseType">缓存许可类型</param>
                /// <param ="licensee">硬件缓存许可</param>
                /// <returns>顶点缓存的共享信息</returns>
                virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer,
                    EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType,
                    EarthView::World::Graphic::CHardwareBufferLicensee *licensee);
                /***** @copydoc HardwareBufferManagerInterface::releaseVertexBufferCopy ****/
                /// <summary>
                /// 释放顶点缓存副本
                /// </summary>
                /// <param ="bufferCopy">缓存副本</param>
                /// <returns></returns>
                virtual void releaseVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy);
                /***** @copydoc HardwareBufferManagerInterface::touchVertexBufferCopy ****/
                virtual void touchVertexBufferCopy(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy);
                /***** @copydoc HardwareBufferManagerInterface::_freeUnusedBufferCopies ****/
                /// <summary>
                /// 释放未使用的缓存副本
                /// </summary>
                /// <param =""></param>
                /// <returns></returns>
                virtual void _freeUnusedBufferCopies();
                /***** @copydoc HardwareBufferManagerInterface::_releaseBufferCopies ****/
                /****virtual void _releaseBufferCopies(ev_bool forceFreeUnused = false)
                {
                	mImpl->_releaseBufferCopies(forceFreeUnused);
                }****/
                /// <summary>
                /// 释放缓存副本
                /// </summary>
                /// <param ="forceFreeUnused">是否是强制释放未使用的</param>
                /// <returns></returns>
                virtual void _releaseBufferCopies(ev_bool forceFreeUnused);
                /// <summary>
                /// 释放缓存副本
                /// </summary>
                /// <param =""></param>
                /// <returns></returns>
                virtual void _releaseBufferCopies();
                /***** @copydoc HardwareBufferManagerInterface::_forceReleaseBufferCopies ****/
                /// <summary>
                /// 强制释放缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存</param>
                /// <returns></returns>
                virtual void _forceReleaseBufferCopies(
                    const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer);
                /***** @copydoc HardwareBufferManagerInterface::_forceReleaseBufferCopies ****/
                /// <summary>
                /// 强制释放缓存副本
                /// </summary>
                /// <param ="sourceBuffer">资源缓存(顶点缓存)</param>
                /// <returns></returns>
                virtual void _forceReleaseBufferCopies( EarthView::World::Graphic::CHardwareVertexBuffer *sourceBuffer);
                /***** @copydoc HardwareBufferManagerInterface::_notifyVertexBufferDestroyed ****/
                /// <summary>
                /// 通知定点缓存销毁
                /// </summary>
                /// <param ="buf">硬件顶点缓存（顶点缓存）</param>
                /// <returns></returns>
                void _notifyVertexBufferDestroyed( EarthView::World::Graphic::CHardwareVertexBuffer *buf);
                /***** @copydoc HardwareBufferManagerInterface::_notifyIndexBufferDestroyed ****/
                /// <summary>
                /// 通知索引缓存销毁
                /// </summary>
                /// <param ="buf">硬件索引缓存</param>
                /// <returns></returns>
                void _notifyIndexBufferDestroyed( EarthView::World::Graphic::CHardwareIndexBuffer *buf);

                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/
                /// <summary>
                /// 单例（引用）
                /// </summary>
                /// <param =""></param>
                /// <returns>硬件缓存管理信息</returns>
                static EarthView::World::Graphic::CHardwareBufferManager &getSingleton();
                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/
                /// <summary>
                /// 单例（指针）
                /// </summary>
                /// <param =""></param>
                /// <returns>硬件缓存管理信息</returns>
                static EarthView::World::Graphic::CHardwareBufferManager *getSingletonPtr();

            };
        }
    }
}

#endif

