#ifndef _Resource_H__
#define _Resource_H__
#include <core/sharedptr.h>
#include <core/stringinterface.h>
#include "graphic_config.h"
#include "atomicwrappers.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            typedef ev_uint64 ResourceHandle;
           
            class CManualResourceLoader;
            class CResourceManager;

			/// <summary>
			/// 渲染系统使用的资源的基类
			/// </summary>
            class EV_GRAPHIC_DLL CResource : public EarthView::World::Core::CStringInterface
            {
            ev_private:
                EV_AUTO_MUTEX 			/// public to allow external locking
            public:

                class EV_GRAPHIC_DLL  CResourceListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CResourceListener(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CResourceListener() {}
                    virtual ~CResourceListener() {}
                    /** Callback to indicate that background loading has completed.
                    @deprecated
                    	Use loadingComplete instead.
                    */
                    virtual void backgroundLoadingComplete(EarthView::World::Graphic::CResource *pResource) {}
                    /** Callback to indicate that background preparing has completed.
                    @deprecated
                    	Use preparingComplete instead.
                    */
                    virtual void backgroundPreparingComplete(EarthView::World::Graphic::CResource *pResource) {}
                    /** Called whenever the resource finishes loading.
                    @remarks
                    	If a EarthView::World::Graphic::CResource has been marked as background loaded (@see EarthView::World::Graphic::CResource::setBackgroundLoaded),
                    	the call does not itself occur in the thread which is doing the loading;
                    	when loading is complete a response indicator is placed with the
                    	CResourceGroupManager, which will then be sent back to the
                    	listener as part of the application's primary frame loop thread.
                    */
                    virtual void loadingComplete(EarthView::World::Graphic::CResource *pResource) {}

                    /** called whenever the resource finishes preparing (paging into memory).
                    @remarks
                    	If a EarthView::World::Graphic::CResource has been marked as background loaded (@see EarthView::World::Graphic::CResource::setBackgroundLoaded)
                    	the call does not itself occur in the thread which is doing the preparing;
                    	when preparing is complete a response indicator is placed with the
                    	CResourceGroupManager, which will then be sent back to the
                    	listener as part of the application's primary frame loop thread.
                    */
                    virtual void preparingComplete(EarthView::World::Graphic::CResource *pResource) {}
                    /** Called whenever the resource has been unloaded. */
                    virtual void unloadingComplete(EarthView::World::Graphic::CResource *pResource) {}
                };

                //// Enum identifying the loading state of the resource
                enum LoadingState
                {
                    //// Not loaded
                    LOADSTATE_UNLOADED,
                    //// Loading is in progress
                    LOADSTATE_LOADING,
                    //// Fully loaded
                    LOADSTATE_LOADED,
                    //// Currently unloading
                    LOADSTATE_UNLOADING,
                    //// Fully prepared
                    LOADSTATE_PREPARED,
                    //// Preparing is in progress
                    LOADSTATE_PREPARING
                };
            protected:
				//zxt 2012.10.29 读取Mesh关联的资源文件时，gpu文件所属的.program是没有被记录的，在此扩展一下
				EVString mResFilename;
                //// Creator
                EarthView::World::Graphic::CResourceManager *mCreator;
                //// Unique name of the resource
                EVString mName;
                //// The name of the resource group
                EVString mGroup;
                //// Numeric handle for more efficient look up than name
                ResourceHandle mHandle;
                //// Is the resource currently loaded?
                CAtomicScalar<EarthView::World::Graphic::CResource::LoadingState> mLoadingState;
                //// Is this resource going to be background loaded? Only applicable for multithreaded
                volatile ev_bool mIsBackgroundLoaded;
                //// The size of the resource in bytes
                ev_size_t mSize;
                //// Is this file manually loaded?
                ev_bool mIsManual;
                //// Origin of this resource (e.g. script name) - optional
                EVString mOrigin;
                //// Optional manual loader; if provided, data is loaded from here instead of a file
                EarthView::World::Graphic::CManualResourceLoader *mLoader;
                //// State count, the number of times this resource has changed state
                ev_size_t mStateCount;
                ///zxt updatefor v1.8
                typedef set<EarthView::World::Graphic::CResource::CResourceListener *> ListenerList;
                ListenerList mListenerList;
                EV_MUTEX(mListenerListMutex)
                /** Protected unnamed constructor to prevent default construction.
                */


                /** Internal hook to perform actions before the load process, but
                	after the resource has been marked as 'loading'.
                @note Mutex will have already been acquired by the loading thread.
                	(when loadImpl is not actually called)
                */

			ev_internal:
				/// <summary>
				/// 加载前调用的函数
				/// </summary>				
				/// <returns></returns>
                virtual void preLoadImpl() {}
                
				/// <summary>
				/// 加载后调用的函数
				/// </summary>				
				/// <returns></returns>
                virtual void postLoadImpl() {}
                
				/// <summary>
				/// 卸载前调用的函数
				/// </summary>				
				/// <returns></returns>
                virtual void preUnloadImpl() {}
                
				/// <summary>
				/// 卸载后调用的函数
				/// </summary>				
				/// <returns></returns>
                virtual void postUnloadImpl() {}
                
				/// <summary>
				/// 准备函数的实现
				/// </summary>				
				/// <returns></returns>
                virtual void prepareImpl() {}
				/// <summary>
				/// 准备函数的逆过程的实现
				/// </summary>				
				/// <returns></returns>
                virtual void unprepareImpl() {}
				/// <summary>
				/// 加载的实现
				/// </summary>				
				/// <returns></returns>
                virtual void loadImpl() {}
				/// <summary>
				/// 卸载的实现
				/// </summary>				
				/// <returns></returns>
                virtual void unloadImpl() {}
				/// <summary>
				/// 计算资源所占内存的大小
				/// </summary>				
				/// <returns></returns>
                virtual ev_size_t calculateSize() const
                {
                    return 0;
                }
            ev_private:
                CResource(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Standard constructor.
                @param creator Pointer to the EarthView::World::Graphic::CResourceManager that is creating this resource
                @param name The unique name of the resource
                @param group The name of the resource group to which this resource belongs
                @param isManual Is this resource manually loaded? If so, you should really
                	populate the loader parameter in order that the load process
                	can call the loader back when loading is required.
                @param loader Pointer to a EarthView::World::Graphic::CManualResourceLoader implementation which will be called
                	when the EarthView::World::Graphic::CResource wishes to load (should be supplied if you set
                	isManual to true). You can in fact leave this parameter null
                	if you wish, but the EarthView::World::Graphic::CResource will never be able to reload if
                	anything ever causes it to unload. Therefore provision of a proper
                	EarthView::World::Graphic::CManualResourceLoader instance is strongly recommended.
                */
                CResource()
                    : mCreator(0), mHandle(0), mLoadingState(LOADSTATE_UNLOADED),
                      mIsBackgroundLoaded(false),	mSize(0), mIsManual(0), mLoader(0)
                {
                }
                CResource(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                          const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                CResource(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                          const EVString &group, ev_bool isManual );
                CResource(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                          const EVString &group);

                /** Virtual destructor. Shouldn't need to be overloaded, as the resource
                    deallocation code should reside in unload()
                    @see
                        CResource::unload()
                */
                virtual ~CResource();
                
				/// <summary>
				/// 准备(读取资源文件)
				/// </summary>				
				/// <returns></returns>
                virtual void prepare(ev_bool backgroundThread);
                virtual void prepare( );
               
				/// <summary>
				/// 加载
				/// </summary>				
				/// <returns></returns>
                virtual void load(ev_bool backgroundThread );
                virtual void load();
                
				/// <summary>
				/// 重新加载
				/// </summary>				
				/// <returns></returns>
                virtual void reload();
                
				/// <summary>
				/// 是否可重新加载
				/// </summary>				
				/// <returns></returns>
                virtual ev_bool isReloadable() const
                {
                    return !mIsManual || mLoader;
                }
                
				/// <summary>
				/// 是否手动加载
				/// </summary>				
				/// <returns></returns>
                virtual ev_bool isManuallyLoaded() const
                {
                    return mIsManual;
                }
                
				/// <summary>
				/// 卸载
				/// </summary>				
				/// <returns></returns>
                virtual void unload();
                
				/// <summary>
				/// 获得资源大小
				/// </summary>				
				/// <returns></returns>
                virtual ev_size_t getSize() const
                {
                    return mSize;
                }
                
				/// <summary>
				/// 确保在使用
				/// </summary>				
				/// <returns></returns>
                virtual void touch();
                
				/// <summary>
				/// 获得资源文件名
				/// </summary>				
				/// <returns></returns>
				void setResFilename(const EVString& filename);
				EVString getResFilename();

				/// <summary>
				/// 获得资源名
				/// </summary>				
				/// <returns></returns>
                virtual EVString getName() const
                {
                    return mName;
                }

				/// <summary>
				/// 获得资源句柄
				/// </summary>				
				/// <returns></returns>
                virtual ResourceHandle getHandle() const
                {
                    return mHandle;
                }
                
				/// <summary>
				/// 是否准备就绪
				/// </summary>				
				/// <returns></returns>
                virtual ev_bool isPrepared() const
                {
                    /// No lock required to read this state since no modify
                    return (mLoadingState.get() == LOADSTATE_PREPARED);
                }
                
				/// <summary>
				/// 是否已加载
				/// </summary>				
				/// <returns></returns>
                virtual ev_bool isLoaded() const
                {
                    /// No lock required to read this state since no modify
                    return (mLoadingState.get() == LOADSTATE_LOADED);
                }
                
				/// <summary>
				/// 是否正在加载
				/// </summary>				
				/// <returns></returns>
                virtual ev_bool isLoading() const
                {
                    return (mLoadingState.get() == LOADSTATE_LOADING);
                }
                
				/// <summary>
				/// 获得加载状态
				/// </summary>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const;

				/// <summary>
				/// 是否为后台加载
				/// </summary>				
				/// <returns></returns>
                virtual ev_bool isBackgroundLoaded() const;
                
				/// <summary>
				/// 设置为后台加载
				/// </summary>				
				/// <returns></returns>
                virtual void setBackgroundLoaded(ev_bool bl);

                /** Escalates the loading of a background loaded resource.
                @remarks
                	If a resource is set to load in the background, but something needs
                	it before it's been loaded, there could be a problem. If the user
                	of this resource really can't wait, they can escalate the loading
                	which basically pulls the loading into the current thread immediately.
                	If the resource is already being loaded but just hasn't quite finished
                	then this method will simply wait until the background load is complete.
                */
                virtual void escalateLoading();

				/// <summary>
				/// 添加监听
				/// </summary>				
				/// <returns></returns>
                virtual void addListener(EarthView::World::Graphic::CResource::CResourceListener *ref_lis);
				/// <summary>
				/// 移除监听
				/// </summary>				
				/// <returns></returns>
                virtual void removeListener(EarthView::World::Graphic::CResource::CResourceListener *lis);

				/// <summary>
				/// 获得组名
				/// </summary>				
				/// <returns></returns>
                virtual EVString getGroup() const ;
                
				/// <summary>
				/// 更换资源组
				/// </summary>				
				/// <returns></returns>
                virtual void changeGroupOwnership(const EVString &newGroup);
               
				/// <summary>
				/// 获得创建者(资源管理器)
				/// </summary>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CResourceManager *getCreator();
                /** Get the origin of this resource, e.g. a script file name.
                @remarks
                	This property will only contain something if the creator of
                	this resource chose to populate it. Script loaders are advised
                	to populate it.
                */
                virtual EVString getOrigin() const;
                //// Notify this resource of it's origin
                virtual void _notifyOrigin(const EVString &origin);
                /** Returns the number of times this resource has changed state, which
                	generally means the number of times it has been loaded. Objects that
                	build derived data based on the resource can check this value against
                	a copy they kept last time they built this derived data, in order to
                	know whether it needs rebuilding. This is a nice way of monitoring
                	changes without having a tightly-bound callback.
                */
                virtual ev_size_t getStateCount() const;
                
				/// <summary>
				/// 将状态置为脏
				/// </summary>				
				/// <returns></returns>
                virtual void _dirtyState();

				/// <summary>
				/// 告知监听者加载完成
				/// </summary>				
				/// <returns></returns>
                virtual void _fireLoadingComplete(ev_bool wasBackgroundLoaded);
				/// <summary>
				/// 告知监听者准备就绪
				/// </summary>				
				/// <returns></returns>
                virtual void _firePreparingComplete(ev_bool wasBackgroundLoaded);
				/// <summary>
				/// 告知监听者卸载完成
				/// </summary>				
				/// <returns></returns>
                virtual void _fireUnloadingComplete();

            };
            /** Shared pointer to a EarthView::World::Graphic::CResource.
            @remarks
            	This shared pointer allows many references to a resource to be held, and
            	when the final reference is removed, the resource will be destroyed.
            	Note that the EarthView::World::Graphic::CResourceManager which created this CResource will be holding
            	at least one reference, so this resource will not get destroyed until
            	someone removes the resource from the manager - this at least gives you
            	strong control over when resources are freed. But the nature of the
            	shared pointer means that if anyone refers to the removed resource in the
            	meantime, the resource will remain valid.
            @par
            	You may well see references to EarthView::World::Graphic::ResourcePtr (i.e. EarthView::World::Graphic::ResourcePtr&) being passed
            	around internally within EV_World. These are 'weak references' ie they do
            	not increment the reference count on the EarthView::World::Graphic::CResource. This is done for
            	efficiency in temporary operations that shouldn't need to incur the
            	overhead of maintaining the reference count; however we don't recommend
            	you do it yourself since these references are not guaranteed to remain valid.
            */
            /*typedef CSharedPtr<EarthView::World::Graphic::CResource> EarthView::World::Graphic::ResourcePtr;*/
            class EV_GRAPHIC_DLL ResourcePtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>
            {
            ev_private:
                ResourcePtr(_in EarthView::World::Core::CNameValuePairList *pList):
                	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CResource *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CResource *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource> r
                        	= *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                ResourcePtr() :
                	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>() {}
                explicit ResourcePtr(EarthView::World::Graphic::CResource *ref_rep) :
				    EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>(ref_rep) {}
                explicit ResourcePtr(EarthView::World::Graphic::CResource *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) :
				    EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>(ref_rep, inFreeMethod) {}
                ResourcePtr(const ResourcePtr &r) :
                	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>(r) {}

                EarthView::World::Graphic::CResource *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CResource>::get();
                }
            };
            /** Interface describing a manual resource loader.
            @remarks
            	Resources are usually loaded from files; however in some cases you
            	want to be able to set the data up manually instead. This provides
            	some problems, such as how to reload a EarthView::World::Graphic::CResource if it becomes
            	unloaded for some reason, either because of memory constraints, or
            	because a device fails and some or all of the data is lost.
            @par
            	This interface should be implemented by all classes which wish to
            	provide manual data to a resource. They provide a pointer to themselves
            	when defining the resource (via the appropriate EarthView::World::Graphic::CResourceManager),
            	and will be called when the EarthView::World::Graphic::CResource tries to load.
            	They should implement the loadResource method such that the EarthView::World::Graphic::CResource
            	is in the end set up exactly as if it had loaded from a file,
            	although the implementations will likely differ	between subclasses
            	of EarthView::World::Graphic::CResource, which is why no generic algorithm can be stated here.
            @note
            	The loader must remain valid for the entire life of the resource,
            	so that if need be it can be called upon to re-load the resource
            	at any time.
            */
            class EV_GRAPHIC_DLL CManualResourceLoader : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CManualResourceLoader(EarthView::World::Core::CNameValuePairList *pList);
            public:
                CManualResourceLoader();

                virtual ~CManualResourceLoader();
                /** Called when a resource wishes to load.  Note that this could get
                 * called in a background thread even in just a semithreaded EV_World
                 * (EV_THREAD_SUPPORT==2).  Thus, you must not access the rendersystem from
                 * this callback.  Do that stuff in loadResource.
                @param resource The resource which wishes to load
                */
                virtual void prepareResource(EarthView::World::Graphic::CResource *resource);
                /** Called when a resource wishes to prepare.
                @param resource The resource which wishes to prepare
                */
                virtual void loadResource(EarthView::World::Graphic::CResource *resource);
            };
        }
    }
}

#endif

