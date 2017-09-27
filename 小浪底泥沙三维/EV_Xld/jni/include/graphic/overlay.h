#ifndef __Overlay_H__
#define __Overlay_H__

#include <graphic/graphic_config.h>
#include <core/iteratorwrapper.h>
#include <mathengine/matrix3.h>
#include <mathengine/matrix4.h>
#include <core/stringdefines.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CMatrix4;
			}
		}

	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class COverlayContainer;
            class CSceneNode;
            class CCamera;
            class CRenderQueue;
            class COverlayElement;
			class CSceneManager;

            /***** Represents a layer which is rendered on top of the 'normal' scene contents.
            @remarks
                An overlay is a container for visual components (2D and 3D) which will be
                rendered after the main scene in order to composite heads-up-displays, menus
                or other layers on top of the contents of the scene.
            @par
                An overlay always takes up the entire size of the viewport, although the
                components attached to it do not have to. An overlay has no visual element
                in itself, it it merely a container for visual elements.
            @par
                Overlays are created by calling COverlayManager::create, or by defining them
                in special text scripts (.overlay files). As many overlays
                as you like can be defined; after creation an overlay is hidden i.e. not
                visible until you specifically enable it by calling 'show'. This allows you to have multiple
                overlays predefined (menus etc) which you make visible only when you want.
                It is possible to have multiple overlays enabled at once; in this case the
                relative 'zorder' parameter of the overlays determine which one is displayed
                on top.
            @par
                By default overlays are rendered into all viewports. This is fine when you only
                have fullscreen viewports, but if you have picture-in-picture views, you probably
                don't want the overlay displayed in the smaller viewports. You turn this off for
                a specific viewport by calling the CViewport::setDisplayOverlays method.
            ****/
            class EV_GRAPHIC_DLL COverlay : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /**** typedef list<EarthView::World::Graphic::COverlayContainer*> EarthView::World::Graphic::COverlay::OverlayContainerList;****/
                class EV_GRAPHIC_DLL OverlayContainerList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::COverlayContainer *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_LIST(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::COverlayContainer *const &ref_t)
                    {
                        return mList.insert(pos, ref_t);
                    }

                private:
                    InternalList mList;
                ev_private:
                    OverlayContainerList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    OverlayContainerList() {}
                    void push_back(EarthView::World::Graphic::COverlayContainer *const &ref_t)
                    {
                        mList.push_back(ref_t);
                    }
                    void push_front(EarthView::World::Graphic::COverlayContainer *const   &ref_t)
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

                    EarthView::World::Graphic::COverlayContainer*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::COverlayContainer*& back()
                    {
                        return mList.back();
                    }
                    EarthView::World::Graphic::COverlayContainer*& at(ev_uint32 pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        return *it;
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::COverlayContainer *const &ref_t)
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
                    void remove(EarthView::World::Graphic::COverlayContainer *const &t)
                    {
                        mList.remove(t);
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
            protected:
                EVString mName;
                EarthView::World::Graphic::CSceneManager* mOwner;
                //// Internal root node, used as parent for 3D objects
                EarthView::World::Graphic::CSceneNode *mRootNode;
                /// 2D elements
                /// OverlayContainers, linked list for easy sorting by zorder later
                /// Not a map because sort can be saved since changes infrequent (unlike render queue)
                EarthView::World::Graphic::COverlay::OverlayContainerList m2DElements;
                /// Degrees of rotation around center
                EarthView::World::Spatial::Math::CRadian mRotate;
                /// Scroll values, offsets
                Real mScrollX, mScrollY;
                /// Scale values
                Real mScaleX, mScaleY;
                mutable EarthView::World::Spatial::Math::CMatrix4 mTransform;
                mutable ev_bool mTransformOutOfDate;
                ev_bool mTransformUpdated;
                ev_uint32 mZOrder;
                ev_bool mVisible;
                ev_bool mInitialised;
                EVString mOrigin;
                /***** Internal lazy update method. ****/
                void updateTransform() const;
                /***** Internal method for initialising an overlay ****/
                void initialise();
                /***** Internal method for updating container elements' Z-ordering ****/
                void assignZOrders();
            ev_private:
                COverlay(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Constructor: do not call direct, use COverlayManager::create
                COverlay(const EVString &name);

                COverlay(const EVString &name,EarthView::World::Graphic::CSceneManager* ref_owner);

                virtual ~COverlay();

                EarthView::World::Graphic::COverlayContainer *getChild(const EVString &name);
                /***** Gets the name of this overlay. ****/
                const EVString &getName() const;
                const EarthView::World::Graphic::CSceneManager* getOwner()const;
                ev_void setOwner(EarthView::World::Graphic::CSceneManager* ref_sm);
                /***** Alters the ZOrder of this overlay.
                @remarks
                    Values between 0 and 650 are valid here.
                ****/
                void setZOrder(ev_uint16 zorder);
                /***** Gets the ZOrder of this overlay. ****/
                ev_uint16 getZOrder() const;
                /***** Gets whether the overlay is displayed or not. ****/
                ev_bool isVisible() const;
                /***** Gets whether the overlay is initialised or not. ****/
                ev_bool isInitialised() const;
                /***** Shows the overlay if it was hidden. ****/
                void show();
                /***** Hides the overlay if it was visible. ****/
                void hide();
                /***** Adds a 2D 'container' to the overlay.
                @remarks
                    could be as simple as a square panel, or something more complex like
                    a grid or tree view. Containers group collections of other elements,
                    giving them a relative coordinate space and a common z-order.
                    If you want to attach a GUI widget to an overlay, you have to do it via
                    a container.
                ****/
                void add2D(EarthView::World::Graphic::COverlayContainer *ref_cont);

                /***** Removes a 2D container from the overlay.
                @remarks
                    NOT FAST. Consider COverlayElement::hide.
                ****/
                void remove2D(EarthView::World::Graphic::COverlayContainer *cont);
                /***** Adds a node capable of holding 3D objects to the overlay.
                @remarks
                    Although overlays are traditionally associated with 2D elements, there
                    are reasons why you might want to attach 3D elements to the overlay too.
                    For example, if you wanted to have a 3D cockpit, which was overlaid with a
                    HUD, then you would create 2 overlays, one with a 3D object attached for the
                    cockpit, and one with the HUD elements attached (the zorder of the HUD
                    overlay would be higher than the cockpit to ensure it was always on top).
                @par
                    A EarthView::World::Graphic::CSceneNode can have any number of 3D objects attached to it. SceneNodes
                	you should create a standard EarthView::World::Graphic::CSceneNode instance <b>manually</b>; this is
                	because these scene nodes are not managed by the EarthView::World::Graphic::CSceneManager and some custom
                	EarthView::World::Graphic::CSceneManager plugins will rely on specialist behaviour the overlay does not
                	support. By attaching a EarthView::World::Graphic::CSceneNode to an overlay, you indicate that:<OL>
                    <LI>You want the contents of this node to only appear when the overlay is active</LI>
                    <LI>You want the node to inherit a coordinate space relative to the camera,
                        rather than relative to the root scene node</LI>
                    <LI>You want these objects to be rendered after the contents of the main scene
                        to ensure they are rendered on top</LI>
                    </OL>
                    the depth buffer. Overlays should use materials with depth checking off, to ensure
                    that their contents are always displayed on top of the main scene (to do
                    otherwise would result in objects 'poking through' the overlay). The problem
                    can get artefacts because of the lack of depth buffer checking. So you should
                    ensure that any 3D objects you us in the overlay are convex, and don't overlap
                    each other. If they must overlap, split them up and put them in 2 overlays.
                	Alternatively, use a 2D element underneath them which will clear the depth buffer
                	values underneath ready for the 3D element to be rendered correctly.
                ****/
                void add3D(EarthView::World::Graphic::CSceneNode *ref_node);
                /***** Removes a 3D element from the overlay. ****/
                void remove3D(EarthView::World::Graphic::CSceneNode *node);
                /***** Clears the overlay of all attached items. ****/
                void clear();
                /***** Sets the scrolling factor of this overlay.
                @remarks
                    You can use this to set an offset to be used to scroll an
                    overlay around the screen.
                @param x Horizontal scroll value, where 0 = normal, -0.5 = scroll so that only
                    the right half the screen is visible etc
                @param y Vertical scroll value, where 0 = normal, 0.5 = scroll down by half
                    a screen etc.
                ****/
                void setScroll(Real x, Real y);
                /***** Gets the current X scroll value ****/
                Real getScrollX() const;
                /***** Gets the current Y scroll value ****/
                Real getScrollY() const;
                /***** Scrolls the overlay by the offsets provided.
                @remarks
                    This method moves the overlay by the amounts provided. As with
                    other methods on this object, a full screen width / height is represented
                    by the value 1.0.
                ****/
                void scroll(Real xoff, Real yoff);
                /***** Sets the rotation applied to this overlay.****/
                void setRotate(const EarthView::World::Spatial::Math::CRadian &angle);
                /***** Gets the rotation applied to this overlay, in degrees.****/
                const EarthView::World::Spatial::Math::CRadian &getRotate() const
                {
                    return mRotate;
                }
                /***** Adds the passed in angle to the rotation applied to this overlay. ****/
                void rotate(const EarthView::World::Spatial::Math::CRadian &angle);
                /***** Sets the scaling factor of this overlay.
                @remarks
                    You can use this to set an scale factor to be used to zoom an
                    overlay.
                @param x Horizontal scale value, where 1.0 = normal, 0.5 = half size etc
                @param y Vertical scale value, where 1.0 = normal, 0.5 = half size etc
                ****/
                void setScale(Real x, Real y);
                /***** Gets the current X scale value ****/
                Real getScaleX() const;
                /***** Gets the current Y scale value ****/
                Real getScaleY() const;
                /***** Used to transform the overlay when scrolling, scaling etc. ****/
                void _getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                /***** Internal method to put the overlay contents onto the render queue. ****/
                void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *queue);
                /***** This returns a EarthView::World::Graphic::COverlayElement at position x,y. ****/
                virtual EarthView::World::Graphic::COverlayElement *findElementAt(Real x, Real y);
                /***** Returns an iterator over all 2D elements in this manager.
                @remarks
                    EarthView::World::Core::CVectorIterator is actually a too generic name, since it also works for lists.
                ****/
                /****  typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::COverlay::OverlayContainerList> EarthView::World::Graphic::COverlay::Overlay2DElementsIterator ;****/
                class EV_GRAPHIC_DLL Overlay2DElementsIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    Overlay2DElementsIterator( EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("vec"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::COverlay::OverlayContainerList *)pList->GetAt("vec"));
                        }
                        else if (pList->Exist("rhs"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *)pList->GetAt("rhs"))->mIterator);
                        }
                    }

                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::COverlay::OverlayContainerList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef OverlayContainerList::iterator IteratorType;

                    Overlay2DElementsIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::COverlay::Overlay2DElementsIterator &operator=(_in const EarthView::World::Graphic::COverlay::Overlay2DElementsIterator &other)
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
                    ValueType peekNext () const
                    {
                        return mIterator->peekNext();
                    }
                    PointerType peekNextPtr ()  const
                    {
                        return mIterator->peekNextPtr();
                    }
                    ValueType getNext ()
                    {
                        return mIterator->getNext();
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                    const IteratorType &current()
                    {
                        return mIterator->current();
                    }
                public:
                    Overlay2DElementsIterator(EarthView::World::Graphic::COverlay::OverlayContainerList &vec)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                    }

                    Overlay2DElementsIterator(const Overlay2DElementsIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ~Overlay2DElementsIterator()
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
                    void moveNext ()
                    {
                        mIterator->moveNext();
                    }
                    EarthView::World::Graphic::COverlayContainer *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    EarthView::World::Graphic::COverlayContainer *next()
                    {
                        return mIterator->getNext();
                    }
                    EarthView::World::Graphic::COverlayContainer *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    EarthView::World::Graphic::COverlayContainer *getEnd()
                    {
                        return *mIterator->begin();
                    }

                private:
                    InternalIterator *mIterator;
                };

                EarthView::World::Graphic::COverlay::Overlay2DElementsIterator get2DElementsIterator ()
                {
                    return EarthView::World::Graphic::COverlay::Overlay2DElementsIterator (m2DElements.begin(), m2DElements.end());
                }
                /***** Get the origin of this overlay, e.g. a script file name.
                @remarks
                	This property will only contain something if the creator of
                	this overlay chose to populate it. Script loaders are advised
                	to populate it.
                ****/
                const EVString &getOrigin() const
                {
                    return mOrigin;
                }
                //// Notify this overlay of it's origin
                void _notifyOrigin(const EVString &origin)
                {
                    mOrigin = origin;
                }

            };
        }
    }
}


#endif

