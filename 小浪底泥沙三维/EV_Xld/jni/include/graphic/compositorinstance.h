#ifndef __CompositorInstance_H__
#define __CompositorInstance_H__
#include "graphic/graphic_config.h"
#include "materialmanager.h"
#include "texture.h"
#include "renderqueue.h"
#include "compositiontechnique.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCompositorChain;
            class CRenderTarget;
            class CMultiRenderTarget;
            class CSceneManager;
            class CRenderSystem;
            const ev_size_t RENDER_QUEUE_COUNT = RENDER_QUEUE_MAX + 1;

            /***** An instance of a CCompositor object for one CViewport. It is part of the CCompositorChain
            for a CViewport.
            ****/
            class EV_GRAPHIC_DLL CCompositorInstance : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CCompositorInstance(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositorInstance(CCompositionTechnique *ref_technique, CCompositorChain *ref_chain);
                virtual ~CCompositorInstance();
                /***** Provides an interface to "listen in" to to render system operations executed by this
                CCompositorInstance.
                ****/
                class EV_GRAPHIC_DLL CCompositorInstanceListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CCompositorInstanceListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCompositorInstanceListener() {}
                    virtual ~CCompositorInstanceListener();
                    /***** Notification of when a render target operation involving a material (like
                    rendering a quad) is compiled, so that miscellaneous parameters that are different
                    per CCompositor instance can be set up.
                    @param pass_id	CPass identifier within CCompositor instance, this is specified
                    by the user by CCompositionPass::setIdentifier().
                    @param mat		CMaterial, this may be changed at will and will only affect
                    the current instance of the CCompositor, not the global material
                    it was cloned from.
                    ****/
                    virtual void notifyMaterialSetup(ev_uint32 pass_id, CMaterialPtr &mat);
                    /***** Notification before a render target operation involving a material (like
                    rendering a quad), so that material parameters can be varied.
                    @param pass_id	CPass identifier within CCompositor instance, this is specified
                    by the user by CCompositionPass::setIdentifier().
                    @param mat		CMaterial, this may be changed at will and will only affect
                    the current instance of the CCompositor, not the global material
                    it was cloned from.
                    */
                    virtual void notifyMaterialRender(ev_uint32 pass_id, CMaterialPtr &mat);
                    /***** Notification after resources have been created (or recreated).
                    @param resizeOnly Was the creation because the viewport was resized?
                    */
                    virtual void notifyResourcesCreated(ev_bool forResizeOnly);
                };
                /***** Specific render system operation. A render target operation does special operations
                between render queues like rendering a quad, clearing the frame buffer or
                setting stencil state.
                ****/
                class EV_GRAPHIC_DLL CRenderSystemOperation : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CRenderSystemOperation(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CRenderSystemOperation() {}
                    virtual ~CRenderSystemOperation();
                    //// Set state to CSceneManager and CRenderSystem
                    virtual void execute(CSceneManager *sm, CRenderSystem *rs) {}
                };
                /****typedef map<ev_int32, CMaterialPtr> QuadMaterialMap;****/
                class EV_GRAPHIC_DLL QuadMaterialMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    QuadMaterialMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    QuadMaterialMap() {}
                    ev_bool push(const ev_int32 &key, const CMaterialPtr &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (CMaterialPtr)val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(const ev_int32 &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    CMaterialPtr &operator[](const ev_int32 &key)
                    {
                        return get(key);
                    }
                    CMaterialPtr &get(const ev_int32 &key)
                    {
                        return mList[key];
                    }
                    void erase(const ev_int32 &key)
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
                    typedef map<ev_int32, CMaterialPtr> InternalList;
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
                    iterator find(const ev_int32 &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(const ev_int32 &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL QuadMaterialPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    QuadMaterialPair(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    QuadMaterialPair() {}
                    ev_int32 first;
                    CMaterialPtr second;
                };
                class EV_GRAPHIC_DLL QuadMaterialIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    QuadMaterialIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(QuadMaterialMap *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("other"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((QuadMaterialIterator *)pList->GetAt("other"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CConstMapIterator<QuadMaterialMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    QuadMaterialIterator(const_iterator first, const_iterator last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(first, last);
                    }
                    QuadMaterialIterator &operator=(_in const QuadMaterialIterator &other)
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
                    QuadMaterialIterator(QuadMaterialMap &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    QuadMaterialIterator(const QuadMaterialIterator &other)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                    }
                    ~QuadMaterialIterator()
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
                    ev_int32 nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    CMaterialPtr nextValue() const
                    {
                        return mIterator->peekNextValue();
                    }
                    CMaterialPtr *nextValuePtr()
                    {
                        mptr = nextValue();
                        return &mptr;
                    }
                    CMaterialPtr next()
                    {
                        return mIterator->getNext();
                    }
                    const QuadMaterialPair &getBegin()
                    {
                        IteratorType start = mIterator->begin();
                        mBeginPair.first =  start->first;
                        mBeginPair.second = start->second;
                        return mBeginPair;
                    }
                    const QuadMaterialPair &getEnd()
                    {
                        IteratorType last = mIterator->end();
                        mEndPair.first =  last->first;
                        mEndPair.second = last->second;
                        return mEndPair;
                    }
                    const QuadMaterialPair &getCurrent()
                    {
                        IteratorType current = mIterator->current();
                        mCurrentPair.first =  current->first;
                        mCurrentPair.second = current->second;
                        return mCurrentPair;
                    }

                private:
                    InternalIterator *mIterator;
                    QuadMaterialPair mBeginPair;
                    QuadMaterialPair mCurrentPair;
                    QuadMaterialPair mEndPair;
                    CMaterialPtr mptr;
                    ValueType mvt;
                };

                class EV_GRAPHIC_DLL RenderSystemOpPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    RenderSystemOpPair(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        if (pList)
                        {
                            first = pList->GetAt("id") != NULL ? *(ev_int32 *)pList->GetAt("id") : 0;
                            second = pList->GetAt("op") != NULL ? (CRenderSystemOperation *)pList->GetAt("op") : NULL;
                        }
                    }
                public:
                    ev_int32 first;
                    CRenderSystemOperation *second;
                public:
                    RenderSystemOpPair()
                    {
                    }
                    RenderSystemOpPair(ev_int32 id, CRenderSystemOperation *op)
                    {
                        first = id;
                        second = op;
                    }

                };
                class EV_GRAPHIC_DLL RenderSystemOpPairs : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    RenderSystemOpPairs(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<RenderSystemOpPair> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, RenderSystemOpPair const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    RenderSystemOpPairs() {}
                    void push_back(const RenderSystemOpPair &t)
                    {
                        mList.push_back(t);
                    }
                    void insert(ev_uint32 pos, const RenderSystemOpPair &t)
                    {
                        mList.insert(begin() + pos, t);
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
                    RenderSystemOpPair &operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    RenderSystemOpPair const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    RenderSystemOpPair &at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    RenderSystemOpPair const &at(ev_size_t n) const
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
                /** Operation setup for a CRenderTarget (collected).
                */
                class EV_GRAPHIC_DLL CTargetOperation : public EarthView::World::Core::CBaseObject
                {
                public:
                    CTargetOperation():
                        target(NULL), currentQueueGroupID(0), visibilityMask(0xFFFFFFFF),
                        lodBias(1.0f),
                        onlyInitial(false), hasBeenRendered(false), findVisibleObjects(false),
                        materialScheme(CMaterialManager::DEFAULT_SCHEME_NAME), shadowsEnabled(true)
                    {
                    }
                    CTargetOperation(CRenderTarget *ref_inTarget):
                        target(ref_inTarget), currentQueueGroupID(0), visibilityMask(0xFFFFFFFF),
                        lodBias(1.0f),
                        onlyInitial(false), hasBeenRendered(false), findVisibleObjects(false),
                        materialScheme(CMaterialManager::DEFAULT_SCHEME_NAME), shadowsEnabled(true)
                    {
                    }
                ev_private:
                    CTargetOperation(_in EarthView::World::Core::CNameValuePairList *pList)
                        : target(pList && pList->GetAt("ref_inTarget") != NULL ? (CRenderTarget *)pList->GetAt("ref_inTarget") : NULL),
                          currentQueueGroupID(0), visibilityMask(0xFFFFFFFF),
                          lodBias(1.0f),
                          onlyInitial(false), hasBeenRendered(false), findVisibleObjects(false),
                          materialScheme(CMaterialManager::DEFAULT_SCHEME_NAME), shadowsEnabled(true)
                    {
                    }
                public:
                    CRenderTarget *target;
                    //// Current group ID
                    ev_int32 currentQueueGroupID;
                    //// CRenderSystem operations to queue into the scene manager, by
                    //// ev_uint8
                    RenderSystemOpPairs renderSystemOperations;
                    //// Scene visibility mask
                    //// If this is 0, the scene is not rendered at all
                    ev_uint32 visibilityMask;
                    //// LOD offset. This is multiplied with the camera LOD offset
                    //// 1.0 is default, lower means lower detail, higher means higher detail
                    ev_real32 lodBias;
                    /***** A set of render queues to either include or exclude certain render queues.
                    ****/
                    /**** typedef std::bitset<RENDER_QUEUE_COUNT> RenderQueueBitSet;****/
                    class EV_GRAPHIC_DLL RenderQueueBitSet : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        RenderQueueBitSet(EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        RenderQueueBitSet();
                        ev_bool any();
                        ev_bool none();
                        ev_int32 count();
                        ev_int32 size();
                        ev_bool test(ev_int32 pos);
                        void put();
                        void put(ev_int32 pos);
                        void reset();
                        void reset(ev_int32 pos);
                        void flip();
                        void flip(ev_int32 pos);
                    private:
                        std::bitset<RENDER_QUEUE_COUNT> m_bitset;
                    };
                    //// Which renderqueues to render from scene
                    RenderQueueBitSet renderQueues;
                    /***** @see CCompositionTargetPass::mOnlyInitial
                    ****/
                    ev_bool onlyInitial;
                    /***** "Has been rendered" flag; used in combination with
                    onlyInitial to determine whether to skip this target operation.
                    ****/
                    ev_bool hasBeenRendered;
                    /***** Whether this op needs to find visible scene objects or not
                    ****/
                    ev_bool findVisibleObjects;
                    /***** Which material scheme this op will use ****/
                    EVString materialScheme;
                    /***** Whether shadows will be enabled ****/
                    ev_bool shadowsEnabled;
                };
                class EV_GRAPHIC_DLL CompiledState : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CompiledState(_in EarthView::World::Core::CNameValuePairList *pList) {}

                ev_private:
                    typedef vector<CTargetOperation> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, CTargetOperation const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    CompiledState() {}
                    void push_back(const CTargetOperation &t)
                    {
                        mList.push_back(t);
                    }
                    void insert(ev_uint32 pos, CTargetOperation const &t)
                    {
                        mList.insert(begin() + pos, t);
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
                    CTargetOperation &operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    CTargetOperation const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    CTargetOperation &at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    CTargetOperation const &at(ev_size_t n) const
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
                /***** Set enabled flag. The compositor instance will only render if it is
                enabled, otherwise it is pass-through.
                ****/
                void setEnabled(ev_bool value);
                /***** Get enabled flag.
                ****/
                ev_bool getEnabled() const;
                void setAlive(ev_bool value);
                /***** Get alive flag.
                ****/
                ev_bool getAlive() const
                {
                    return mAlive;
                }
                /***** Get the instance name for a local texture.
                @note It is only valid to call this when local textures have been loaded,
                which in practice means that the compositor instance is active. Calling
                it at other times will cause an exception. Note that since textures
                are cleaned up aggressively, this name is not guaranteed to stay the
                same if you disable and re-enable the compositor instance.
                @param name The name of the texture in the original compositor definition
                @param mrtIndex If name identifies a MRT, which texture attachment to retrieve
                @returns The instance name for the texture, corresponds to a real texture
                ****/
                EVString getTextureInstanceName(const EVString &name, ev_size_t mrtIndex);
                /***** Get the instance of a local texture.
                @note Textures are only valid when local textures have been loaded,
                which in practice means that the compositor instance is active. Calling
                this method at other times will return null pointers. Note that since textures
                are cleaned up aggressively, this pointer is not guaranteed to stay the
                same if you disable and re-enable the compositor instance.
                @param name The name of the texture in the original compositor definition
                @param mrtIndex If name identifies a MRT, which texture attachment to retrieve
                @returns The texture pointer, corresponds to a real texture
                ****/
                CTexturePtr getTextureInstance(const EVString &name, ev_size_t mrtIndex);
                /***** Get the render target for a given render texture name.
                @remarks
                You can use this to add listeners etc, but do not use it to update the
                targets manually or any other modifications, the compositor instance
                is in charge of this.
                ****/
                CRenderTarget *getRenderTarget(const EVString &name);

                /***** Recursively collect target states (except for final CPass).
                @param compiledState    This vector will contain a list of CTargetOperation objects
                ****/
                virtual void _compileTargetOperations(CompiledState &compiledState);
                /***** Compile the final (output) operation. This is done separately because this
                is combined with the input in chained filters.
                ****/
                virtual void _compileOutputOperation(CTargetOperation &finalState);
                /***** Get CCompositor of which this is an instance
                ****/
                CCompositor *getCompositor();
                /***** Get CCompositionTechnique used by this instance
                ****/
                CCompositionTechnique *getTechnique();
                /***** Change the technique we're using to render this compositor.
                @param tech The technique to use (must be supported and from the same CCompositor)
                @param reuseTextures If textures have already been created for the current
                technique, whether to try to re-use them if sizes & formats match.
                ****/
                void setTechnique(CCompositionTechnique *ref_tech, ev_bool reuseTextures );
                void setTechnique(CCompositionTechnique *ref_tech);
                /***** Pick a technique to use to render this compositor based on a scheme.
                @remarks
                If there is no specific supported technique with this scheme name,
                then the first supported technique with no specific scheme will be used.
                @see CCompositionTechnique::setSchemeName
                @param schemeName The scheme to use
                @param reuseTextures If textures have already been created for the current
                technique, whether to try to re-use them if sizes & formats match.
                Note that for this feature to be of benefit, the textures must have been created
                with the 'pooled' option enabled.
                ****/
                void setScheme(const EVString &schemeName, ev_bool reuseTextures );
                void setScheme(const EVString &schemeName);
                //// Returns the name of the scheme this compositor is using
                const EVString &getScheme() const
                {
                    return mTechnique ? mTechnique->getSchemeName() : EarthView::World::Core::CStringUtil::BLANK;
                }
                /***** Notify this instance that the primary surface has been resized.
                @remarks
                This will allow the instance to recreate its resources that
                are dependent on the size.
                ****/
                void notifyResized();

                /***** Get Chain that this instance is part of
                ****/
                CCompositorChain *getChain();
                /***** Add a listener. Listeners provide an interface to "listen in" to to render system
                operations executed by this CCompositorInstance so that materials can be
                programmatically set up.
                @see CCompositorInstance::CCompositorInstanceListener
                ****/
                void addListener(CCompositorInstanceListener *ref_l);
                /***** Remove a listener.
                @see CCompositorInstance::CCompositorInstanceListener
                ****/
                void removeListener(CCompositorInstanceListener *l);
                /***** Notify listeners of a material compilation.
                ****/
                void _fireNotifyMaterialSetup(ev_uint32 pass_id, CMaterialPtr &mat);
                /***** Notify listeners of a material render.
                ****/
                void _fireNotifyMaterialRender(ev_uint32 pass_id, CMaterialPtr &mat);
                /***** Notify listeners of a material render.
                ****/
                void _fireNotifyResourcesCreated(ev_bool forResizeOnly);
            private:
                //// CCompositor of which this is an instance
                CCompositor *mCompositor;
                //// Composition technique used by this instance
                CCompositionTechnique *mTechnique;
                //// Composition chain of which this instance is part
                CCompositorChain *mChain;
                //// Is this instance enabled?
                ev_bool mEnabled;
                ev_bool mAlive;
                //// Map from name->local texture
                typedef map<EVString, CTexturePtr> LocalTextureMap;
                LocalTextureMap mLocalTextures;
                //// Store a list of MRTs we've created
                typedef map<EVString, CMultiRenderTarget *> LocalMRTMap;
                LocalMRTMap mLocalMRTs;
                typedef map<CCompositionTechnique::CTextureDefinition *, CTexturePtr> ReserveTextureMap;
                /***** Textures that are not currently in use, but that we want to keep for now,
                for example if we switch techniques but want to keep all textures available
                in case we switch back.
                ****/
                ReserveTextureMap mReserveTextures;
                //// Vector of listeners
                typedef vector<CCompositorInstanceListener *> Listeners;
                Listeners mListeners;
                //// Previous instance (set by chain)
                CCompositorInstance *mPreviousInstance;

                /***** Collect rendering passes. Here, passes are converted into render target operations
                and queued with queueRenderSystemOp.
                ****/
                virtual void collectPasses(CTargetOperation &finalState, CCompositionTargetPass *target);
                /***** Create a local dummy material with one technique but no passes.
                The material is detached from the CMaterial Manager to make sure it is destroyed
                when going out of scope.
                ****/
                CMaterialPtr createLocalMaterial(const EVString &srcName);
                /***** Create local rendertextures and other resources. Builds mLocalTextures.
                ****/
                void createResources(ev_bool forResizeOnly);
                /***** Destroy local rendertextures and other resources.
                ****/
                void freeResources(ev_bool forResizeOnly, ev_bool clearReserveTextures);
                /***** Get CRenderTarget for a named local texture.
                ****/
                CRenderTarget *getTargetForTex(const EVString &name);
                /***** Get source texture name for a named local texture.
                @param name The local name of the texture as given to it in the compositor
                @param mrtIndex For MRTs, which attached surface to retrieve
                ****/
                EVString getSourceForTex(const EVString &name, ev_size_t mrtIndex);
                EVString getSourceForTex(const EVString &name);
                /***** Queue a render system operation.
                @returns destination pass
                ****/
                void queueRenderSystemOp(CTargetOperation &finalState, CRenderSystemOperation *op);
                //// Util method for assigning a local texture name to a MRT attachment
                EVString getMRTTexLocalName(const EVString &baseName, ev_size_t attachment);
                /***** Search for options like AA and hardware gamma which we may want to
                inherit from the main render target to which we're attached.
                ****/
                void deriveTextureRenderTargetOptions(const EVString &texname,
                                                      ev_bool *hwGammaWrite, ev_uint32 *fsaa, EVString *fsaaHint);

                //// Notify this instance that the primary viewport's camera has changed.
                void notifyCameraChanged(CCamera *ref_camera);
                friend class CCompositorChain;
            };
        }
    }
}

#endif
