#ifndef __BorderPanelOverlayElement_H__
#define __BorderPanelOverlayElement_H__
#include "graphic/graphic_config.h"
#include "paneloverlayelement.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {



            class CBorderRenderable;

            ///<summary> A specialisation of the EarthView::World::Graphic::CPanelOverlayElement to provide a panel with a border.
            ///remarks
            ///   Whilst the standard panel can use a single tiled material, this class allows
            ///    panels with a tileable backdrop plus a border texture. This is handy for large
            ///    panels that are too big to use a single large texture with a border, or
            ///    for multiple different size panels where you want the border a constant width
            ///    but the center to repeat.
            ///par
            ///    In addition to the usual CPanelOverlayElement properties, this class has a 'border
            ///     material', which specifies the material used for the edges of the panel,
            ///     a border width (which can either be constant all the way around, or specified
            ///     per edge), and the texture coordinates for each of the border sections.
            /// </summary>
            class EV_GRAPHIC_DLL CBorderPanelOverlayElement : public EarthView::World::Graphic::CPanelOverlayElement
            {
                friend class CBorderRenderable;
            ev_private:
                CBorderPanelOverlayElement(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Constructor */
                CBorderPanelOverlayElement(const EVString &name);

                virtual ~CBorderPanelOverlayElement();
                virtual void initialise();
                EVString getTypeName() const;
                /// <summary> Sets the size of the border.
                ///remarks
                ///    This method sets a constant size for all borders. There are also alternative
                ///    methods which allow you to set border widths for individual edges separately.
                ///    Remember that the dimensions specified here are in relation to the size of
                ///    the screen, so 0.1 is 1/10th of the screen width or height. Also note that because
                ///   border size will look slightly bigger across than up.
                /// </summary>
                /// <param> name ="size" The size of the border as a factor of the screen dimensions ie 0.2 is one-fifth
                /// of the screen size.</param>
                /// <returns></returns>
                void setBorderSize(Real size);
                /// <summary> Sets the size of the border, with different sizes for vertical and horizontal borders.
                /// remarks
                ///    This method sets a size for the side and top / bottom borders separately.
                ///     Remember that the dimensions specified here are in relation to the size of
                ///     the screen, so 0.1 is 1/10th of the screen width or height. Also note that because
                ///     border size will look slightly bigger across than up.
                /// </summary>
                /// <param> name ="sides" The size of the side borders as a factor of the screen dimensions ie 0.2 is one-fifth
                /// of the screen size.</param>
                /// <param> name ="topAndBottom" The size of the top and bottom borders as a factor of the screen dimensions.</param>
                /// <returns> </returns>
                void setBorderSize(Real sides, Real topAndBottom);
                /// <summary> Sets the size of the border separately for all borders.
                /// remarks
                ///     This method sets a size all borders separately.
                ///     Remember that the dimensions specified here are in relation to the size of
                ///     the screen, so 0.1 is 1/10th of the screen width or height. Also note that because
                ///     border size will look slightly bigger across than up.
                /// </summary>
                /// <param>name = "left" The size of the left border as a factor of the screen dimensions ie 0.2 is one-fifth
                ///     of the screen size.</param>
                /// <param>name = "right" The size of the left border as a factor of the screen dimensions.</param>
                /// <param> name ="top" The size of the top border as a factor of the screen dimensions.</param>
                /// <param> name = "bottom" The size of the bottom border as a factor of the screen dimensions.</param>
                ///<returns></returns>
                void setBorderSize(Real left, Real right, Real top, Real bottom);
                ///<summary> Gets the size of the left border. </summary>
                ///<param></param>
                ///<returns></returns>
                Real getLeftBorderSize() const;
                ///<summary> Gets the size of the right border. </summary>
                ///<param></param>
                ///<returns></returns>
                Real getRightBorderSize() const;
                ///<summary> Gets the size of the top border. </summary>
                /// <param></param>
                /// <returns></returns>
                Real getTopBorderSize() const;
                /// <summary> Gets the size of the bottom border. </summary>
                /// <param></param>
                /// <returns></returns>
                Real getBottomBorderSize() const;
                /// <summary> Sets the texture coordinates for the left edge of the border.
                ///remarks
                ///    The border panel uses 8 panels for the border (9 including the center).
                ///     Imagine a table with 3 rows and 3 columns. The corners are always the same size,
                ///     but the edges stretch depending on how big the panel is. Those who have done
                ///     resizable HTML tables will be familiar with this approach.
                ///par
                ///      We only require 2 sets of uv coordinates, one for the top-left and one for the
                ///     bottom-right of the panel, since it is assumed the sections are aligned on the texture.
                ///   </summary>
                /// <param>name="u1" u coordinate of top-left point </param>
                ///<param> name ="v1" v coordinate of top-left point</param>
                /// <param>name= "u2" u coordinate of bottom-right point</param>
                ///<param>name ="v2" v coordinate of bottom-right point</param>
                ///<returns></returns>
                void setLeftBorderUV(Real u1, Real v1, Real u2, Real v2);
                /// <summary> Sets the texture coordinates for the right edge of the border. </summary>
                /// <param>name="u1" u coordinate of top-left point </param>
                ///<param> name ="v1" v coordinate of top-left point</param>
                /// <param>name= "u2" u coordinate of bottom-right point</param>
                ///<param>name ="v2" v coordinate of bottom-right point</param>
                ///<returns></returns>
                void setRightBorderUV(Real u1, Real v1, Real u2, Real v2);
                ///<summary> Sets the texture coordinates for the top edge of the border. </summary>
                /// <param>name="u1" u coordinate of top-left point </param>
                ///<param> name ="v1" v coordinate of top-left point</param>
                /// <param>name= "u2" u coordinate of bottom-right point</param>
                ///<param>name ="v2" v coordinate of bottom-right point</param>
                ///<returns></returns>
                void setTopBorderUV(Real u1, Real v1, Real u2, Real v2);
                ///<summary> Sets the texture coordinates for the bottom edge of the border. </summary>
                /// <param>name="u1" u coordinate of top-left point </param>
                ///<param> name ="v1" v coordinate of top-left point</param>
                /// <param>name= "u2" u coordinate of bottom-right point</param>
                ///<param>name ="v2" v coordinate of bottom-right point</param>
                ///<returns></returns>
                void setBottomBorderUV(Real u1, Real v1, Real u2, Real v2);
                /// <summary> Sets the texture coordinates for the top-left corner of the border. </summary>
                /// <param>name="u1" u coordinate of top-left point </param>
                ///<param> name ="v1" v coordinate of top-left point</param>
                /// <param>name= "u2" u coordinate of bottom-right point</param>
                ///<param>name ="v2" v coordinate of bottom-right point</param>
                ///<returns></returns>
                void setTopLeftBorderUV(Real u1, Real v1, Real u2, Real v2);
                /** Sets the texture coordinates for the top-right corner of the border.
                @remarks See setLeftBorderUV.
                */
                void setTopRightBorderUV(Real u1, Real v1, Real u2, Real v2);
                /// <summary> Sets the texture coordinates for the bottom-left corner of the border. <summary>
                /// <param>name="u1" u coordinate of top-left point </param>
                ///<param> name ="v1" v coordinate of top-left point</param>
                /// <param>name= "u2" u coordinate of bottom-right point</param>
                ///<param>name ="v2" v coordinate of bottom-right point</param>
                ///<returns></returns>
                void setBottomLeftBorderUV(Real u1, Real v1, Real u2, Real v2);
                ///<summary> Sets the texture coordinates for the bottom-right corner of the border. </summary>
                /// <param>name="u1" u coordinate of top-left point </param>
                ///<param> name ="v1" v coordinate of top-left point</param>
                /// <param>name= "u2" u coordinate of bottom-right point</param>
                ///<param>name ="v2" v coordinate of bottom-right point</param>
                ///<returns></returns>
                void setBottomRightBorderUV(Real u1, Real v1, Real u2, Real v2);
                EVString getLeftBorderUVString() const;
                EVString getRightBorderUVString() const;
                EVString getTopBorderUVString() const;
                EVString getBottomBorderUVString() const;
                EVString getTopLeftBorderUVString() const;
                EVString getTopRightBorderUVString() const;
                EVString getBottomLeftBorderUVString() const;
                EVString getBottomRightBorderUVString() const;


                ///<summary> Sets the name of the material to use for the borders. </summary>
                ///<param>name ="name"</param>
                ///<returns></returns>
                void setBorderMaterialName(const EVString &name);
                ///<summary> Gets the name of the material to use for the borders. </summary>
                ///<param></param>
                ///<returns></returns>
                const EVString &getBorderMaterialName() const;
                ///<summary> Overridden from COverlayContainer </summary>
                ///<param>name="queue"</param>
                ///<returns></param>
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                ///<summary> @copydoc OvelayElement::visitRenderables</summary>
                ///<param>name ="visitor"</param>
                ///<param>name ="debugRenderables"</param>
                ///<returns></returns>
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                      ev_bool debugRenderables);
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                ///<summary> Overridden from COverlayElement </summary>
                ///<param>name="gmm"</param>
                ///<returns></returns>
                void setMetricsMode(EarthView::World::Graphic::GuiMetricsMode gmm);
                ///<summary> Overridden from COverlayElement </summary>
                ///<param></param>
                ///<returns></returns>
                void _update();

                ///<summary> Command object for specifying border sizes (see CParamCommand).</summary>
                class EV_GRAPHIC_PRIVATE CCmdBorderSize : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying the CMaterial for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderMaterial : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderLeftUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderTopUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderRightUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderBottomUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderTopLeftUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderBottomLeftUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderBottomRightUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                /** Command object for specifying texture coordinates for the border (see CParamCommand).*/
                class EV_GRAPHIC_PRIVATE CCmdBorderTopRightUV : public EarthView::World::Core::CParamCommand
                {
                public:
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
            ev_internal:
                //// internal method for setting up geometry, called by COverlayElement::update
                void updatePositionGeometry();
                //// internal method for setting up geometry, called by COverlayElement::update
                void updateTextureGeometry();
                //// Internal method for setting up parameters
                void addBaseParameters();
            protected:
                Real mLeftBorderSize;
                Real mRightBorderSize;
                Real mTopBorderSize;
                Real mBottomBorderSize;
                struct CellUV
                {
                    Real u1, v1, u2, v2;
                };
                CellUV mBorderUV[8];
                ev_uint16 mPixelLeftBorderSize;
                ev_uint16 mPixelRightBorderSize;
                ev_uint16 mPixelTopBorderSize;
                ev_uint16 mPixelBottomBorderSize;
                EVString mBorderMaterialName;
                EarthView::World::Graphic::CMaterialPtr mpBorderMaterial;
                /// Render operation for the border area
                EarthView::World::Graphic::CRenderOperation mRenderOp2;
                static EVString msTypeName;

                enum BorderCellIndex
                {
                    BCELL_TOP_LEFT = 0,
                    BCELL_TOP = 1,
                    BCELL_TOP_RIGHT = 2,
                    BCELL_LEFT = 3,
                    BCELL_RIGHT = 4,
                    BCELL_BOTTOM_LEFT = 5,
                    BCELL_BOTTOM = 6,
                    BCELL_BOTTOM_RIGHT = 7
                };
                EVString getCellUVString(BorderCellIndex idx) const;
                /// Command objects
                static CCmdBorderSize msCmdBorderSize;
                static CCmdBorderMaterial msCmdBorderMaterial;
                static CCmdBorderLeftUV msCmdBorderLeftUV;
                static CCmdBorderTopUV msCmdBorderTopUV;
                static CCmdBorderBottomUV msCmdBorderBottomUV;
                static CCmdBorderRightUV msCmdBorderRightUV;
                static CCmdBorderTopLeftUV msCmdBorderTopLeftUV;
                static CCmdBorderBottomLeftUV msCmdBorderBottomLeftUV;
                static CCmdBorderTopRightUV msCmdBorderTopRightUV;
                static CCmdBorderBottomRightUV msCmdBorderBottomRightUV;
                CBorderRenderable *mBorderRenderable;
            };
            /** Class for rendering the border of a EarthView::World::Graphic::CBorderPanelOverlayElement.
            @remarks
                We need this because we have to render twice, once with the inner panel's repeating
                material (handled by superclass) and once for the border's separate material.
            */
            class EV_GRAPHIC_DLL CBorderRenderable : public EarthView::World::Graphic::CRenderable
            {
            ev_private:
                CBorderRenderable(_in EarthView::World::Core::CNameValuePairList *pList) : mParent((EarthView::World::Graphic::CBorderPanelOverlayElement *)pList->GetAt("ref_parent"))
                {
                    mUseIdentityProjection = true;
                    mUseIdentityView = true;
                }
            protected:
                EarthView::World::Graphic::CBorderPanelOverlayElement *mParent;
            public:
                /** Constructed with pointers to parent. */
                CBorderRenderable(EarthView::World::Graphic::CBorderPanelOverlayElement *ref_parent) : mParent(ref_parent)
                {
                    mUseIdentityProjection = true;
                    mUseIdentityView = true;
                }

                const EarthView::World::Graphic::CMaterialPtr &getMaterial() const
                {
                    return mParent->mpBorderMaterial;
                }
                void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op)
                {
                    op = mParent->mRenderOp2;
                }
                void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const
                {
                    mParent->getWorldTransforms(xform);
                }
                ev_uint16 getNumWorldTransforms() const
                {
                    return 1;
                }
                Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const
                {
                    return mParent->getSquaredViewDepth(cam);
                }
                const EarthView::World::Graphic::LightList &getLights() const
                {
                    /// N/A, panels are not lit
                    static EarthView::World::Graphic::LightList ll;
                    return ll;
                }
                ev_bool getPolygonModeOverrideable() const
                {
                    return mParent->getPolygonModeOverrideable();
                }
            };


        }
    }
}

#endif

