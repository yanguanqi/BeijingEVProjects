#ifndef _ResourceManager_H__
#define _ResourceManager_H__
#include "graphic/graphic_config.h"
#include "resource.h"
#include <core/iteratorwrapper.h>
#include "scriptloader.h"
#include "core/ev_string.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Defines a generic resource handler.
            @remarks
                A resource manager is responsible for managing a pool of
                resources of a particular type. It must index them, look
                them up, load and destroy them. It may also need to stay within
                a defined memory budget, and temporarily unload some resources
                if it needs to to stay within this budget.
            @par
                EarthView::World::Graphic::CResource managers use a priority system to determine what can
                be unloaded, and a Least Recently Used (LRU) policy within
                resources of the same priority.
            @par
            	and they can be unloaded and removed. In addition, each
            	subclass of CResourceManager will likely define custom 'load' methods
            	which take explicit parameters depending on the kind of resource
            	being created.
            @note
            	Resources can be loaded and unloaded through the CResource class,
            	their parent EarthView::World::Graphic::CResourceManager.
            @note
                If EV_THREAD_SUPPORT is 1, this class is thread-safe.
            ****/
            class EV_GRAPHIC_DLL CResourceManager : public EarthView::World::Graphic::CScriptLoader
            {
            private:
                static EarthView::World::Graphic::CResourceManager *ms_Singleton;
            ev_private:
                CResourceManager(_in EarthView::World::Core::CNameValuePairList *pList);
                EV_AUTO_MUTEX 			/// public to allow external locking
            public:
                CResourceManager();

                virtual ~CResourceManager();
                static EarthView::World::Graphic::CResourceManager &getSingleton();
                static EarthView::World::Graphic::CResourceManager *getSingletonPtr();
				/// <summary>
				/// 创建(但不加载)资源，若存在则直接返回
				/// </summary>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::ResourcePtr create(const EVString &name, const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams);
                virtual EarthView::World::Graphic::ResourcePtr create(const EVString &name, const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                virtual EarthView::World::Graphic::ResourcePtr create(const EVString &name, const EVString &group, ev_bool isManual);
                virtual EarthView::World::Graphic::ResourcePtr create(const EVString &name, const EVString &group);
                
				/// <summary>
				/// 只创建(不加载)资源，不考虑同名的资源是否已经存在，创建后也不再管理该资源
				/// </summary>				
				/// <returns></returns>
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString &name, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,	const EarthView::World::Core::NameValuePairList *createParams);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString &name, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString &name, ev_bool isManual);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(const EVString &name);

				/****typedef std::pair<EarthView::World::Graphic::ResourcePtr, ev_bool> EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult;****/
                class  EV_GRAPHIC_DLL ResourceCreateOrRetrieveResult : public EarthView::World::Core::CBaseObject
                {
                public:
                    EarthView::World::Graphic::ResourcePtr first;
                    ev_bool second;
                    ResourceCreateOrRetrieveResult() {}
                    ResourceCreateOrRetrieveResult(_in EarthView::World::Graphic::ResourcePtr fir, _in ev_bool sec)
                    {
                        first = fir;
                        second = sec;
                    }
                    EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult &operator=(_in const EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult &other)
                    {
                        first = other.first;
                        second = other.second;
                        return *this;
                    }
                ev_private:
                    ResourceCreateOrRetrieveResult(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList)
                        {
                            first = *(EarthView::World::Graphic::ResourcePtr *)pList->GetAt("fir");
                            second = *(ev_bool *)pList->GetAt("sec");
                        }
                    }
                };

				/// <summary>
				/// 创建或获取资源
				/// </summary>				
				/// <returns></returns>
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString &name,
                        const EVString &group, ev_bool isManual,
                        EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                        const EarthView::World::Core::NameValuePairList *createParams);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString &name,
                        const EVString &group, ev_bool isManual,
                        EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString &name,
                        const EVString &group, ev_bool isManual);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(const EVString &name, const EVString &group);

				/// <summary>
				/// 设置内存总容量
				/// </summary>				
				/// <returns></returns>
                virtual void setMemoryBudget( ev_size_t bytes);
				/// <summary>
				/// 获取内存总容量
				/// </summary>				
				/// <returns></returns>
                virtual ev_size_t getMemoryBudget() const;
				/// <summary>
				/// 获取已经占用的内存容量
				/// </summary>				
				/// <returns></returns>
                virtual ev_size_t getMemoryUsage() const
                {
                    return mMemoryUsage.get();
                }
                
				/// <summary>
				/// 卸载资源
				/// </summary>				
				/// <returns></returns>
                virtual void unload(const EVString &name);
                virtual void unload(ResourceHandle handle);
                
				/// <summary>
				/// 卸载所有资源
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
                virtual void unloadAll(ev_bool reloadableOnly);
                virtual void unloadAll();
                
				/// <summary>
				/// 重新加载所有资源
				/// </summary>				
				/// <returns></returns>
                virtual void reloadAll(ev_bool reloadableOnly );
                virtual void reloadAll();
                
				/// <summary>
				/// 卸载所有未被引用的资源
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
                virtual void unloadUnreferencedResources(ev_bool reloadableOnly);
                virtual void unloadUnreferencedResources();
                
				/// <summary>
				/// 重新加载所有未被引用的资源
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
                virtual void reloadUnreferencedResources(ev_bool reloadableOnly);
                virtual void reloadUnreferencedResources();
                
				/// <summary>
				/// 移除资源
				/// 如果资源没有其它引用，则会引起资源的析构;
				/// 如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
                virtual void remove(EarthView::World::Graphic::ResourcePtr &r);                
                virtual void remove(const EVString &name);
                virtual void remove(ResourceHandle handle);
				virtual void remove(const EVString& name, const EVString& groupname);

				/// <summary>
				/// 移除所有资源
				/// 如果资源没有其它引用，则会引起资源的析构;
				/// 如果还有其它引用，则只从管理器中移除，直到所有引用都释放才会导致资源的析构
				/// </summary>		
				/// <param name="reloadableOnly"></param>
				/// <returns></returns>
                virtual void removeAll();
                
				/// <summary>
				/// 移除所有未被引用的资源				
				/// </summary>		
				/// <param name="reloadableOnly">传递true，则只卸载可以重新加载的资源</param>
				/// <returns></returns>
                virtual void removeUnreferencedResources(ev_bool reloadableOnly );
                virtual void removeUnreferencedResources();
				virtual void removeUnreferencedResource(const EVString& name);
				virtual void removeUnreferencedResource(const EVString& name, const EVString& groupName);

				/// <summary>
				/// 卸载所有未被引用的资源				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
				virtual void unloadUnreferencedResource(const EVString& name, const EVString& groupName);
				virtual void unloadUnreferencedResource(const EVString& name, const EVString& groupName, ev_uint16 useCount);
 
				/// <summary>
				/// 获取资源				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::ResourcePtr getByName(const EVString &name, const EVString &groupName);
                virtual EarthView::World::Graphic::ResourcePtr getByName(const EVString &name);               
                virtual EarthView::World::Graphic::ResourcePtr getByHandle(ResourceHandle handle);

				/// <summary>
				/// 判断资源是否存在于资源管理器中				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual ev_bool resourceExists(const EVString &name)
                {
                    return !getByName(name).isNull();
                }                
                virtual ev_bool resourceExists(ResourceHandle handle)
                {
                    return !getByHandle(handle).isNull();
                }
                
				/// <summary>
				/// 通知资源被开始使用				
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual void _notifyResourceTouched(EarthView::World::Graphic::CResource *res);
                
				/// <summary>
				/// 通知资源被加载完成			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual void _notifyResourceLoaded(EarthView::World::Graphic::CResource *res);
                
				/// <summary>
				/// 通知资源被卸载完成			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual void _notifyResourceUnloaded(EarthView::World::Graphic::CResource *res);

				/// <summary>
				/// 准备资源			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString &name,
                                            const EVString &group, ev_bool isManual,
                                            EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *loadParams,
                                            ev_bool backgroundThread);
                virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString &name,
                                            const EVString &group, ev_bool isManual,
                                            EarthView::World::Graphic::CManualResourceLoader *ref_loader , const EarthView::World::Core::NameValuePairList *loadParams);
                virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString &name,
                                            const EVString &group, ev_bool isManual,
                                            EarthView::World::Graphic::CManualResourceLoader *ref_loader );
                virtual EarthView::World::Graphic::ResourcePtr prepare(const EVString &name,
                                            const EVString &group, ev_bool isManual);


				/// <summary>
				/// 加载资源			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::ResourcePtr load(const EVString &name, const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *loadParams, ev_bool backgroundThread);
                virtual EarthView::World::Graphic::ResourcePtr load(const EVString &name, const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *loadParams);
                virtual EarthView::World::Graphic::ResourcePtr load(const EVString &name, const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                virtual EarthView::World::Graphic::ResourcePtr load(const EVString &name, const EVString &group, ev_bool isManual);
                virtual EarthView::World::Graphic::ResourcePtr load(const EVString &name, const EVString &group);
                /***** Gets the file patterns which should be used to find scripts for this
                	EarthView::World::Graphic::CResourceManager.
                @remarks
                	Some resource managers can read script files in order to define
                	resources ahead of time. These resources are added to the available
                	list inside the manager, but none are loaded initially. This allows
                	you to load the items that are used on demand, or to load them all
                	as a group if you wish (through CResourceGroupManager).
                @par
                	This method lets you determine the file pattern which will be used
                	to identify scripts intended for this manager.
                @returns
                	A list of file patterns, in the order they should be searched in.
                @see isScriptingSupported, parseScript
                ****/
                virtual const EarthView::World::Core::StringVector &getScriptPatterns() const
                {
                    return mScriptPatterns;
                }
                
				/// <summary>
				/// 解析脚本			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName)
                {
                   
                }
                
				/// <summary>
				/// 获得此类型资源的加载顺序			
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                virtual Real getLoadingOrder() const
                {
                    return mLoadOrder;
                }
                
				/// <summary>
				/// 获得资源的类型	
				/// </summary>		
				/// <param name=""></param>
				/// <returns></returns>
                const EVString &getResourceType() const
                {
                    return mResourceType;
                }
                /***** Sets whether this manager and its resources habitually produce log output ****/
                virtual void setVerbose(ev_bool v)
                {
                    mVerbose = v;
                }
                /***** Gets whether this manager and its resources habitually produce log output ****/
                virtual ev_bool getVerbose()
                {
                    return mVerbose;
                }
                /***** Definition of a pool of resources, which users can use to reuse similar
                	resources many times without destroying and recreating them.
                @remarks
                	This is a simple utility class which allows the reuse of resources
                	between code which has a changing need for them. For example,
                ****/
                class EV_GRAPHIC_DLL CResourcePool : public EarthView::World::Core::CAllocatedObject
                {
                protected:
                    EVString mName;
                ev_private:
                    CResourcePool(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CResourcePool(const EVString &name);

                    ~CResourcePool();
                    //// Get the name of the pool
                    const EVString &getName() const;
                protected:
                    typedef list<EarthView::World::Graphic::ResourcePtr> ItemList;
                    ItemList mItems;
                    EV_AUTO_MUTEX
                public:
                    virtual EarthView::World::Graphic::ResourcePtr removeItem()
                    {
                        EV_LOCK_AUTO_MUTEX
                        std::pair<ev_bool, EarthView::World::Graphic::ResourcePtr> ret;
                        if (mItems.empty())
                        {
                            ret.first = false;
                            return ResourcePtr();
                        }
                        else
                        {
                            ret.first = true;
                            ret.second = mItems.front();
                            mItems.pop_front();
                            return ret.second;
                        }
                        ///return ret;
                    }
                    /***** Add a new item to the pool.
                    ****/
                    virtual void addItem(const EarthView::World::Graphic::ResourcePtr &i)
                    {
                        EV_LOCK_AUTO_MUTEX
                        mItems.push_front(i);
                    }
                    //// Clear the pool
                    virtual void clear();
                };

                //// Create a resource pool, or reuse one that already exists
                EarthView::World::Graphic::CResourceManager::CResourcePool *getResourcePool(const EVString &name);
                //// Destroy a resource pool
                void destroyResourcePool(EarthView::World::Graphic::CResourceManager::CResourcePool *pool);
                //// Destroy a resource pool
                void destroyResourcePool(const EVString &name);
                //// destroy all pools
                void destroyAllResourcePools();


            protected:
                /***** Allocates the next handle. ****/
                ResourceHandle getNextHandle();
                /***** Create a new resource instance compatible with this manager (no custom
                	parameters are populated at this point).
                @remarks
                	Subclasses must override this method and create a subclass of CResource.
                @param name The unique name of the resource
                @param group The name of the resource group to attach this new resource to
                @param isManual Is this resource manually loaded? If so, you should really
                	populate the loader parameter in order that the load process
                	can call the loader back when loading is required.
                @param loader Pointer to a ManualLoader implementation which will be called
                	when the EarthView::World::Graphic::CResource wishes to load (should be supplied if you set
                	isManual to true). You can in fact leave this parameter null
                	if you wish, but the EarthView::World::Graphic::CResource will never be able to reload if
                	anything ever causes it to unload. Therefore provision of a proper
                	ManualLoader instance is strongly recommended.
                @param createParams If any parameters are required to create an instance,
                    they should be supplied here as name / value pairs. These do not need
                    to be set on the instance (handled elsewhere), just used if required
                    to differentiate which concrete class is created.

                ****/
            ev_internal:
                virtual EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
                                              const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *loader,
                                              const EarthView::World::Core::NameValuePairList *createParams)
                {
                    return NULL;
                }
                /***** Add a newly created resource to the manager (note weak reference) ****/
                virtual void addImpl( EarthView::World::Graphic::ResourcePtr &res );
                /***** Remove a resource from this manager; remove it from the lists. ****/
                virtual void removeImpl( EarthView::World::Graphic::ResourcePtr &res );
                /***** Checks memory usage and pages out if required.
                ****/
                virtual void checkUsage();

            public:
                /****typedef EarthView::World::Core::hashmap< EVString, EarthView::World::Graphic::ResourcePtr > EarthView::World::Graphic::CResourceManager::ResourceMap;
                typedef EarthView::World::Core::hashmap< EVString, EarthView::World::Graphic::CResourceManager::ResourceMap > ResourceWithGroupMap;****/
                /****typedef map<ResourceHandle, EarthView::World::Graphic::ResourcePtr> ResourceHandleMap;****/
                class EV_GRAPHIC_DLL ResourceMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ResourceMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    ResourceMap() {}
                    ev_bool push(const EVString &key, EarthView::World::Graphic::ResourcePtr const &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const EVString &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Graphic::ResourcePtr &operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::ResourcePtr &get(const EVString &key)
                    {
                        return mList[key];
                    }
                    void erase(const EVString &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
                    typedef EarthView::World::Core::hashmap<EVString, EarthView::World::Graphic::ResourcePtr, _StringHash> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(const EVString &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const EVString &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };

                class EV_GRAPHIC_DLL ResourceWithGroupMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ResourceWithGroupMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    ResourceWithGroupMap() {}
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CResourceManager::ResourceMap const &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const EVString &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Graphic::CResourceManager::ResourceMap &operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CResourceManager::ResourceMap &get(const EVString &key)
                    {
                        return mList[key];
                    }
                    void erase(const EVString &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
                    typedef EarthView::World::Core::hashmap<EVString, EarthView::World::Graphic::CResourceManager::ResourceMap, _StringHash> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(const EVString &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const EVString &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };


                class EV_GRAPHIC_DLL ResourceHandleMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const ResourceHandle &key, const EarthView::World::Graphic::ResourcePtr &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::ResourcePtr)val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const ResourceHandle &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Graphic::ResourcePtr &operator[](const ResourceHandle &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::ResourcePtr &get(const ResourceHandle &key)
                    {
                        return mList[key];
                    }
                    void erase(const ResourceHandle &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
                    ResourceHandleMap() {}
                    ResourceHandleMap(EarthView::World::Core::CNameValuePairList *pList) {}
                    typedef map<ResourceHandle, EarthView::World::Graphic::ResourcePtr> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);
                    _Pairib insert(const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(const ResourceHandle &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const ResourceHandle &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL ResourceHandlePair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ResourceHandlePair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    ResourceHandlePair() {}
                    ResourceHandle first;
                    EarthView::World::Graphic::ResourcePtr second;
                };
                class EV_GRAPHIC_DLL ResourceHandleIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<ResourceHandleMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;

                    ResourceHandleIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    EarthView::World::Graphic::CResourceManager::ResourceHandleIterator &operator=(_in const EarthView::World::Graphic::CResourceManager::ResourceHandleIterator &other)
                    {
                        if ( &other == this )
                            return *this;
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        return *this;
                    }
                    ResourceHandleIterator(ResourceHandleMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    ResourceHandleIterator(const ResourceHandleIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~ResourceHandleIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    KeyType peekNextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    ValueType peekNextValue (  ) const
                    {
                        return mIterator->peekNextValue();
                    }
                    const PointerType peekNextValuePtr ()
                    {
                        mvt = peekNextValue();
                        return &mvt;
                    }
                    ValueType getNext()
                    {
                        return mIterator->getNext() ;
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    IteratorType &current()
                    {
                        return mIterator->current();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                ev_private:
                    ResourceHandleIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(ResourceHandleMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CResourceManager::ResourceHandleIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                public:
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }
                    ResourceHandle nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    EarthView::World::Graphic::ResourcePtr nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    EarthView::World::Graphic::ResourcePtr *nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    EarthView::World::Graphic::ResourcePtr next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Graphic::CResourceManager::ResourceHandlePair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const EarthView::World::Graphic::CResourceManager::ResourceHandlePair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const EarthView::World::Graphic::CResourceManager::ResourceHandlePair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CResourceManager::ResourceHandlePair mBeginPair;
                    EarthView::World::Graphic::CResourceManager::ResourceHandlePair mCurrentPair;
                    EarthView::World::Graphic::CResourceManager::ResourceHandlePair mEndPair;
                    EarthView::World::Graphic::ResourcePtr mptr;
                    ValueType mvt;
                };

            protected:
                ResourceHandleMap mResourcesByHandle;
                EarthView::World::Graphic::CResourceManager::ResourceMap mResources;
                ResourceWithGroupMap mResourcesWithGroup;
                ResourceHandle mNextHandle;
                ev_size_t mMemoryBudget; 			/// In bytes
                CAtomicScalar<ev_size_t> mMemoryUsage; 			/// In bytes
                ev_bool mVerbose;
                /// IMPORTANT - all subclasses must populate the fields below
                //// Patterns to use to look for scripts if supported (e.g. *.overlay)
                EarthView::World::Core::StringVector mScriptPatterns;
                //// Loading order relative to other managers, higher is later
                Real mLoadOrder;
                //// EVString identifying the resource type this manager handles
                EVString mResourceType;

            public:
                /**** typedef EarthView::World::Core::CMapIterator<ResourceHandleMap> ResourceMapIterator;****/
                /***** Returns an iterator over all resources in this manager.
                @note
                    Use of this iterator is NOT thread safe!
                ****/
                EarthView::World::Graphic::CResourceManager::ResourceHandleIterator getResourceIterator()
                {
                    return ResourceHandleIterator(mResourcesByHandle.begin(), mResourcesByHandle.end());
                }
            protected:
                typedef map<EVString, EarthView::World::Graphic::CResourceManager::CResourcePool *> ResourcePoolMap;
                ResourcePoolMap mResourcePoolMap;



            };
        }
    }
}

#endif

