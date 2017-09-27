#ifndef __PanelOverlayElement_H__
#define __PanelOverlayElement_H__
#include "graphic/graphic_config.h"
#include "overlaycontainer.h"
#include "renderoperation.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** COverlayElement representing a flat, single-material (or transparent) panel which can contain other elements.
            @remarks
                This class subclasses COverlayContainer because it can contain other elements. Like other
                containers, if hidden it's contents are also hidden, if moved it's contents also move etc.
                The panel itself is a 2D rectangle which is either completely transparent, or is rendered
                with a single material. The texture(s) on the panel can be tiled depending on your requirements.
            @par
                This component is suitable for backgrounds and grouping other elements. Note that because
                it has a single repeating material it cannot have a discrete border (unless the texture has one and
                the texture is tiled only once). For a bordered panel, see it's subclass CBorderPanelOverlayElement.
            @par
                Note that the material can have all the usual effects applied to it like multiple texture
                layers, scrolling / animated textures etc. For multiple texture layers, you have to set
                the tiling level for each layer.
            */
            class EV_GRAPHIC_DLL CPanelOverlayElement : public EarthView::World::Graphic::COverlayContainer
            {
            ev_private:
                CPanelOverlayElement(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Constructor. */

                CPanelOverlayElement(const EVString &name);
                virtual ~CPanelOverlayElement();
                /** Initialise */
                virtual void initialise();
                /** Sets the number of times textures should repeat.
                @param x The number of times the texture should repeat horizontally
                @param y The number of times the texture should repeat vertically
                @param layer The texture layer to specify (only needs to be altered if
                */
                void setTiling(Real x, Real y, ev_uint16 layer);
                void setTiling(Real x, Real y);
                Real getTileX(ev_uint16 layer) const;
                Real getTileX() const;
                /** Gets the number of times the texture should repeat vertically.
                @param layer The texture layer to specify (only needs to be altered if
                */
                Real getTileY(ev_uint16 layer) const;
                Real getTileY() const;
                /** Sets the texture coordinates for the panel. */
                void setUV(Real u1, Real v1, Real u2, Real v2);
                /** Get the uv coordinates for the panel*/
                void getUV(Real &u1, Real &v1, Real &u2, Real &v2) const;
                /** Sets whether this panel is transparent (used only as a grouping level), or
                    if it is actually rendered.
                */
                void setTransparent(ev_bool isTransparent);
                /** Returns whether this panel is transparent. */
                ev_bool isTransparent() const;
                /** See COverlayElement. */
                virtual EVString getTypeName() const;
                /** See CRenderable. */
                void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                /** Overridden from COverlayElement */
                void setMaterialName(const EVString &matName);
                /** Overridden from EarthView::World::Graphic::COverlayContainer */
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);

                /** Command object for specifying tiling (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdTiling : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying transparency (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdTransparent : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying UV coordinates (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdUVCoords : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
            protected:
                /// Flag indicating if this panel should be visual or just group things
                ev_bool mTransparent;
                /// CTexture tiling
                Real mTileX[EV_MAX_TEXTURE_LAYERS];
                Real mTileY[EV_MAX_TEXTURE_LAYERS];
                ev_size_t mNumTexCoordsInBuffer;
                Real mU1, mV1, mU2, mV2;
                EarthView::World::Graphic::CRenderOperation mRenderOp;
            ev_internal:
                //// internal method for setting up geometry, called by COverlayElement::update
                virtual void updatePositionGeometry();
                //// Called to update the texture coords when layers change
                virtual void updateTextureGeometry();
                //// Method for setting up base parameters for this class
                void addBaseParameters();
            protected:
                static EVString msTypeName;
                /// Command objects
                static CCmdTiling msCmdTiling;
                static CCmdTransparent msCmdTransparent;
                static CCmdUVCoords msCmdUVCoords;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

