#ifndef __OverlayManager_H__
#define __OverlayManager_H__
#include "graphic/graphic_config.h"
#include "scriptloader.h"
#include <core/iteratorwrapper.h>
#include "frustum_def.h"
#include <core/stringvector.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class COverlay;
            class COverlayElement;
            class COverlayElementFactory;
            class CViewport;
            class COverlayContainer;
            class CCamera;
            class CRenderQueue;
		    class CViewport;

			class EV_GRAPHIC_DLL CViewportInformation:public EarthView::World::Core::CBaseObject
			{
			public:
				CViewportInformation();

				EarthView::World::Graphic::CViewport* mviewPort;
				ev_real64 mlastViewPortWidth;
				ev_real64 mlastViewPortHeight;
				ev_int32 mlastOrientationMode;
ev_private:
				CViewportInformation(EarthView::World::Core::CNameValuePairList *pList) {}
			};

			class EV_GRAPHIC_DLL CViewportInformationVector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<EarthView::World::Graphic::CViewportInformation*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				CViewportInformationVector::iterator insert(_in CViewportInformationVector::iterator pos, _in CViewportInformation* const &ref_t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CViewportInformationVector(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CViewportInformationVector();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void push_back(_in EarthView::World::Graphic::CViewportInformation* const &ref_t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::World::Graphic::CViewportInformation*& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::World::Graphic::CViewportInformation*& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CViewportInformation* const &ref_t);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				ev_void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Graphic::CViewportInformation*& operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Graphic::CViewportInformation* const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Graphic::CViewportInformation*& at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Graphic::CViewportInformation* const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				ev_void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				ev_void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();
			};



            /***** Manages EarthView::World::Graphic::COverlay objects, parsing them from .overlay files and
                storing a lookup library of them. Alo manages the creation of
            	OverlayContainers and OverlayElements, used for non-interactive 2D
            	elements such as HUDs.
            ****/
            class EV_GRAPHIC_DLL COverlayManager : public EarthView::World::Graphic::CScriptLoader
            {
            private:
                static EarthView::World::Graphic::COverlayManager *ms_Singleton;
            public:

                static EarthView::World::Graphic::COverlayManager &getSingleton();
                static EarthView::World::Graphic::COverlayManager *getSingletonPtr();
                ///typedef map<EVString, EarthView::World::Graphic::COverlay*> EarthView::World::Graphic::COverlayManager::OverlayMap;
                class EV_GRAPHIC_DLL OverlayMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const EVString &key, const EarthView::World::Graphic::COverlay*& ref_val);
                    ev_bool exist(const EVString &key);
                    EarthView::World::Graphic::COverlay*& operator[](const EVString &key);
                    EarthView::World::Graphic::COverlay*& get(const EVString &key);
                    void erase(const EVString &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                    OverlayMap();
                ev_private:
                    OverlayMap(_in EarthView::World::Core::CNameValuePairList *pList);
                ev_private:

                    typedef map<EVString, EarthView::World::Graphic::COverlay *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val);
                    iterator find(const EVString &key);
                    const_iterator find(const EVString &key) const ;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL OverlayPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    OverlayPair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    OverlayPair() {}
                    EVString first;
                    EarthView::World::Graphic::COverlay *second;
                };
                ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::COverlayManager::OverlayMap> EarthView::World::Graphic::COverlayManager::OverlayMapIterator;
                class EV_GRAPHIC_DLL OverlayMapIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    OverlayMapIterator(EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::COverlayManager::OverlayMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;

                    OverlayMapIterator(const_iterator first, const_iterator last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::COverlayManager::OverlayMapIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::COverlayManager::OverlayMapIterator &operator=(_in const EarthView::World::Graphic::COverlayManager::OverlayMapIterator &other);
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();
                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                public:
                    OverlayMapIterator(OverlayMap &lst);
                    OverlayMapIterator(const OverlayMapIterator &other);
                    ~OverlayMapIterator();
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    EVString nextKey() const;
                    EarthView::World::Graphic::COverlay *nextValue() const;
                    EarthView::World::Graphic::COverlay **nextValuePtr();
                    EarthView::World::Graphic::COverlay *next();
                    const EarthView::World::Graphic::COverlayManager::OverlayPair &getBegin();
                    const EarthView::World::Graphic::COverlayManager::OverlayPair &getEnd();
                    const EarthView::World::Graphic::COverlayManager::OverlayPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::COverlayManager::OverlayPair mBeginPair;
                    EarthView::World::Graphic::COverlayManager::OverlayPair mCurrentPair;
                    EarthView::World::Graphic::COverlayManager::OverlayPair mEndPair;
                    EarthView::World::Graphic::COverlay *mptr;
                    ValueType mvt;
                };
                ////typedef map<EVString, EarthView::World::Graphic::COverlayElement*> EarthView::World::Graphic::COverlayManager::ElementMap;
                class EV_GRAPHIC_DLL  ElementMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const EVString &key, const EarthView::World::Graphic::COverlayElement*& ref_val);
                    ev_bool exist(const EVString &key);
                    EarthView::World::Graphic::COverlayElement*& operator[](const EVString &key);
                    EarthView::World::Graphic::COverlayElement*& get(const EVString &key);
                    void erase(const EVString &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                    ElementMap();
                ev_private:
                    ElementMap(EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::COverlayElement *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val) ;
                    iterator find(const EVString &key) ;
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL OverlaymanagerElementPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    OverlaymanagerElementPair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    OverlaymanagerElementPair() {}
                    EVString first;
                    EarthView::World::Graphic::COverlayElement *second;
                };
                class EV_GRAPHIC_DLL TemplateIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TemplateIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::COverlayManager::ElementMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::COverlayManager::TemplateIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::COverlayManager::ElementMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;


                    TemplateIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::COverlayManager::TemplateIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::COverlayManager::TemplateIterator &operator=(_in const EarthView::World::Graphic::COverlayManager::TemplateIterator &other)
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
                    TemplateIterator(EarthView::World::Graphic::COverlayManager::ElementMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    TemplateIterator(const TemplateIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~TemplateIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }
                    EVString nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    EarthView::World::Graphic::COverlayElement *nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    EarthView::World::Graphic::COverlayElement **nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    EarthView::World::Graphic::COverlayElement *next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair mBeginPair;
                    EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair mCurrentPair;
                    EarthView::World::Graphic::COverlayManager::OverlaymanagerElementPair mEndPair;
                    EarthView::World::Graphic::COverlayElement *mptr;
                    ValueType mvt;
                };
                ////typedef map<EVString, EarthView::World::Graphic::COverlayElementFactory*> FactoryMap;
                class EV_GRAPHIC_DLL  OverlayFactoryMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const EVString &key, const EarthView::World::Graphic::COverlayElementFactory*& ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::COverlayElementFactory *)ref_val;
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
                    EarthView::World::Graphic::COverlayElementFactory*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::COverlayElementFactory*& get(const EVString &key)
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
                    OverlayFactoryMap() {}
                ev_private:
                    OverlayFactoryMap(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::COverlayElementFactory *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
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

				ev_void removeViewport(EarthView::World::Graphic::CViewport* vp);

            protected:
                EarthView::World::Graphic::COverlayManager::OverlayMap mOverlayMap;
                EarthView::World::Core::StringVector mScriptPatterns;

				EV_MUTEX(mMutex)
				CViewportInformationVector mviewPortInformationVector;

			    EarthView::World::Graphic::CViewportInformation* hasViewPort(CViewport* viewPort);
                void parseNewElement( EarthView::World::Core::DataStreamPtr &chunk, EVString &elemType, EVString &elemName,
                                      ev_bool isContainer, EarthView::World::Graphic::COverlay *pOverlay, ev_bool isTemplate, EVString templateName = EVString(""), COverlayContainer *container = 0);
                void parseAttrib( const EVString &line, EarthView::World::Graphic::COverlay *pOverlay);
                void parseElementAttrib( const EVString &line, EarthView::World::Graphic::COverlay *pOverlay, EarthView::World::Graphic::COverlayElement *pElement );
                void skipToNextCloseBrace(EarthView::World::Core::DataStreamPtr &chunk);
                void skipToNextOpenBrace(EarthView::World::Core::DataStreamPtr &chunk);

                ev_int32 mLastViewportWidth, mLastViewportHeight;
                ev_bool mViewportDimensionsChanged;
                EarthView::World::Graphic::OrientationMode mLastViewportOrientationMode;
                ev_bool parseChildren( EarthView::World::Core::DataStreamPtr &chunk, const EVString &line,
                                       EarthView::World::Graphic::COverlay *pOverlay, ev_bool isTemplate, COverlayContainer *parent = NULL);
                EarthView::World::Graphic::COverlayManager::OverlayFactoryMap mFactories;
                EarthView::World::Graphic::COverlayManager::ElementMap mInstances;
                EarthView::World::Graphic::COverlayManager::ElementMap mTemplates;
                typedef set<EVString> LoadedScripts;
                LoadedScripts mLoadedScripts;


                EarthView::World::Graphic::COverlayManager::ElementMap &getElementMap(ev_bool isTemplate);
                EarthView::World::Graphic::COverlayElement *createOverlayElementImpl(const EVString &typeName, const EVString &instanceName, EarthView::World::Graphic::COverlayManager::ElementMap &elementMap);
                EarthView::World::Graphic::COverlayElement *getOverlayElementImpl(const EVString &name, EarthView::World::Graphic::COverlayManager::ElementMap &elementMap);

                ev_bool hasOverlayElementImpl(const EVString &name, EarthView::World::Graphic::COverlayManager::ElementMap &elementMap);
                void destroyOverlayElementImpl(const EVString &instanceName, EarthView::World::Graphic::COverlayManager::ElementMap &elementMap);
                void destroyOverlayElementImpl(EarthView::World::Graphic::COverlayElement *pInstance, EarthView::World::Graphic::COverlayManager::ElementMap &elementMap);
                void destroyAllOverlayElementsImpl(EarthView::World::Graphic::COverlayManager::ElementMap &elementMap);
            ev_private:
                COverlayManager(EarthView::World::Core::CNameValuePairList *pList);
            public:
                COverlayManager();

                virtual ~COverlayManager();
                //// @copydoc CScriptLoader::getScriptPatterns
                const EarthView::World::Core::StringVector &getScriptPatterns() const;
                //// @copydoc CScriptLoader::parseScript
                void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName);
                //// @copydoc CScriptLoader::getLoadingOrder
                Real getLoadingOrder() const;
                /***** Create a new EarthView::World::Graphic::COverlay. ****/
                EarthView::World::Graphic::COverlay *create(const EVString &name);
                EarthView::World::Graphic::COverlay *create(const EVString &name,EarthView::World::Graphic::CSceneManager* ref_owner);
                /***** Retrieve an EarthView::World::Graphic::COverlay by name
                @returns A pointer to the EarthView::World::Graphic::COverlay, or 0 if not found
                ****/
                EarthView::World::Graphic::COverlay *getByName(const EVString &name);
                /***** Destroys an existing overlay by name ****/
                void destroy(const EVString &name);
                /***** Destroys an existing overlay ****/
                void destroy(EarthView::World::Graphic::COverlay *overlay);
                /***** Destroys all existing overlays ****/
                void destroyAll();

                EarthView::World::Graphic::COverlayManager::OverlayMapIterator getOverlayIterator();
                /***** Internal method for queueing the visible overlays for rendering. ****/
                void _queueOverlaysForRendering(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *pQueue, EarthView::World::Graphic::CViewport *vp);
                /***** Method for determining if the viewport has changed dimensions.
                @remarks This is used by pixel-based OverlayElements to work out if they need to
                    recalculate their sizes.
                ****/
                ev_bool hasViewportChanged() const;
                /***** Gets the height of the destination viewport in pixels. ****/
                ev_int32 getViewportHeight() const;

                /***** Gets the width of the destination viewport in pixels. ****/
                ev_int32 getViewportWidth() const;
                Real getViewportAspectRatio() const;
                /***** Gets the orientation mode of the destination viewport. ****/
                EarthView::World::Graphic::OrientationMode getViewportOrientationMode() const;
                /***** Creates a new EarthView::World::Graphic::COverlayElement of the type requested.
                @remarks
                The type of element to create is passed in as a string because this
                allows plugins to register new types of component.
                @param typeName The type of element to create.
                @param instanceName The name to give the new instance.
                ****/
                EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &typeName, const EVString &instanceName, ev_bool isTemplate);
                EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &typeName, const EVString &instanceName);
                /***** Gets a reference to an existing element. ****/
                EarthView::World::Graphic::COverlayElement *getOverlayElement(const EVString &name, ev_bool isTemplate);
                EarthView::World::Graphic::COverlayElement *getOverlayElement(const EVString &name);
                /***** Tests if an element exists. ****/
                ev_bool hasOverlayElement(const EVString &name, ev_bool isTemplate);
                ev_bool hasOverlayElement(const EVString &name);

                /***** Destroys a EarthView::World::Graphic::COverlayElement.
                @remarks
                doubt, let EV_World destroy elements on shutdown.
                ****/
                void destroyOverlayElement(const EVString &instanceName, ev_bool isTemplate);
                void destroyOverlayElement(const EVString &instanceName);
                /***** Destroys a EarthView::World::Graphic::COverlayElement.
                @remarks
                doubt, let EV_World destroy elements on shutdown.
                ****/
                void destroyOverlayElement(EarthView::World::Graphic::COverlayElement *pInstance, ev_bool isTemplate);
                void destroyOverlayElement(EarthView::World::Graphic::COverlayElement *pInstance);
                /***** Destroys all the EarthView::World::Graphic::COverlayElement  created so far.
                @remarks
                Best to leave this to the engine to call internally, there
                should rarely be a need to call it yourself.
                ****/
                void destroyAllOverlayElements(ev_bool isTemplate);
                void destroyAllOverlayElements();
                /***** Registers a new EarthView::World::Graphic::COverlayElementFactory with this manager.
                @remarks
                Should be used by plugins or other apps wishing to provide
                a new COverlayElement subclass.
                ****/
                void addOverlayElementFactory(EarthView::World::Graphic::COverlayElementFactory *ref_elemFactory);

                /***** Get const access to the list of registered EarthView::World::Graphic::COverlayElement factories. ****/
                const EarthView::World::Graphic::COverlayManager::OverlayFactoryMap &getOverlayElementFactoryMap() const
                {
                    return mFactories;
                }
                EarthView::World::Graphic::COverlayElement *createOverlayElementFromTemplate(const EVString &templateName, const EVString &typeName, const EVString &instanceName, ev_bool isTemplate );
                EarthView::World::Graphic::COverlayElement *createOverlayElementFromTemplate(const EVString &templateName, const EVString &typeName, const EVString &instanceName);
                /*****
                *  @remarks
                *  Creates a new EarthView::World::Graphic::COverlayElement object from the specified template name.  The new
                *  object's name, and all of it's children, will be instanceName/orignalName.
                ****/
                EarthView::World::Graphic::COverlayElement *cloneOverlayElementFromTemplate(const EVString &templateName, const EVString &instanceName);
                EarthView::World::Graphic::COverlayElement *createOverlayElementFromFactory(const EVString &typeName, const EVString &instanceName);
                /****typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::COverlayManager::ElementMap> EarthView::World::Graphic::COverlayManager::TemplateIterator;****/
                /***** Returns an iterator over all templates in this manager.****/
                EarthView::World::Graphic::COverlayManager::TemplateIterator getTemplateIterator ()
                {
                    return EarthView::World::Graphic::COverlayManager::TemplateIterator (mTemplates.begin (), mTemplates.end ()) ;
                }
                /**** Returns whether the CElement with the given name is a Template ****/
                ev_bool isTemplate (EVString strName) const
                {
                    return (mTemplates.find (strName) != mTemplates.end()) ;
                }

            };
        }
    }
}


#endif

