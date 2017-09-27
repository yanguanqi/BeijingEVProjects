#ifndef __CompositorChain_H__
#define __CompositorChain_H__
#include "graphic/graphic_config.h"
#include "rendertargetlistener.h"
#include "renderqueuelistener.h"
#include "compositorinstance.h"
#include "compositor.h"
#include "viewport.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {



            //// Data types
            class EV_GRAPHIC_DLL CompositorInstances : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CompositorInstances(_in EarthView::World::Core::CNameValuePairList *pList) {}
            ev_private:

                typedef vector<EarthView::World::Graphic::CCompositorInstance *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                iterator insert(iterator pos, EarthView::World::Graphic::CCompositorInstance *const &ref_t)
                {
                    return mList.insert(pos, ref_t);
                }
            private:
                InternalList mList;
            public:
                CompositorInstances() {}
                void push_back(EarthView::World::Graphic::CCompositorInstance *const &ref_t)
                {
                    mList.push_back(ref_t);
                }
                void remove(ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                EarthView::World::Graphic::CCompositorInstance*& operator[](ev_size_t n)
                {
                    reference l = mList[n];
                    return l;
                }
                EarthView::World::Graphic::CCompositorInstance *const &operator[](ev_size_t n) const
                {
                    const_reference l =  mList[n];
                    return l;
                }
                EarthView::World::Graphic::CCompositorInstance*& at(ev_size_t n)
                {
                    reference l = mList[n];
                    return l;
                }
                EarthView::World::Graphic::CCompositorInstance *const &at(ev_size_t n) const
                {
                    const_reference l =  mList[n];
                    return l;
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void reserve(ev_size_t count)
                {
                    mList.reserve(count);
                }
                void clear()
                {
                    mList.clear();
                }
            };
            /*  typedef EarthView::World::Core::CVectorIterator<Instances> InstanceIterator;*/
            class EV_GRAPHIC_DLL CompositorInstanceIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CompositorInstanceIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                {
					if((pList->Exist("start"))&&(pList->Exist("last")))
					{
						mIterator = EV_NEW_T(InternalIterator)(*(IteratorType *)pList->GetAt("start"), *(IteratorType *)pList->GetAt("last"));
					}
                    else if(pList->Exist("lst"))
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CompositorInstances *)pList->GetAt("lst"));
                    }
                    else if (pList->Exist("rhs"))
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CompositorInstanceIterator *)pList->GetAt("rhs"))->mIterator);
                    }
                }
            ev_private:
                typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CompositorInstances> InternalIterator;
                typedef InternalIterator::ValueType ValueType;
                typedef InternalIterator::PointerType PointerType;
                typedef CompositorInstances::iterator IteratorType;
                CompositorInstanceIterator(IteratorType start, IteratorType last)
                {
                    mIterator = EV_NEW_T(InternalIterator)(start, last);
                }
                EarthView::World::Graphic::CompositorInstanceIterator &operator=(_in const EarthView::World::Graphic::CompositorInstanceIterator &other)
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
                CompositorInstanceIterator(EarthView::World::Graphic::CompositorInstances &lst)
                {
                    mIterator = EV_NEW_T(InternalIterator)(lst);
                }
                CompositorInstanceIterator(const CompositorInstanceIterator &rhs)
                {
                    mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                }
                ~CompositorInstanceIterator()
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
                EarthView::World::Graphic::CCompositorInstance *getCurrent()
                {
                    return *mIterator->current();
                }
                EarthView::World::Graphic::CCompositorInstance *next()
                {
                    return mIterator->getNext();
                }
                EarthView::World::Graphic::CCompositorInstance *getBegin()
                {
                    return *mIterator->begin();
                }
                EarthView::World::Graphic::CCompositorInstance *getEnd()
                {
                    return *mIterator->begin();
                }

            private:
                InternalIterator *mIterator;
            };


            ///<summary> Chain of compositor effects applying to one viewport.</summary>
            class EV_GRAPHIC_DLL CCompositorChain: public EarthView::World::Graphic::CRenderTargetListener
            {
                friend class CInternalViewportListener;
            ev_private:
                CCompositorChain(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositorChain(EarthView::World::Graphic::CViewport *ref_vp);
                /** Another gcc warning here, which is no problem because EarthView::World::Graphic::CRenderTargetListener is never used
                    to delete an object.
                    warning: `class EarthView::World::Graphic::CCompositorChain' has virtual functions but non-virtual destructor
                */
                virtual ~CCompositorChain();

            public:
                class EV_GRAPHIC_DLL CInternalViewportListener : public EarthView::World::Graphic::CViewport::CViewportListener
                {
                ev_private:
                    CInternalViewportListener(EarthView::World::Core::CNameValuePairList *pList) : mParent((EarthView::World::Graphic::CCompositorChain *)pList->GetAt("ref_parent"))
                    {
                    }
                public:
                    CInternalViewportListener(EarthView::World::Graphic::CCompositorChain *ref_parent) : mParent(ref_parent)
                    {
                    }
                public:
                    virtual void viewportCameraChanged(EarthView::World::Graphic::CViewport *viewport);
                    virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport *viewport);
                    virtual void viewportDestroyed(EarthView::World::Graphic::CViewport *viewport);
                private:
                    EarthView::World::Graphic::CCompositorChain *mParent;
                };
                virtual void viewportCameraChanged(EarthView::World::Graphic::CViewport *viewport);
                virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport *viewport);
                virtual void viewportDestroyed(EarthView::World::Graphic::CViewport *viewport);
                virtual const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *getViewportListenerPtr()
                {
                    return mpViewportListener;
                }
                ///virtual const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener& getViewportListener(){return *mpViewportListener;}
            private:
                EarthView::World::Graphic::CCompositorChain::CInternalViewportListener *mpViewportListener;
            public:
                //// Identifier for "last" compositor in chain
                static const ev_size_t LAST = (ev_size_t) - 1;
                //// Identifier for best technique
                static const ev_size_t BEST = 0;

                ///<summary> Apply a compositor. Initially, the filter is enabled.</summary>
                ///<param>name="filter" Filter to apply</param>
                ///<param> name="addPosition"    Position in filter chain to insert this filter at; defaults to the end (last applied filter)</param>
                ///<param> name="scheme"      Scheme to use (blank means default)</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositorInstance *addCompositor(EarthView::World::Graphic::CCompositorPtr filter, ev_size_t addPosition, const EVString &scheme );

                ///<summary> Remove a compositor.</summary>
                ///<param>name=" position"    Position in filter chain of filter to remove; defaults to the end (last applied filter)</param>
                ///<returns></returns>
                void removeCompositor(ev_size_t position);

                ///<summary> Get the number of compositors.</summary>
                ///<param></param>
                ///<returns></returns>
                ev_size_t getNumCompositors();

                ///<summary> Remove all compositors.</summary>
                ///<param></param>
                ///<returns></returns>
                void removeAllCompositors();

                ///<summary> Get compositor instance by position.</summary>
                ///<param>name="index"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositorInstance *getCompositor(ev_size_t index);
                ///<summary> Get compositor instance by name. Returns null if not found.</summary>
                ///<param>name="name"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositorInstance *getCompositor(const EVString &name);
                ///<summary> Get the original scene compositor instance for this chain (internal use).</summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositorInstance *_getOriginalSceneCompositor()
                {
                    return mOriginalScene;
                }

                ///<summary> Get an iterator over the compositor instances. The first compositor in this list is applied first, the last one is applied last.
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CompositorInstanceIterator getCompositors();

                ///<summary> Enable or disable a compositor, by position. Disabling a compositor stops it from rendering
                ///	addCompositor in cases the filter is switched on and off a lot.
                ///</summary>
                ///<param>name="position" Position in filter chain of filter</param>
                ///<param>name="state"</param>
                ///<returns></returns>
                void setCompositorEnabled(ev_size_t position, ev_bool state);


                virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
                virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
                virtual void preViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent &evt);
                virtual void postViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent &evt);

                ///<summary> Mark state as dirty, and to be recompiled next frame.</summary>
                ///<param></param>
                ///<returns></returns>
                void _markDirty();

                ///<summary> Get viewport that is the target of this chain</summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CViewport *getViewport();

                ///<summary> Remove a compositor by pointer. This is internally used by CCompositionTechnique to
                ///	"weak" remove any instanced of a deleted technique.</summary>
                ///<param>name="i"</param>
                ///<returns></returns>
                void _removeInstance(EarthView::World::Graphic::CCompositorInstance *i);
                ///<summary> Internal method for registering a queued operation for deletion later </summary>
                ///<param>name="op"</param>
                ///<returns></returns>
                void _queuedOperation(EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation *ref_op);
                ///<summary> Compile this Composition chain into a series of CRenderTarget operations.</summary>
                ///<param></param>
                ///<returns></returns>
                void _compile();
                ///<summary> Get the previous instance in this chain to the one specified. </summary>
                ///<param>name="curr"</param>
                ///<param>name="activeOnly"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositorInstance *getPreviousInstance(EarthView::World::Graphic::CCompositorInstance *curr, ev_bool activeOnly );
                ///<summary> Get the next instance in this chain to the one specified. </summary>
                ///<param>name="curr"</param>
                ///<param>name="activeOnly"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositorInstance *getNextInstance(EarthView::World::Graphic::CCompositorInstance *curr, ev_bool activeOnly );
                /** Render queue listener used to set up rendering events. */
                class EV_GRAPHIC_DLL CRQListener: public EarthView::World::Graphic::CRenderQueueListener
                {
                ev_private:
                    CRQListener(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    /** @copydoc CRenderQueueListener::renderQueueStarted
                    */
                    virtual void renderQueueStarted(EarthView::World::Graphic::CSceneManager* pSceneMgr,ev_uint8 id, const EVString &invocation, ev_bool &skipThisQueue);
                    /** @copydoc CRenderQueueListener::renderQueueEnded
                    */
                    virtual void renderQueueEnded(EarthView::World::Graphic::CSceneManager* pSceneMgr,ev_uint8 id, const EVString &invocation, ev_bool &repeatThisQueue);

                public:
                    CRQListener() {}
                    /** Set current operation and target */
                    void setOperation(EarthView::World::Graphic::CCompositorInstance::CTargetOperation *ref_op, EarthView::World::Graphic::CSceneManager *ref_sm, EarthView::World::Graphic::CRenderSystem *ref_rs);
                    /** Notify current destination viewport  */
                    void notifyViewport(EarthView::World::Graphic::CViewport *ref_vp)
                    {
                        mViewport = ref_vp;
                    }
                    /** Flush remaining render system operations */
                    void flushUpTo(ev_uint8 id);
                private:
                    EarthView::World::Graphic::CCompositorInstance::CTargetOperation *mOperation;
                    EarthView::World::Graphic::CSceneManager *mSceneManager;
                    EarthView::World::Graphic::CRenderSystem *mRenderSystem;
                    EarthView::World::Graphic::CViewport *mViewport;
                    CCompositorInstance::RenderSystemOpPairs::iterator currentOp, lastOp;
                };
            protected:
                //// EarthView::World::Graphic::CViewport affected by this EarthView::World::Graphic::CCompositorChain
                EarthView::World::Graphic::CViewport *mViewport;

                /** Plainly renders the scene; implicit first compositor in the chain.
                */
                EarthView::World::Graphic::CCompositorInstance *mOriginalScene;

                //// Postfilter instances in this chain
                EarthView::World::Graphic::CompositorInstances mInstances;

                //// State needs recompile
                ev_bool mDirty;
                //// EarthView::World::Core::CAny compositors enabled?
                ev_bool mAnyCompositorsEnabled;
                EVString mOriginalSceneScheme;
                //// Compiled state (updated with _compile)
                CCompositorInstance::CompiledState mCompiledState;
                EarthView::World::Graphic::CCompositorInstance::CTargetOperation mOutputOperation;
                //// Render System operations queued by last compile, these are created by this
                //// instance thus managed and deleted by it. The list is cleared with
                //// clearCompilationState()
                typedef vector<EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation *> RenderSystemOperations;
                RenderSystemOperations mRenderSystemOperations;

                /** Clear compiled state */
                void clearCompiledState();

                /** Prepare a viewport, the camera and the scene for a rendering operation
                 */
                void preTargetOperation(EarthView::World::Graphic::CCompositorInstance::CTargetOperation &op, EarthView::World::Graphic::CViewport *vp, CCamera *cam);

                /** Restore a viewport, the camera and the scene after a rendering operation
                 */
                void postTargetOperation(EarthView::World::Graphic::CCompositorInstance::CTargetOperation &op, EarthView::World::Graphic::CViewport *vp, CCamera *cam);
                void createOriginalScene();
                void destroyOriginalScene();
                //// destroy internal resources
                void destroyResources();

                CRQListener mOurListener;
                //// Old viewport settings
                ev_uint32 mOldClearEveryFrameBuffers;
                //// Store old scene visibility mask
                ev_uint32 mOldVisibilityMask;
                //// Store old find visible objects
                ev_bool mOldFindVisibleObjects;
                //// Store old camera LOD bias
                ev_real32 mOldLodBias;
                ////	Store old viewport material scheme
                EVString mOldMaterialScheme;
                //// Store old shadows enabled flag
                ev_bool mOldShadowsEnabled;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

