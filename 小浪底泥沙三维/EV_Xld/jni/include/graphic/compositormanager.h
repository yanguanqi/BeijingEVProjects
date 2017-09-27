#ifndef __CompositorManager_H__
#define __CompositorManager_H__
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
#include "pixelformat.h"
#include "compositiontechnique.h"
#include "compositorchain.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCompositorInstance;
            class CRectangle2D;
            class CCompositorLogic;
            class CCustomCompositionPass;
            /***** Class for managing CCompositor settings for EV_World. Compositors provide the means
                to flexibly "composite" the final rendering result from multiple scene renders
                and intermediate operations like rendering fullscreen quads. This makes
                it possible to apply postfilter effects, HDRI postprocessing, and shadow
                effects to a EarthView::World::Graphic::CViewport.
                @par
                    When loaded from a script, a CCompositor is in an 'unloaded' state and only stores the settings
                    required. It does not at that stage load any textures. This is because the material settings may be
                    loaded 'en masse' from bulk material script files, but only a subset will actually be required.
                @par
                    Because this is a subclass of CResourceManager, any files loaded will be searched for in any path or
                    archive added to the resource paths/archives. See EarthView::World::Graphic::CResourceManager for details.
            ****/
            class EV_GRAPHIC_DLL CCompositorManager : public EarthView::World::Graphic::CResourceManager
            {
            private:
                static EarthView::World::Graphic::CCompositorManager *ms_Singleton;
            ev_private:
                CCompositorManager(_in EarthView::World::Core::CNameValuePairList *pList);
			ev_internal:
				//// Overridden from EarthView::World::Graphic::CResourceManager
                _extfree EarthView::World::Graphic::CResource *createImpl(const EVString &name, ResourceHandle handle,
                                               const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                               const EarthView::World::Core::NameValuePairList *params);
            public:
                CCompositorManager();
                virtual ~CCompositorManager();
                static EarthView::World::Graphic::CCompositorManager &getSingleton();
                static EarthView::World::Graphic::CCompositorManager *getSingletonPtr();
                
                /***** Initialises the CCompositor manager, which also triggers it to
                    parse all available .compositor scripts. */
                void initialise();
                /***** @see CScriptLoader::parseScript
                ****/
                void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName);
                /***** Get the compositor chain for a EarthView::World::Graphic::CViewport. If there is none yet, a new
                	compositor chain is registered.
                	XXX We need a _notifyViewportRemoved to find out when this viewport disappears,
                	so we can destroy its chain as well.
                ****/
                EarthView::World::Graphic::CCompositorChain *getCompositorChain(EarthView::World::Graphic::CViewport *vp);
                /***** Returns whether exists compositor chain for a viewport.
                ****/
                ev_bool hasCompositorChain(EarthView::World::Graphic::CViewport *vp) const;
                /***** Remove the compositor chain from a viewport if exists.
                ****/
                void removeCompositorChain(EarthView::World::Graphic::CViewport *vp);
                /***** Add a compositor to a viewport. By default, it is added to end of the chain,
                	after the other compositors.
                	@param vp			EarthView::World::Graphic::CViewport to modify
                	@param compositor	The name of the compositor to apply
                	@param addPosition	At which position to add, defaults to the end (-1).
                	@returns pointer to instance, or 0 if it failed.
                ****/
                EarthView::World::Graphic::CCompositorInstance *addCompositor(EarthView::World::Graphic::CViewport *ref_vp, const EVString &compositor, ev_int32 addPosition);
                EarthView::World::Graphic::CCompositorInstance *addCompositor(EarthView::World::Graphic::CViewport *ref_vp, const EVString &compositor);
                /***** Remove a compositor from a viewport
                ****/
                void removeCompositor(EarthView::World::Graphic::CViewport *vp, const EVString &compositor);
                /***** Set the state of a compositor on a viewport to enabled or disabled.
                	Disabling a compositor stops it from rendering but does not free any resources.
                	the filter is switched on and off a lot.
                ****/
                void setCompositorEnabled(EarthView::World::Graphic::CViewport *vp, const EVString &compositor, ev_bool value);
                /***** Get a textured fullscreen 2D rectangle, for internal use.
                ****/
                EarthView::World::Graphic::CRenderable *_getTexturedRectangle2D();
                /***** Overridden from EarthView::World::Graphic::CResourceManager since we have to clean up chains too. */
                void removeAll();
                /***** Internal method for forcing all active compositors to recreate their resources. */
                void _reconstructAllCompositorResources();
                /****typedef set<EarthView::World::Graphic::CTexture*> EarthView::World::Graphic::CCompositorManager::UniqueTextureSet;****/
                class EV_GRAPHIC_DLL UniqueTextureSet : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef set<EarthView::World::Graphic::CTexture *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_SET(mList);
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CTexture*& ref_t);
                private:
                    InternalList mList;
                ev_private:
                    UniqueTextureSet(_in EarthView::World::Core::CNameValuePairList *pList);
                    iterator find(EarthView::World::Graphic::CTexture *key);
                public:
                    UniqueTextureSet();
                    void insert(EarthView::World::Graphic::CTexture *const &ref_val);
                    ev_size_t size();
                    ev_size_t erase(_in  EarthView::World::Graphic::CTexture *const &key);
                    ev_bool empty();
                    void clear();
                    ev_size_t count(_in  EarthView::World::Graphic::CTexture *const &key);
                    ev_size_t max_size();
                    void swap(_inout EarthView::World::Graphic::CCompositorManager::UniqueTextureSet &other);

                };
                /***** Utility function to get an existing pooled texture matching a given
                	definition, or creating one if one doesn't exist. It also takes into
                	account whether a pooled texture has already been supplied to this
                	same requester already, in which case it won't give the same texture
                	twice (this is important for example if you request 2 ping-pong textures,
                	you don't want to get the same texture for both requests!
                ****/
                EarthView::World::Graphic::CTexturePtr getPooledTexture(const EVString &name, const EVString &localName,
                                             ev_size_t w, ev_size_t h,
                                             EarthView::World::Graphic::PixelFormat f, ev_uint32 aa, const EVString &aaHint, ev_bool srgb, EarthView::World::Graphic::CCompositorManager::UniqueTextureSet &texturesAlreadyAssigned,
                                             EarthView::World::Graphic::CCompositorInstance *inst, EarthView::World::Graphic::CCompositionTechnique::TextureScope scope);
                /***** Free pooled textures from the shared pool (compositor instances still
                ****/
                void freePooledTextures(ev_bool onlyIfUnreferenced);
                void freePooledTextures();
                /***** Register a compositor logic for listening in to expecting composition
                	techniques.
                ****/
                void registerCompositorLogic(const EVString &name, EarthView::World::Graphic::CCompositorLogic *ref_logic);

                /***** Removes a listener for compositor logic registered with registerCompositorLogic
                ****/
                void unregisterCompositorLogic(const EVString &name);
                /***** Get a compositor logic by its name
                ****/
                EarthView::World::Graphic::CCompositorLogic *getCompositorLogic(const EVString &name);
                /***** Register a custom composition pass.
                ****/
                void registerCustomCompositionPass(const EVString &name, EarthView::World::Graphic::CCustomCompositionPass *ref_customPass);

                /***** Get a custom composition pass by its name
                ****/
                EarthView::World::Graphic::CCustomCompositionPass *getCustomCompositionPass(const EVString &name);


            private:
                typedef map<EarthView::World::Graphic::CViewport *, EarthView::World::Graphic::CCompositorChain *> Chains;
                Chains mChains;
                /***** Clear composition chains for all viewports
                 ***/
                void freeChains();
                CRectangle2D *mRectangle;
                //// List of instances
                /*typedef CCompositorChain::Instances Instances;****/
                CompositorInstances mInstances;
                //// Map of registered compositor logics
                typedef map<EVString, EarthView::World::Graphic::CCompositorLogic *> CompositorLogicMap;
                CompositorLogicMap mCompositorLogics;
                //// Map of registered custom composition passes
                typedef map<EVString, EarthView::World::Graphic::CCustomCompositionPass *> CustomCompositionPassMap;
                CustomCompositionPassMap mCustomCompositionPasses;
                typedef vector<EarthView::World::Graphic::CTexturePtr> TextureList;

                typedef EarthView::World::Core::CVectorIterator<TextureList> TextureIterator;
                struct TextureDef
                {
                    ev_size_t width, height;
                    EarthView::World::Graphic::PixelFormat format;
                    ev_uint32 fsaa;
                    EVString fsaaHint;
                    ev_bool sRGBwrite;
                    TextureDef(ev_size_t w, ev_size_t h, EarthView::World::Graphic::PixelFormat f, ev_uint32 aa, const EVString &aaHint, ev_bool srgb)
                        : width(w), height(h), format(f), fsaa(aa), fsaaHint(aaHint), sRGBwrite(srgb)
                    {
                    }
                };
                struct TextureDefLess
                {
                    ev_bool EV_GRAPHIC_DLL operator()(const TextureDef &x, const TextureDef &y) const
                    {
                        if (x.format < y.format)
                            return true;
                        else if (x.format == y.format)
                        {
                            if (x.width < y.width)
                                return true;
                            else if (x.width == y.width)
                            {
                                if (x.height < y.height)
                                    return true;
                                else if (x.height == y.height)
                                {
                                    if (x.fsaa < y.fsaa)
                                        return true;
                                    else if (x.fsaa == y.fsaa)
                                    {
                                        if (x.fsaaHint < y.fsaaHint)
                                            return true;
                                        else if (x.fsaaHint == y.fsaaHint)
                                        {
                                            if (!x.sRGBwrite && y.sRGBwrite)
                                                return true;
                                        }
                                    }
                                }
                            }
                        }
                        return false;
                    }
                    virtual ~TextureDefLess() {}
                };
                typedef map<TextureDef, TextureList *, TextureDefLess> TexturesByDef;
                TexturesByDef mTexturesByDef;
                typedef std::pair<EVString, EVString> StringPair;
                typedef map<TextureDef, EarthView::World::Graphic::CTexturePtr, TextureDefLess> TextureDefMap;
                typedef map<StringPair, TextureDefMap> ChainTexturesByDef;

                ChainTexturesByDef mChainTexturesByDef;
                ev_bool isInputPreviousTarget(EarthView::World::Graphic::CCompositorInstance *inst, const EVString &localName);
                ev_bool isInputPreviousTarget(EarthView::World::Graphic::CCompositorInstance *inst, EarthView::World::Graphic::CTexturePtr tex);
                ev_bool isInputToOutputTarget(EarthView::World::Graphic::CCompositorInstance *inst, const EVString &localName);
                ev_bool isInputToOutputTarget(EarthView::World::Graphic::CCompositorInstance *inst, EarthView::World::Graphic::CTexturePtr tex);
            };
        }
    }
}

#endif

