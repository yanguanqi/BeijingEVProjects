#ifndef _CResourceGroupManager_H__
#define _CResourceGroupManager_H__
#include "graphic/graphic_config.h"
#include <core/commonstringpairlist.h>
#include <core/iteratorwrapper.h>
#include "mathengine/ev_math.h"

#include "resource.h"
#include "core/archive.h"

#include <ctime>
///// If X11/Xlib.h gets included before this header (for example it happens when
///// including wxWidgets and FLTK), EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::Status is defined as an ev_int32 which we don't
///// want as we have an enum named Status.
#ifdef Status
#undef Status
#endif



namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class DataStreamPtr;
			class CArchive;
			class CArchiveFactory;
			class CArchiveManager;
		}
	}
}
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CScriptLoader;
            class CSceneManager;
            
            class EV_GRAPHIC_DLL CResourceGroupListener : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CResourceGroupListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                virtual ~CResourceGroupListener() {}
                CResourceGroupListener() {}

                /***** This event is fired when a resource group begins parsing scripts.
                @note
                	Remember that if you are loading resources through CResourceBackgroundQueue,
                	these callbacks will occur in the background thread, so you should
                	not perform any thread-unsafe actions in this callback if that's the
                	case (check the group name / script name).
                @param groupName The name of the group
                @param scriptCount The number of scripts which will be parsed
                ****/
                virtual void resourceGroupScriptingStarted(const EVString &groupName, ev_size_t scriptCount) {}
                /***** This event is fired when a script is about to be parsed.
                	@param scriptName Name of the to be parsed
                	@param skipThisScript A boolean passed by reference which is by default set to
                	false. If the event sets this to true, the script will be skipped and not
                	parsed. Note that in this case the scriptParseEnded event will not be raised
                	for this script.
                ****/
                virtual void scriptParseStarted(const EVString &scriptName, ev_bool &skipThisScript) {}
                /***** This event is fired when the script has been fully parsed.
                ****/
                virtual void scriptParseEnded(const EVString &scriptName, ev_bool skipped) {}
                /***** This event is fired when a resource group finished parsing scripts. ****/
                virtual void resourceGroupScriptingEnded(const EVString &groupName) {}
                /***** This event is fired  when a resource group begins preparing.
                @param groupName The name of the group being prepared
                @param resourceCount The number of resources which will be prepared, including
                    a number of stages required to prepare any linked world geometry
                ****/
                virtual void resourceGroupPrepareStarted(const EVString &groupName, ev_size_t resourceCount)
                {
                    //groupName;
                    //resourceCount;
                }
                /***** This event is fired when a declared resource is about to be prepared.
                @param resource Weak reference to the resource prepared.
                ****/
                virtual void resourcePrepareStarted(const EarthView::World::Graphic::ResourcePtr &resource)
                {
                    //resource;
                }
                /***** This event is fired when the resource has been prepared.
                ****/
                virtual void resourcePrepareEnded() {}
                /***** This event is fired when a stage of preparing linked world geometry
                    is about to start. The number of stages required will have been
                    included in the resourceCount passed in resourceGroupLoadStarted.
                @param description Text description of what was just prepared
                ****/
                virtual void worldGeometryPrepareStageStarted(const EVString &description)
                {
                    //description;
                }
                /***** This event is fired when a stage of preparing linked world geometry
                    has been completed. The number of stages required will have been
                    included in the resourceCount passed in resourceGroupLoadStarted.
                @param description Text description of what was just prepared
                ****/
                virtual void worldGeometryPrepareStageEnded() {}
                /***** This event is fired when a resource group finished preparing. ****/
                virtual void resourceGroupPrepareEnded(const EVString &groupName)
                {
                    //groupName;
                }
                /***** This event is fired  when a resource group begins loading.
                @param groupName The name of the group being loaded
                @param resourceCount The number of resources which will be loaded, including
                    a number of stages required to load any linked world geometry
                ****/
                virtual void resourceGroupLoadStarted(const EVString &groupName, ev_size_t resourceCount) {}
                /***** This event is fired when a declared resource is about to be loaded.
                @param resource Weak reference to the resource loaded.
                ****/
                virtual void resourceLoadStarted(const EarthView::World::Graphic::ResourcePtr &resource) {}
                /***** This event is fired when the resource has been loaded.
                ****/
                virtual void resourceLoadEnded() {}
                /***** This event is fired when a stage of loading linked world geometry
                    is about to start. The number of stages required will have been
                    included in the resourceCount passed in resourceGroupLoadStarted.
                @param description Text description of what was just loaded
                ****/
                virtual void worldGeometryStageStarted(const EVString &description) {}
                /***** This event is fired when a stage of loading linked world geometry
                    has been completed. The number of stages required will have been
                    included in the resourceCount passed in resourceGroupLoadStarted.
                @param description Text description of what was just loaded
                ****/
                virtual void worldGeometryStageEnded() {}
                /***** This event is fired when a resource group finished loading. ****/
                virtual void resourceGroupLoadEnded(const EVString &groupName) {}
            };
            
            class EV_GRAPHIC_DLL CResourceLoadingListener : public EarthView::World::Core::CBaseObject
            {
            public:
                virtual ~CResourceLoadingListener() {}
                CResourceLoadingListener() {}
            ev_private:
                CResourceLoadingListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
                /***** This event is called when a resource beings loading. ****/
            ev_internal:
                virtual EarthView::World::Core::DataStreamPtr resourceLoading(const EVString &name, const EVString &group, EarthView::World::Graphic::CResource *resource)
                {
                    return EarthView::World::Core::DataStreamPtr();
                }
                /***** This event is called when a resource stream has been opened, but not processed yet.
                @remarks
                	You may alter the stream if you wish or alter the incoming pointer to point at
                	another stream if you wish.
                ****/
                virtual void resourceStreamOpened(const EVString &name, const EVString &group, EarthView::World::Graphic::CResource *resource, EarthView::World::Core::DataStreamPtr &dataStream) {}
                /***** This event is called when a resource collides with another existing one in a resource manager
                  ****/
                virtual ev_bool resourceCollision(EarthView::World::Graphic::CResource *resource, EarthView::World::Graphic::CResourceManager *resourceManager)
                {
                    return false;
                }
            };
			
			/// <summary>
			/// 资源组管理器(单键)
			/// </summary>
            class EV_GRAPHIC_DLL CResourceGroupManager : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                EV_AUTO_MUTEX 			/// public to allow external locking
            private:
                static EarthView::World::Graphic::CResourceGroupManager *ms_Singleton;
            public:
                static EarthView::World::Graphic::CResourceGroupManager &getSingleton();
                static EarthView::World::Graphic::CResourceGroupManager *getSingletonPtr();

                //// Default resource group name
                static EVString DEFAULT_RESOURCE_GROUP_NAME;
                //// Internal resource group name (should be used by EV_World internal only)
                static EVString INTERNAL_RESOURCE_GROUP_NAME;
                //// Special resource group name which causes resource group to be automatically determined based on searching for the resource in all groups.
                static EVString AUTODETECT_RESOURCE_GROUP_NAME;
                //// The number of reference counts held per resource by the resource system
                static ev_size_t RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS;
                //// Nested struct defining a resource declaration
                class EV_GRAPHIC_DLL ResourceDeclaration : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ResourceDeclaration(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    ResourceDeclaration() {}
                    EVString resourceName;
                    EVString resourceType;
                    EarthView::World::Graphic::CManualResourceLoader *loader;
                    EarthView::World::Core::NameValuePairList parameters;
                };
                //// List of resource declarations

                
                class EV_GRAPHIC_DLL ResourceDeclarationList : public EarthView::World::Core::CBaseObject         			///函数_updateRenderQueue中的list封装类
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration const &t)
                    {
                        return mList.insert(pos, t);
                    }

                private:
                    InternalList mList;
                ev_private:
                    ResourceDeclarationList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    ResourceDeclarationList() {}
                    void push_back(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration const &t)
                    {
                        mList.push_back(t);
                    }
                    void push_front(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration const   &t)
                    {
                        mList.push_front(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    void pop_front()
                    {
                        mList.pop_front();
                    }

                    EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration &back()
                    {
                        return mList.back();
                    }
                    EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration &at(ev_uint32 pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        return *it;
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration const &t)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.insert(it, t);
                    }
                    void remove(ev_size_t pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }

                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                
                class EV_GRAPHIC_DLL ResourceManagerMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CResourceManager *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::CResourceManager *)ref_val;
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
                    EarthView::World::Graphic::CResourceManager*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::CResourceManager*& get(const EVString &key)
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
                    ResourceManagerMap() {}
                ev_private:
                    ResourceManagerMap(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CResourceManager *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
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
                class EV_GRAPHIC_DLL ResourceManagerMapPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ResourceManagerMapPair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    ResourceManagerMapPair() {}
                    EVString first;
                    EarthView::World::Graphic::CResourceManager *second;
                };

                /****typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap> EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator;****/
                class EV_GRAPHIC_DLL ResourceManagerIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ResourceManagerIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                public:
                    ResourceManagerIterator(EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    ResourceManagerIterator(const ResourceManagerIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~ResourceManagerIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;

                    ResourceManagerIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator &operator=(_in const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator &other)
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
                public:
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }
                    ev_uint16 nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    EarthView::World::Graphic::CResourceManager *nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    EarthView::World::Graphic::CResourceManager **nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    EarthView::World::Graphic::CResourceManager *next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair mBeginPair;
                    EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair mCurrentPair;
                    EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair mEndPair;
                    EarthView::World::Graphic::CResourceManager *mptr;
                    ValueType mvt;
                };

                //// EarthView::World::Graphic::CResource location entry
                class EV_GRAPHIC_DLL CResourceLocation : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CResourceLocation(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    //// Pointer to the archive which is the destination
                    EarthView::World::Core::CArchive *archive;
                    //// Whether this location was added recursively
                    ev_bool recursive;
                    CResourceLocation() {}
                };
                //// List of possible file locations
                ///typedef list<ResourceLocation*> EarthView::World::Graphic::CResourceGroupManager::LocationList;
                class EV_GRAPHIC_DLL LocationList : public EarthView::World::Core::CBaseObject         			///函数_updateRenderQueue中的list封装类
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *const &t)
                    {
                        return mList.insert(pos, t);
                    }

                private:
                    InternalList mList;
                ev_private:
                    LocationList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    LocationList() {}
                    void push_back(EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void push_front(EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *const   &ref_t)
                    {
                        mList.push_front(ref_t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    void pop_front()
                    {
                        mList.pop_front();
                    }

                    EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& back()
                    {
                        return mList.back();
                    }
                    EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& at(ev_uint32 pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        return *it;
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CResourceGroupManager::CResourceLocation *const &ref_t)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.insert(it, ref_t);
                    }
                    void remove(ev_size_t pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }

                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                //// EarthView::World::Graphic::CResource index entry, resourcename->location
                ///typedef map<EVString, CArchive*> EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex;
                class EV_GRAPHIC_DLL ResourceLocationIndex : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ResourceLocationIndex(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ResourceLocationIndex();
                    /// <summary>
                    /// 增加动画集合元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push( _in const EVString &key, _in EarthView::World::Core::CArchive *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist( _in const EVString &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Core::CArchive*& operator[]( _in const EVString &key);
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Core::CArchive*& get( _in const EVString &key);
                    /// <summary>
                    /// 删除键对应的键值对
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase( _in const EVString &key);
                    /// <summary>
                    /// 返回集合的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空集合
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断集合是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>集合为空返回true，否则false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Core::CArchive *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert( _in const value_type &val);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    iterator find( _in const EVString &key);
                    const_iterator find( _in const EVString &key) const;
                private:
                    InternalList mList;
                };
                //// List of resources which can be loaded / unloaded
                ///typedef list<EarthView::World::Graphic::ResourcePtr> EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList;
                class EV_GRAPHIC_DLL LoadUnloadResourceList : public EarthView::World::Core::CBaseObject         			///函数_updateRenderQueue中的list封装类
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::ResourcePtr> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::ResourcePtr const &t)
                    {
                        return mList.insert(pos, t);
                    }

                private:
                    InternalList mList;
                ev_private:
                    LoadUnloadResourceList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    LoadUnloadResourceList() {}
                    void push_back(EarthView::World::Graphic::ResourcePtr const &t)
                    {
                        mList.push_back(t);
                    }
                    void push_front(EarthView::World::Graphic::ResourcePtr const   &t)
                    {
                        mList.push_front(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    void pop_front()
                    {
                        mList.pop_front();
                    }

                    EarthView::World::Graphic::ResourcePtr &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::ResourcePtr &back()
                    {
                        return mList.back();
                    }
                    EarthView::World::Graphic::ResourcePtr &at(ev_uint32 pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        return *it;
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::ResourcePtr const &t)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.insert(it, t);
                    }
                    void remove(ev_size_t pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }

                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                class EV_GRAPHIC_DLL CResourceGroup : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CResourceGroup(EarthView::World::Core::CNameValuePairList *pList) {}
                    //// General mutex for dealing with group content
                    EV_AUTO_MUTEX
                    //// EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::Status-specific mutex, separate from content-changing mutex
                    EV_MUTEX(statusMutex)
                public:
                    enum Status
                    {
                        UNINITIALSED = 0,
                        INITIALISING = 1,
                        INITIALISED = 2,
                        LOADING = 3,
                        LOADED = 4
                    };

                    CResourceGroup() {}
                    //// Group name
                    EVString name;
                    //// Group status
                    EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::Status groupStatus;
                    //// List of possible locations to search
                    EarthView::World::Graphic::CResourceGroupManager::LocationList locationList;
                    //// Index of resource names to locations, built for speedy access (case sensitive archives)
                    EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex resourceIndexCaseSensitive;
                    //// Index of resource names to locations, built for speedy access (case insensitive archives)
                    EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex resourceIndexCaseInsensitive;
                    //// Pre-declared resources, ready to be created
                    EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList resourceDeclarations;


                    //// Created resources which are ready to be loaded / unloaded
                    /// Group by loading order of the type (defined by EarthView::World::Graphic::CResourceManager)
                    /// (e.g. skeletons and materials before meshes)
                    ///typedef map<Real, EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*> LoadResourceOrderMap;
                    class EV_GRAPHIC_DLL  LoadUnloadResourceOrderMap : public EarthView::World::Core::CBaseObject
                    {
                    public:
                        LoadUnloadResourceOrderMap() {}
                        ev_bool push(const Real &key, EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *const &ref_val)
                        {
                            if(mList.find(key) == mList.end())
                            {
                                mList[key] = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *)ref_val;
                                return true;
                            }
                            else
                            {
                                return false;
                            }
                        }
                        ev_bool exist(const Real &key)
                        {
                            return mList.find(key) != mList.end();
                        }
                        EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*& operator[](const Real &key)
                        {
                            return get(key);
                        }
                        EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*& get(const Real &key)
                        {
                            return mList[key];
                        }
                        void erase(const Real &key)
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
                        LoadUnloadResourceOrderMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    ev_private:
                        typedef map<Real, EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList *> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::mapped_type mapped_type;
                        typedef InternalList::key_type key_type;
                        typedef InternalList::value_type value_type;
                        typedef pair<InternalList::iterator, bool> _Pairib;
                        RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        _Pairib insert(const value_type &val)
                        {
                            return mList.insert(val);
                        }
                        iterator find(const Real &key)
                        {
                            return mList.find(key);
                        }
                        const_iterator find(const Real &key) const
                        {
                            return mList.find(key);
                        }
                    private:
                        InternalList mList;
                    };
                    EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap loadResourceOrderMap;
                    //// Linked world geometry, as passed to setWorldGeometry
                    EVString worldGeometry;
                    //// Scene manager to use with linked world geometry
                    EarthView::World::Graphic::CSceneManager *worldGeometrySceneManager;
                    /// in global pool flag - if true the resource will be loaded even a different	group was requested in the load method as a parameter.
                    ev_bool inGlobalPool;
                    void addToIndex(const EVString &filename, EarthView::World::Core::CArchive *ref_arch);
                    void removeFromIndex(const EVString &filename, EarthView::World::Core::CArchive *arch);
                    void removeFromIndex(EarthView::World::Core::CArchive *arch);

					ev_uint16 mRefCount;
                };
            protected:
                //// Map of resource types (strings) to ResourceManagers, used to notify them to load / unload group contents
                EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap mResourceManagerMap;
                //// Map of loading order (Real) to EarthView::World::Graphic::CScriptLoader, used to order script parsing
                typedef multimap<Real, EarthView::World::Graphic::CScriptLoader *> ScriptLoaderOrderMap;
                ScriptLoaderOrderMap mScriptLoaderOrderMap;
                typedef vector<EarthView::World::Graphic::CResourceGroupListener *> ResourceGroupListenerList;
                ResourceGroupListenerList mResourceGroupListenerList;
                EarthView::World::Graphic::CResourceLoadingListener *mLoadingListener;

                //// Map from resource group names to groups
                typedef map<EVString, EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *> ResourceGroupMap;
                ResourceGroupMap mResourceGroupMap;
                //// Group name for world resources
                EVString mWorldGroupName;
                /***** Parses all the available scripts found in the resource locations
                for the given group, for all ResourceManagers.
                @remarks
                	Called as part of initialiseResourceGroup
                ****/
                void parseResourceGroupScripts(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *grp);
                /***** Create all the pre-declared resources.
                @remarks
                	Called as part of initialiseResourceGroup
                ****/
                void createDeclaredResources(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *grp);
                /***** Adds a created resource to a group. ****/
                void addCreatedResource(EarthView::World::Graphic::ResourcePtr &res, EarthView::World::Graphic::CResourceGroupManager::CResourceGroup &group);
                
                /***** Drops contents of a group, leave group there, notify ResourceManagers. ****/
                void dropGroupContents(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *grp);
                /***** Delete a group for shutdown - don't notify ResourceManagers. ****/
                void deleteGroup(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *grp);
                //// Internal find method for auto groups
                EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *findGroupContainingResourceImpl(const EVString &filename);
                //// Internal event firing method
                void fireResourceGroupScriptingStarted(const EVString &groupName, ev_size_t scriptCount);
                //// Internal event firing method
                void fireScriptStarted(const EVString &scriptName, ev_bool &skipScript);
                //// Internal event firing method
                void fireScriptEnded(const EVString &scriptName, ev_bool skipped);
                //// Internal event firing method
                void fireResourceGroupScriptingEnded(const EVString &groupName);
                //// Internal event firing method
                void fireResourceGroupLoadStarted(const EVString &groupName, ev_size_t resourceCount);
                //// Internal event firing method
                void fireResourceLoadStarted(const EarthView::World::Graphic::ResourcePtr &resource);
                //// Internal event firing method
                void fireResourceLoadEnded();
                //// Internal event firing method
                void fireResourceGroupLoadEnded(const EVString &groupName);
                //// Internal event firing method
                void fireResourceGroupPrepareStarted(const EVString &groupName, ev_size_t resourceCount);
                //// Internal event firing method
                void fireResourcePrepareStarted(const EarthView::World::Graphic::ResourcePtr &resource);
                //// Internal event firing method
                void fireResourcePrepareEnded();
                //// Internal event firing method
                void fireResourceGroupPrepareEnded(const EVString &groupName);
                //// Stored current group - optimisation for when bulk loading a group
                EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *mCurrentGroup;
            ev_private:
                CResourceGroupManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CResourceGroupManager();

                virtual ~CResourceGroupManager();
				
				/// <summary>
				/// 创建资源组
				/// </summary>				
				/// <param name="name">组名称</param>
				/// <param name="inGlobalPool">是否为全局组</param>
				/// <returns></returns>
                void createResourceGroup(const EVString &name, const ev_bool inGlobalPool);
                void createResourceGroup(const EVString &name);

				/// <summary>
				/// 创建资源组，带引用计数
				/// </summary>				
				/// <param name="name">组名称</param>
				/// <param name="inGlobalPool">是否为全局组</param>
				/// <returns></returns>
				void createResourceGroupWithRefCount(const EVString &name, const ev_bool inGlobalPool);
				void createResourceGroupWithRefCount(const EVString &name);

				/// <summary>
				/// 获得资源组
				/// </summary>				
				/// <param name="name">组名称</param>				
				/// <returns></returns>
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *getResourceGroup(const EVString &name);

				/// <summary>
				/// 初始化资源组(组内资源将被创建)
				/// </summary>				
				/// <param name="name">组名称</param>				
				/// <returns></returns>
                void initialiseResourceGroup(const EVString &name);

				/// <summary>
				/// 解析脚本
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                ev_bool parseScript(EarthView::World::Core::DataStreamPtr stream,const EVString& groupName);
                
				/// <summary>
				/// 初始化所有资源组(组内资源将被创建)
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void initialiseAllResourceGroups();

				/// <summary>
				/// 准备资源组(加载资源文件，准备资源)
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void prepareResourceGroup(const EVString &name, ev_bool prepareMainResources, ev_bool prepareWorldGeom);
                void prepareResourceGroup(const EVString &name, ev_bool prepareMainResources);
                void prepareResourceGroup(const EVString &name);
				
				/// <summary>
				/// 加载资源组
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void loadResourceGroup(const EVString &name, ev_bool loadMainResources, ev_bool loadWorldGeom);
                void loadResourceGroup(const EVString &name, ev_bool loadMainResources);
                void loadResourceGroup(const EVString &name);
                
				/// <summary>
				/// 卸载资源组
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void unloadResourceGroup(const EVString &name, ev_bool reloadableOnly);
                void unloadResourceGroup(const EVString &name);
                
				/// <summary>
				/// 卸载资源组内未被引用的资源
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void unloadUnreferencedResourcesInGroup(const EVString &name, ev_bool reloadableOnly);
                void unloadUnreferencedResourcesInGroup(const EVString &name);
                
				/// <summary>
				/// 清理资源组内的资源
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void clearResourceGroup(const EVString &name);

				/// <summary>
				/// 销毁资源组
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void destroyResourceGroup(const EVString &name);

				/// <summary>
				/// 销毁空的资源组, 根据引用计数。与createResourceGroupWithRefCount配对
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
				void destroyResourceGroupWithRefCount(const EVString &name);
                
				/// <summary>
				/// 资源组是否已经被初始化
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                ev_bool isResourceGroupInitialised(const EVString &name);
                
				/// <summary>
				/// 资源组是否已经被加载
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                ev_bool isResourceGroupLoaded(const EVString &name);
                
				/// <summary>
				/// 资源组是否已经存在
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                ev_bool resourceGroupExists(const EVString &name);
                
				/// <summary>
				/// 添加资源文件定位
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void addResourceLocation(const EVString &name, const EVString &locType, const EVString &resGroup, ev_bool recursive);
                void addResourceLocation(const EVString &name, const EVString &locType, const EVString &resGroup);
                void addResourceLocation(const EVString &name, const EVString &locType);
                
				/// <summary>
				/// 移除资源文件定位
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void removeResourceLocation(const EVString &name, const EVString &resGroup);
                void removeResourceLocation(const EVString &name);

				/// <summary>
				/// 设置资源文件定位
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void setResourceLocation(const EVString &name, const EVString &locType, const EVString &resGroup , ev_bool recursive);
                void setResourceLocation(const EVString &name, const EVString &locType, const EVString &resGroup);
                void setResourceLocation(const EVString &name, const EVString &locType);
                

				/// <summary>
				/// 资源文件定位是否已经存在
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                ev_bool resourceLocationExists(const EVString &name, const EVString &resGroup);
                ev_bool resourceLocationExists(const EVString &name);
                
				/// <summary>
				/// 声明资源
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void declareResource(const EVString &name, const EVString &resourceType,
                                     const EVString &groupName,
                                     const EarthView::World::Core::NameValuePairList &loadParameters);
                void declareResource(const EVString &name, const EVString &resourceType, const EVString &groupName);
                void declareResource(const EVString &name, const EVString &resourceType);                
                void declareResource(const EVString &name, const EVString &resourceType,
                                     const EVString &groupName, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                     const EarthView::World::Core::NameValuePairList &loadParameters);
                void declareResource(const EVString &name, const EVString &resourceType,
                                     const EVString &groupName, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
				
				/// <summary>
				/// 反声明资源
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                void undeclareResource(const EVString &name, const EVString &groupName);
                
				/// <summary>
				/// 打开资源文件得到数据流
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::DataStreamPtr openResource(const EVString &resourceName, const EVString &groupName, ev_bool searchGroupsIfNotFound, EarthView::World::Graphic::CResource *resourceBeingLoaded);
                EarthView::World::Core::DataStreamPtr openResource(const EVString &resourceName, const EVString &groupName , ev_bool searchGroupsIfNotFound);
                EarthView::World::Core::DataStreamPtr openResource(const EVString &resourceName, const EVString &groupName);
                EarthView::World::Core::DataStreamPtr openResource(const EVString &resourceName);
                
				/// <summary>
				/// 打开多个资源文件得到数据流
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::DataStreamListPtr openResources(const EVString &pattern, const EVString &groupName);
                EarthView::World::Core::DataStreamListPtr openResources(const EVString &pattern);

				/// <summary>
				/// 枚举组内资源名称
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::StringVectorPtr listResourceNames(const EVString &groupName, ev_bool dirs);
                EarthView::World::Core::StringVectorPtr listResourceNames(const EVString &groupName);
               
				/// <summary>
				/// 枚举组内资源文件
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::FileInfoListPtr listResourceFileInfo(const EVString &groupName, ev_bool dirs);
                EarthView::World::Core::FileInfoListPtr listResourceFileInfo(const EVString &groupName);
                
				/// <summary>
				/// 查找组内资源文件或文件夹
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::StringVectorPtr findResourceNames(const EVString &groupName, const EVString &pattern,  ev_bool dirs);
                EarthView::World::Core::StringVectorPtr findResourceNames(const EVString &groupName, const EVString &pattern);
                
				/// <summary>
				/// 询问组内是否存在资源文件
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                ev_bool resourceExists(const EVString &group, const EVString &filename);               
                ev_bool resourceExists(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *group, const EVString &filename);

				/// <summary>
				/// 询问资源文件是否存在于任一组内
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                ev_bool resourceExistsInAnyGroup(const EVString &filename);
                
				/// <summary>
				/// 返回包含指定资源文件的组名
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                const EVString &findGroupContainingResource(const EVString &filename);
                
				/// <summary>
				/// 查找组内满足一定条件的资源文件或文件夹
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::FileInfoListPtr findResourceFileInfo(const EVString &group, const EVString &pattern, ev_bool dirs);
                EarthView::World::Core::FileInfoListPtr findResourceFileInfo(const EVString &group, const EVString &pattern);
                /***** Retrieve the modification time of a given file ****/
                ev_int64 resourceModifiedTime(const EVString &group, const EVString &filename);
                
				/// <summary>
				/// 枚举资源文件定位
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::StringVectorPtr listResourceLocations(const EVString &groupName);
                
				/// <summary>
				/// 查找资源文件定位
				/// </summary>				
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Core::StringVectorPtr findResourceLocation(const EVString &groupName, const EVString &pattern);
                /***** Retrieve the modification time of a given file ****/
                ev_int64 resourceModifiedTime(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup *group, const EVString &filename);

                /***** Create a new resource file in a given group.
                @remarks
                	This method creates a new file in a resource group and passes you back a
                	writeable stream.
                @param filename The name of the file to create
                @param groupName The name of the group in which to create the file
                @param overwrite If true, an existing file will be overwritten, if false
                	an error will occur if the file already exists
                @param locationPattern If the resource group contains multiple locations,
                	then usually the file will be created in the first writable location. If you
                	want to be more specific, you can include a location pattern here and
                	only locations which match that pattern (as determined by CStringUtil::match)
                	will be considered candidates for creation.
                ****/
                EarthView::World::Core::DataStreamPtr createResource(const EVString &filename, const EVString &groupName, ev_bool overwrite , const EVString &locationPattern);
                EarthView::World::Core::DataStreamPtr createResource(const EVString &filename, const EVString &groupName, ev_bool overwrite);
                EarthView::World::Core::DataStreamPtr createResource(const EVString &filename, const EVString &groupName);
                EarthView::World::Core::DataStreamPtr createResource(const EVString &filename);
                /***** Delete a single resource file.
                @param filename The name of the file to delete.
                @param groupName The name of the group in which to search
                @param locationPattern If the resource group contains multiple locations,
                	then usually first matching file found in any location will be deleted. If you
                	want to be more specific, you can include a location pattern here and
                	only locations which match that pattern (as determined by CStringUtil::match)
                	will be considered candidates for deletion.
                ****/
                void deleteResource(const EVString &filename, const EVString &groupName, const EVString &locationPattern );
                void deleteResource(const EVString &filename, const EVString &groupName);
                void deleteResource(const EVString &filename);
                /***** Delete all matching resource files.
                @param filePattern The pattern (see CStringUtil::match) of the files to delete.
                @param groupName The name of the group in which to search
                @param locationPattern If the resource group contains multiple locations,
                	then usually all matching files in any location will be deleted. If you
                	want to be more specific, you can include a location pattern here and
                	only locations which match that pattern (as determined by CStringUtil::match)
                	will be considered candidates for deletion.
                ****/
                void deleteMatchingResources(const EVString &filePattern, const EVString &groupName, const EVString &locationPattern);
                void deleteMatchingResources(const EVString &filePattern, const EVString &groupName);
                void deleteMatchingResources(const EVString &filePattern);
                /***** Adds a EarthView::World::Graphic::CResourceGroupListener which will be called back during
                    resource loading events.
                ****/
                void addResourceGroupListener(EarthView::World::Graphic::CResourceGroupListener *ref_l);
                /***** Removes a EarthView::World::Graphic::CResourceGroupListener ****/
                void removeResourceGroupListener(EarthView::World::Graphic::CResourceGroupListener *l);
                /***** Sets the resource group that 'world' resources will use.
                @remarks
                    This is the group which should be used by SceneManagers implementing
                    world geometry when looking for their resources. Defaults to the
                    DEFAULT_RESOURCE_GROUP_NAME but this can be altered.
                ****/
                void setWorldResourceGroupName(const EVString &groupName)
                {
                    mWorldGroupName = groupName;
                }
                //// Gets the resource group that 'world' resources will use.
                const EVString &getWorldResourceGroupName() const
                {
                    return mWorldGroupName;
                }
				/*
                    be loaded / unloaded with the resource group.
                @remarks
                    You would use this method to essentially defer a call to
                    CSceneManager::setWorldGeometry to the time when the resource group
                    is loaded. The advantage of this is that compatible scene managers
                    will include the estimate of the number of loading stages for that
                    world geometry when the resource group begins loading, allowing you
                    to include that in a loading progress report.
                @param group The name of the resource group
                @param worldGeometry The parameter which should be passed to setWorldGeometry
                @param sceneManager The EarthView::World::Graphic::CSceneManager which should be called
                ****/
                void linkWorldGeometryToResourceGroup(const EVString &group,
                                                      const EVString &worldGeometry, EarthView::World::Graphic::CSceneManager *ref_sceneManager);
                /***** Clear any link to world geometry from a resource group.
                @remarks
                    Basically undoes a previous call to linkWorldGeometryToResourceGroup.
                ****/
                void unlinkWorldGeometryFromResourceGroup(const EVString &group);
                /***** Checks the status of a resource group.
                		@remarks
                Looks at the state of a resource group.
                If loadResourceGroup has been called for the resource
                group return true, otherwise return false.
                		@param name The name to of the resource group to access.
                		****/
                ev_bool isResourceGroupInGlobalPool(const EVString &name);
                /***** Shutdown all ResourceManagers, performed as part of clean-up. ****/
                void shutdownAll();

                /***** Internal method for registering a EarthView::World::Graphic::CResourceManager (which should be
                    a singleton). Creators of plugins can register new ResourceManagers
                    this way if they wish.
                @remarks
                	ResourceManagers that wish to parse scripts must also call
                	_registerScriptLoader.
                @param resourceType EVString identifying the resource type, must be unique.
                @param rm Pointer to the EarthView::World::Graphic::CResourceManager instance.
                ****/
                void _registerResourceManager(const EVString &resourceType, EarthView::World::Graphic::CResourceManager *ref_rm);
                /***** Internal method for unregistering a EarthView::World::Graphic::CResourceManager.
                @remarks
                	ResourceManagers that wish to parse scripts must also call
                	_unregisterScriptLoader.
                @param resourceType EVString identifying the resource type.
                ****/
                void _unregisterResourceManager(const EVString &resourceType);
                /***** Get an iterator over the registered resource managers.
                ****/
                EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator getResourceManagerIterator()
                {
                    return ResourceManagerIterator(
                               mResourceManagerMap.begin(), mResourceManagerMap.end());
                }
                /***** Internal method for registering a EarthView::World::Graphic::CScriptLoader.
                @remarks ScriptLoaders parse scripts when resource groups are initialised.
                @param su Pointer to the EarthView::World::Graphic::CScriptLoader instance.
                ****/
                void _registerScriptLoader(EarthView::World::Graphic::CScriptLoader *ref_su);
                /***** Internal method for unregistering a EarthView::World::Graphic::CScriptLoader.
                @param su Pointer to the EarthView::World::Graphic::CScriptLoader instance.
                ****/
                void _unregisterScriptLoader(EarthView::World::Graphic::CScriptLoader *su);
                /***** Method used to directly query for registered script loaders.
                @param pattern The specific script pattern (e.g. *.material) the script loader handles
                ****/
                EarthView::World::Graphic::CScriptLoader *_findScriptLoader(const EVString &pattern);
                /***** Internal method for getting a registered EarthView::World::Graphic::CResourceManager.
                @param resourceType EVString identifying the resource type.
                ****/
                EarthView::World::Graphic::CResourceManager *_getResourceManager(const EVString &resourceType);
                /***** Internal method called by EarthView::World::Graphic::CResourceManager when a resource is created.
                @param res Weak reference to resource
                ****/
                void _notifyResourceCreated(EarthView::World::Graphic::ResourcePtr &res);
                /***** Internal method called by EarthView::World::Graphic::CResourceManager when a resource is removed.
                @param res Weak reference to resource
                ****/
                void _notifyResourceRemoved(EarthView::World::Graphic::ResourcePtr &res);
                /***** Internal method to notify the group manager that a resource has
                	changed group (only applicable for autodetect group) ****/
                void _notifyResourceGroupChanged(const EVString &oldGroup, EarthView::World::Graphic::CResource *res);
                /***** Internal method called by EarthView::World::Graphic::CResourceManager when all resources
                	for that manager are removed.
                @param manager Pointer to the manager for which all resources are being removed
                ****/
                void _notifyAllResourcesRemoved(EarthView::World::Graphic::CResourceManager *manager);
                /***** Notify this manager that one stage of world geometry loading has been
                    started.
                @remarks
                    Custom SceneManagers which load custom world geometry should call this
                    method the number of times equal to the value they return from
                    CSceneManager::estimateWorldGeometry while loading their geometry.
                ****/
                void _notifyWorldGeometryStageStarted(const EVString &description);
                /***** Notify this manager that one stage of world geometry loading has been
                    completed.
                @remarks
                    Custom SceneManagers which load custom world geometry should call this
                    method the number of times equal to the value they return from
                    CSceneManager::estimateWorldGeometry while loading their geometry.
                ****/
                void _notifyWorldGeometryStageEnded();
                /***** Get a list of the currently defined resource groups.
                @note This method intentionally returns a copy rather than a reference in
                	order to avoid any contention issues in multithreaded applications.
                @returns A copy of list of currently defined groups.
                ****/
                EarthView::World::Core::StringVector getResourceGroups();
                /***** Get the list of resource declarations for the specified group name.
                @note This method intentionally returns a copy rather than a reference in
                	order to avoid any contention issues in multithreaded applications.
                @param groupName The name of the group
                @returns A copy of list of currently defined resources.
                ****/
                EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList getResourceDeclarationList(const EVString &groupName);
                /***** Get the list of resource locations for the specified group name.
                @param groupName The name of the group
                @returns The list of resource locations associated with the given group.
                ****/
                const EarthView::World::Graphic::CResourceGroupManager::LocationList &getResourceLocationList(const EVString &groupName);
                //// Sets a new loading listener
                void setLoadingListener(EarthView::World::Graphic::CResourceLoadingListener *ref_listener);
                //// Returns the current loading listener
                EarthView::World::Graphic::CResourceLoadingListener *getLoadingListener();

            };
        }
    }
}

#endif

