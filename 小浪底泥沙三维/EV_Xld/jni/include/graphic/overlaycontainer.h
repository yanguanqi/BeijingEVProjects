#ifndef __OverlayContainer_H__
#define __OverlayContainer_H__
#include "graphic/graphic_config.h"
#include "overlayelement.h"
#include <core/iteratorwrapper.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /***** A 2D element which contains other EarthView::World::Graphic::COverlayElement instances.
            @remarks
                This is a specialisation of EarthView::World::Graphic::COverlayElement for 2D elements that contain other
                elements. These are also the smallest elements that can be attached directly
                to an EarthView::World::Graphic::COverlay.
            @remarks
                instantiating / deleting elements, and also for accepting new types of element
                from plugins etc.
            ****/
            class EV_GRAPHIC_DLL COverlayContainer : public EarthView::World::Graphic::COverlayElement
            {
            public:
                class EV_GRAPHIC_DLL ChildElementMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ChildElementMap() {}
                    ev_bool push(const EVString &key, EarthView::World::Graphic::COverlayElement *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::COverlayElement *)ref_val;
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
                    EarthView::World::Graphic::COverlayElement*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::COverlayElement*& get(const EVString &key)
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
                    ChildElementMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
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
                class EV_GRAPHIC_DLL OverlaycontainerElementPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    OverlaycontainerElementPair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    OverlaycontainerElementPair() {}
                    EVString first;
                    EarthView::World::Graphic::COverlayElement *second;
                };
                class EV_GRAPHIC_DLL ChildElementIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ChildElementIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::COverlayContainer::ChildElementMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::COverlayContainer::ChildElementIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                public:
                    ChildElementIterator(EarthView::World::Graphic::COverlayContainer::ChildElementMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    ChildElementIterator(const ChildElementIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~ChildElementIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                ev_private:

                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::COverlayContainer::ChildElementMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;


                    ChildElementIterator(iterator first, iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">ChildIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::COverlayContainer::ChildElementIterator &operator=(_in const EarthView::World::Graphic::COverlayContainer::ChildElementIterator &other)
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


                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext (  )
                    {
                        mIterator->moveNext();
                    }
                    KeyType nextKey() const
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
                    const OverlaycontainerElementPair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const OverlaycontainerElementPair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const OverlaycontainerElementPair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    OverlaycontainerElementPair mBeginPair;
                    OverlaycontainerElementPair mCurrentPair;
                    OverlaycontainerElementPair mEndPair;
                    EarthView::World::Graphic::COverlayElement *mptr;
                    ValueType mvt;
                };


                class EV_GRAPHIC_DLL  ChildContainerMap : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_bool push(const ev_uint16 &key, EarthView::World::Graphic::COverlayContainer *const &ref_val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (EarthView::World::Graphic::COverlayContainer *)ref_val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const ev_uint16 &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    EarthView::World::Graphic::COverlayContainer*& operator[](const ev_uint16 &key)
                    {
                        return get(key);
                    }
                    EarthView::World::Graphic::COverlayContainer*& get(const ev_uint16 &key)
                    {
                        return mList[key];
                    }
                    void erase(const ev_uint16 &key)
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
                    ChildContainerMap() {}
                ev_private:
                    ChildContainerMap(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:


                    typedef map<ev_uint16, EarthView::World::Graphic::COverlayContainer *> InternalList;
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
                    iterator find(const ev_uint16 &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const ev_uint16 &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL  OverlayContainerPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    OverlayContainerPair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    OverlayContainerPair() {}
                    ev_uint16 first;
                    EarthView::World::Graphic::COverlayContainer *second;
                };
                class EV_GRAPHIC_DLL ChildContainerIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    ChildContainerIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::COverlayContainer::ChildContainerMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::COverlayContainer::ChildContainerIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                public:
                    ChildContainerIterator(EarthView::World::Graphic::COverlayContainer::ChildContainerMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    ChildContainerIterator(const ChildContainerIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~ChildContainerIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::COverlayContainer::ChildContainerMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;

                    ChildContainerIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::COverlayContainer::ChildContainerIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::COverlayContainer::ChildContainerIterator &operator=(_in const EarthView::World::Graphic::COverlayContainer::ChildContainerIterator &other)
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
                    EarthView::World::Graphic::COverlayContainer *nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    EarthView::World::Graphic::COverlayContainer **nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    EarthView::World::Graphic::COverlayContainer *next()
                    {
                        return mIterator->getNext();
                    }
                    const EarthView::World::Graphic::COverlayContainer::OverlayContainerPair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const EarthView::World::Graphic::COverlayContainer::OverlayContainerPair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const EarthView::World::Graphic::COverlayContainer::OverlayContainerPair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::COverlayContainer::OverlayContainerPair mBeginPair;
                    EarthView::World::Graphic::COverlayContainer::OverlayContainerPair mCurrentPair;
                    EarthView::World::Graphic::COverlayContainer::OverlayContainerPair mEndPair;
                    EarthView::World::Graphic::COverlayContainer *mptr;
                    ValueType mvt;
                };

            protected:
                /// Map of all children
                EarthView::World::Graphic::COverlayContainer::ChildElementMap mChildren;
                /// Map of container children (subset of mChildren)
                EarthView::World::Graphic::COverlayContainer::ChildContainerMap mChildContainers;
                ev_bool mChildrenProcessEvents;

            ev_private:
                COverlayContainer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Constructor: do not call direct, use COverlayManager::createOverlayElement
                COverlayContainer(const EVString &name);

                virtual ~COverlayContainer();
                /***** Adds another EarthView::World::Graphic::COverlayElement to this container. ****/
                virtual void addChild(EarthView::World::Graphic::COverlayElement *ref_elem);
                /***** Adds another EarthView::World::Graphic::COverlayElement to this container. ****/
                virtual void addChildImpl(EarthView::World::Graphic::COverlayElement *ref_elem);
                /***** Add a nested container to this container. ****/
                virtual void addChildImpl(EarthView::World::Graphic::COverlayContainer *ref_cont);
                /***** Removes a named element from this container. ****/
                virtual void removeChild(const EVString &name);
                /***** Gets the named child of this container. ****/
                virtual EarthView::World::Graphic::COverlayElement *getChild(const EVString &name);
                /***** @copydoc COverlayElement::initialise ****/
                void initialise();
                void _addChild(EarthView::World::Graphic::COverlayElement *elem);
                void _removeChild(EarthView::World::Graphic::COverlayElement *elem)
                {
                    _removeChild(elem->getName());
                }
                void _removeChild(const EVString &name);
                /***** Gets an object for iterating over all the children of this object. ****/
                virtual EarthView::World::Graphic::COverlayContainer::ChildElementIterator getChildIterator();
                /***** Gets an iterator for just the container children of this object.
                @remarks
                    Good for cascading updates without having to use RTTI
                ****/
                virtual EarthView::World::Graphic::COverlayContainer::ChildContainerIterator getChildContainerIterator();
                /***** Tell the object and its children to recalculate ****/
                virtual void _positionsOutOfDate();
                /***** Overridden from EarthView::World::Graphic::COverlayElement. ****/
                virtual void _update();
                /***** Overridden from EarthView::World::Graphic::COverlayElement. ****/
                virtual ev_uint16 _notifyZOrder(ev_uint16 newZOrder);
                /***** Overridden from EarthView::World::Graphic::COverlayElement. ****/
                virtual void _notifyViewport();
                /***** Overridden from EarthView::World::Graphic::COverlayElement. ****/
                virtual void _notifyWorldTransforms(const EarthView::World::Spatial::Math::CMatrix4 &xform);
                /***** Overridden from EarthView::World::Graphic::COverlayElement. ****/
                virtual void _notifyParent(EarthView::World::Graphic::COverlayContainer *ref_parent, COverlay *ref_overlay);
                /***** Overridden from EarthView::World::Graphic::COverlayElement. ****/
                virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                /***** Overridden from EarthView::World::Graphic::COverlayElement. ****/
                inline ev_bool isContainer() const
                {
                    return true;
                }
                /***** Should this container pass events to their children ****/
                virtual inline ev_bool isChildrenProcessEvents() const
                {
                    return true;
                }
                /***** Should this container pass events to their children ****/
                virtual inline void setChildrenProcessEvents(ev_bool val)
                {
                    mChildrenProcessEvents = val;
                }
                /***** This returns a EarthView::World::Graphic::COverlayElement at position x,y. ****/
                virtual EarthView::World::Graphic::COverlayElement *findElementAt(Real x, Real y);					//// relative to parent
                void copyFromTemplate(EarthView::World::Graphic::COverlayElement *templateOverlay);
                virtual EarthView::World::Graphic::COverlayElement *clone(const EVString &instanceName);
            };
        }
    }
}


#endif

