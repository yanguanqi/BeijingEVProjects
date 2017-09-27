#ifndef __OverlayElement_H__
#define __OverlayElement_H__
#include "graphic/graphic_config.h"
#include "renderable.h"
#include "overlayelementcommands.h"
#include "rectangle.h"
#include "material.h"
#include <mathengine/matrix4.h>
#include "core/stringinterface.h"

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
            class COverlay;
            class CRenderQueue;

            /***** Enum describing how the position / size of an element is to be recorded.
            ****/
            enum GuiMetricsMode
            {
                //// 'left', 'top', 'height' and 'width' are parametrics from 0.0 to 1.0
                GMM_RELATIVE,
                //// Positions & sizes are in absolute pixels
                GMM_PIXELS,
                //// Positions & sizes are in virtual pixels
                GMM_RELATIVE_ASPECT_ADJUSTED
            };
            /***** Enum describing where '0' is in relation to the parent in the horizontal dimension.
            @remarks Affects how 'left' is interpreted.
            ****/
            enum GuiHorizontalAlignment
            {
                GHA_LEFT,
                GHA_CENTER,
                GHA_RIGHT
            };
            /***** Enum describing where '0' is in relation to the parent in the vertical dimension.
            @remarks Affects how 'top' is interpreted.
            ****/
            enum GuiVerticalAlignment
            {
                GVA_TOP,
                GVA_CENTER,
                GVA_BOTTOM
            };
            /***** Abstract definition of a 2D element to be displayed in an EarthView::World::Graphic::COverlay.
            @remarks
            This class abstracts all the details of a 2D element which will appear in
            an overlay. In fact, not all EarthView::World::Graphic::COverlayElement instances can be directly added to an
            COverlay, only those which are COverlayContainer instances (a subclass of this class).
            EarthView::World::Graphic::COverlayContainer objects can contain any EarthView::World::Graphic::COverlayElement however. This is just to
            enforce some level of grouping on widgets.
            @par
            instantiating / deleting elements, and also for accepting new types of element
            from plugins etc.
            @par
            Note that positions / dimensions of 2D screen elements are expressed as parametric
            values (0.0 - 1.0) because this makes them resolution-independent. However, most
            screen resolutions have an aspect ratio of 1.3333:1 (width : height) so note that
            in physical pixels 0.5 is wider than it is tall, so a 0.5x0.5 panel will not be
            square on the screen (but it will take up exactly half the screen in both dimensions).
            @par
            Because this class is designed to be extensible, it subclasses from CStringInterface
            so its parameters can be set in a generic way.
            ****/
            class EV_GRAPHIC_DLL COverlayElement : public EarthView::World::Graphic::CRenderable
            {
            public:
                class EV_GRAPHIC_DLL COverlayElementInternalStringInterface : public EarthView::World::Core::CStringInterface
                {
                public:
                    COverlayElementInternalStringInterface(COverlayElement *parent): CStringInterface(parent) {}
                ev_private:
                    COverlayElementInternalStringInterface(_in EarthView::World::Core::CNameValuePairList *pList): CStringInterface(pList->GetAt("parent")) {}
                };
            private:
                EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface *m_pStringInterface;
            public:
                EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface *getStringInterfacePtr()
                {
                    return m_pStringInterface;
                }
                ///EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface& getStringInterface() {return *m_pStringInterface;} //
            protected:
                /// Command object for setting / getting parameters
                static OverlayElementCommands::CCmdLeft msLeftCmd;
                static OverlayElementCommands::CCmdTop msTopCmd;
                static OverlayElementCommands::CCmdWidth msWidthCmd;
                static OverlayElementCommands::CCmdHeight msHeightCmd;
                static OverlayElementCommands::CCmdMaterial msMaterialCmd;
                static OverlayElementCommands::CCmdCaption msCaptionCmd;
                static OverlayElementCommands::CCmdMetricsMode msMetricsModeCmd;
                static OverlayElementCommands::CCmdHorizontalAlign msHorizontalAlignCmd;
                static OverlayElementCommands::CCmdVerticalAlign msVerticalAlignCmd;
                static OverlayElementCommands::CCmdVisible msVisibleCmd;

                EVString mName;
                ev_bool mVisible;
                ev_bool mCloneable;
                Real mLeft;
                Real mTop;
                Real mWidth;
                Real mHeight;
                EVString mMaterialName;
                EarthView::World::Graphic::CMaterialPtr mpMaterial;
                EarthView::World::Core::DisplayString mCaption;
                EarthView::World::Graphic::CColourValue mColour;
                EarthView::World::Graphic::Rectangle mClippingRegion;
                EarthView::World::Graphic::GuiMetricsMode mMetricsMode;
                EarthView::World::Graphic::GuiHorizontalAlignment mHorzAlign;
                EarthView::World::Graphic::GuiVerticalAlignment mVertAlign;
                /// metric-mode positions, used in GMM_PIXELS & GMM_RELATIVE_ASPECT_ADJUSTED mode.
                Real mPixelTop;
                Real mPixelLeft;
                Real mPixelWidth;
                Real mPixelHeight;
                Real mPixelScaleX;
                Real mPixelScaleY;
                /// Parent pointer
                EarthView::World::Graphic::COverlayContainer *mParent;
                /// EarthView::World::Graphic::COverlay attached to
                EarthView::World::Graphic::COverlay *mOverlay;
                /// Derived positions from parent
                Real mDerivedLeft;
                Real mDerivedTop;
                ev_bool mDerivedOutOfDate;
                //// Flag indicating if the vertex positions need recalculating
                ev_bool mGeomPositionsOutOfDate;
                //// Flag indicating if the vertex uvs need recalculating
                ev_bool mGeomUVsOutOfDate;
                /// Zorder for when sending to render queue
                /// Derived from parent
                ev_uint16 mZOrder;
                /// world transforms
                EarthView::World::Spatial::Math::CMatrix4 mXForm;
                /// is element enabled
                ev_bool mEnabled;
                /// is element initialised
                ev_bool mInitialised;
                /// Used to see if this element is created from a Template
                EarthView::World::Graphic::COverlayElement *mSourceTemplate ;
            ev_internal:
                /***** Internal method which is triggered when the positions of the element get updated,
                meaning the element should be rebuilding it's mesh positions. Abstract since
                subclasses must implement this.
                ****/
                virtual void updatePositionGeometry() {};
                /***** Internal method which is triggered when the UVs of the element get updated,
                meaning the element should be rebuilding it's mesh UVs. Abstract since
                subclasses must implement this.
                ****/
                virtual void updateTextureGeometry() {};
                /***** Internal method for setting up the basic parameter definitions for a subclass.
                @remarks
                Because CStringInterface holds a dictionary of parameters per class, subclasses need to
                call this to ask the base class to add it's parameters to their dictionary as well.
                Can't do this in the constructor because that runs in a non-virtual context.
                @par
                The subclass must have called it's own createParamDictionary before calling this method.
                ****/
                virtual void addBaseParameters();
            ev_private:
                COverlayElement(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

				/// <summary>
				/// 渲染开始时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
				virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
				/// <summary>
				/// 渲染完成时向外通知的事件
				/// </summary>
				/// <param name="sm">渲染场景</param>
				/// <param name="rsys">渲染系统</param>
				/// <returns></returns>
				virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

                //// Constructor: do not call direct, use COverlayManager::createElement
                COverlayElement(const EVString &name);

                virtual ~COverlayElement();
                /***** Initialise gui element ****/
                virtual void initialise() {};
                /***** Gets the name of this overlay. ****/
                const EVString &getName() const;

                /***** Shows this element if it was hidden. ****/
                virtual void show();
                /***** Hides this element if it was visible. ****/
                virtual void hide();
                /***** Returns whether or not the element is visible. ****/
                ev_bool isVisible() const;
                ev_bool isEnabled() const;
                virtual void setEnabled(ev_bool b);

                /***** Sets the dimensions of this element in relation to the screen (1.0 = screen width/height). ****/
                void setDimensions(Real width, Real height);
                /***** Sets the position of the top-left corner of the element, relative to the screen size
                (1.0 = screen width / height) ****/
                void setPosition(Real left, Real top);
                /***** Sets the width of this element in relation to the screen (where 1.0 = screen width) ****/
                void setWidth(Real width);
                /***** Gets the width of this element in relation to the screen (where 1.0 = screen width) ****/
                Real getWidth() const;
                /***** Sets the height of this element in relation to the screen (where 1.0 = screen height) ****/
                void setHeight(Real height);
                /***** Gets the height of this element in relation to the screen (where 1.0 = screen height) ****/
                Real getHeight() const;
                /***** Sets the left of this element in relation to the screen (where 0 = far left, 1.0 = far right) ****/
                void setLeft(Real left);
                /***** Gets the left of this element in relation to the screen (where 0 = far left, 1.0 = far right)  ****/
                Real getLeft() const;
                /***** Sets the top of this element in relation to the screen (where 0 = top, 1.0 = bottom) ****/
                void setTop(Real Top);
                /***** Gets the top of this element in relation to the screen (where 0 = top, 1.0 = bottom)  ****/
                Real getTop() const;
                /***** Gets the left of this element in relation to the screen (where 0 = far left, 1.0 = far right)  ****/
                Real _getLeft() const
                {
                    return mLeft;
                }
                /***** Gets the top of this element in relation to the screen (where 0 = far left, 1.0 = far right)  ****/
                Real _getTop() const
                {
                    return mTop;
                }
                /***** Gets the width of this element in relation to the screen (where 1.0 = screen width)  ****/
                Real _getWidth() const
                {
                    return mWidth;
                }
                /***** Gets the height of this element in relation to the screen (where 1.0 = screen height)  ****/
                Real _getHeight() const
                {
                    return mHeight;
                }
                /***** Sets the left of this element in relation to the screen (where 1.0 = screen width) ****/
                void _setLeft(Real left);
                /***** Sets the top of this element in relation to the screen (where 1.0 = screen width) ****/
                void _setTop(Real top);
                /***** Sets the width of this element in relation to the screen (where 1.0 = screen width) ****/
                void _setWidth(Real width);
                /***** Sets the height of this element in relation to the screen (where 1.0 = screen width) ****/
                void _setHeight(Real height);
                /***** Sets the left and top of this element in relation to the screen (where 1.0 = screen width) ****/
                void _setPosition(Real left, Real top);
                /***** Sets the width and height of this element in relation to the screen (where 1.0 = screen width) ****/
                void _setDimensions(Real width, Real height);
                /***** Gets the name of the material this element uses. ****/
                virtual EVString getMaterialName() const;
                /***** Sets the name of the material this element will use.
                @remarks
                Different elements will use different materials. One constant about them
                all though is that a CMaterial used for a EarthView::World::Graphic::COverlayElement must have it's depth
                checking set to 'off', which means it always gets rendered on top. EV_World
                will set this flag for you if necessary. What it does mean though is that
                you should not use the same CMaterial for rendering OverlayElements as standard
                scene objects. It's fine to use the same textures, just not the same
                CMaterial.
                ****/
                virtual void setMaterialName(const EVString &matName);

                /// --- EarthView::World::Graphic::CRenderable Overrides ---
                /***** See EarthView::World::Graphic::CRenderable ****/
                const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                /// NB getRenderOperation not implemented, still abstract here
                /***** See EarthView::World::Graphic::CRenderable ****/
                void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                /***** Tell the object to recalculate ****/
                virtual void _positionsOutOfDate();
                /***** Internal method to update the element based on transforms applied. ****/
                virtual void _update();
                /***** Updates this elements transform based on it's parent. ****/
                virtual void _updateFromParent();
                /***** Internal method for notifying the GUI element of it's parent and ultimate overlay. ****/
                virtual void _notifyParent(EarthView::World::Graphic::COverlayContainer *ref_parent, COverlay *ref_overlay);
                /***** Gets the 'left' position as derived from own left and that of parents. ****/
                virtual Real _getDerivedLeft();
                /***** Gets the 'top' position as derived from own left and that of parents. ****/
                virtual Real _getDerivedTop();
                /***** Gets the 'width' as derived from own width and metrics mode. ****/
                virtual Real _getRelativeWidth();
                /***** Gets the 'height' as derived from own height and metrics mode. ****/
                virtual Real _getRelativeHeight();

                /***** Gets the clipping region of the element ****/
                virtual void _getClippingRegion(EarthView::World::Graphic::Rectangle &clippingRegion);
                /***** Internal method to notify the element when Zorder of parent overlay
                has changed.
                @remarks
                Overlays have explicit Z orders. OverlayElements do not, they inherit the
                ZOrder of the overlay, and the Zorder is incremented for every container
                nested within this to ensure that containers are displayed behind contained
                items. This method is used internally to notify the element of a change in
                final zorder which is used to render the element.
                @return Return the next zordering number available. For single elements, this
                is simply newZOrder + 1, but for containers, they increment it once for each
                child (more if those children are also containers).
                ****/
                virtual ev_uint16 _notifyZOrder(ev_uint16 newZOrder);
                /***** Internal method to notify the element when it's world transform
                 of parent overlay has changed.
                ****/
                virtual void _notifyWorldTransforms(const EarthView::World::Spatial::Math::CMatrix4 &xform);
                /***** Internal method to notify the element when the viewport
                 of parent overlay has changed.
                ****/
                virtual void _notifyViewport();
                /***** Internal method to put the contents onto the render queue. ****/
                virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                //// @copydoc CMovableObject::visitRenderables
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                      ev_bool debugRenderables = false);
                /***** Gets the type name of the element. All concrete subclasses must implement this. ****/
                virtual EVString getTypeName() const
                {
                    EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                }
                /***** Sets the caption on elements that support it.
                @remarks
                This property doesn't do something on all elements, just those that support it.
                However, being a common requirement it is in the top-level interface to avoid
                having to set it via the CStringInterface all the time.
                ****/
                virtual void setCaption(const EarthView::World::Core::DisplayString &text);
                /***** Gets the caption for this element. ****/
                virtual EarthView::World::Core::DisplayString getCaption() const;
                /***** Sets the colour on elements that support it.
                @remarks
                This property doesn't do something on all elements, just those that support it.
                However, being a common requirement it is in the top-level interface to avoid
                having to set it via the CStringInterface all the time.
                ****/
                virtual void setColour(const EarthView::World::Graphic::CColourValue &col);
                /***** Gets the colour for this element. ****/
                virtual const EarthView::World::Graphic::CColourValue &getColour() const;
                /***** Tells this element how to interpret the position and dimension values it is given.
                @remarks
                By default, OverlayElements are positioned and sized according to relative dimensions
                of the screen. This is to ensure portability between different resolutions when you
                want things to be positioned and sized the same way across all resolutions. However,
                sometimes you want things to be sized according to fixed pixels. In order to do this,
                you can call this method with the parameter GMM_PIXELS. Note that if you then want
                to place your element relative to the center, right or bottom of it's parent, you will
                need to use the setHorizontalAlignment and setVerticalAlignment methods.
                ****/
                virtual void setMetricsMode(EarthView::World::Graphic::GuiMetricsMode gmm);
                /***** Retrieves the current settings of how the element metrics are interpreted. ****/
                virtual EarthView::World::Graphic::GuiMetricsMode getMetricsMode() const;
                /***** Sets the horizontal origin for this element.
                @remarks
                By default, the horizontal origin for a EarthView::World::Graphic::COverlayElement is the left edge of the parent container
                (or the screen if this is a root element). You can alter this by calling this method, which is
                especially useful when you want to use pixel-based metrics (see setMetricsMode) since in this
                mode you can't use relative positioning.
                @par
                crosshair in the center of the screen, you would use GHA_CENTER with a 'left' property of -15.
                @par
                Note that neither GHA_CENTER or GHA_RIGHT alter the position of the element based
                on it's width, you have to alter the 'left' to a negative number to do that; all this
                does is establish the origin. This is because this way you can align multiple things
                in the center and right with different 'left' offsets for maximum flexibility.
                ****/
                virtual void setHorizontalAlignment(EarthView::World::Graphic::GuiHorizontalAlignment gha);
                /***** Gets the horizontal alignment for this element. ****/
                virtual EarthView::World::Graphic::GuiHorizontalAlignment getHorizontalAlignment() const;
                /***** Sets the vertical origin for this element.
                @remarks
                By default, the vertical origin for a EarthView::World::Graphic::COverlayElement is the top edge of the parent container
                (or the screen if this is a root element). You can alter this by calling this method, which is
                especially useful when you want to use pixel-based metrics (see setMetricsMode) since in this
                mode you can't use relative positioning.
                @par
                crosshair in the center of the screen, you would use GHA_CENTER with a 'top' property of -15.
                @par
                Note that neither GVA_CENTER or GVA_BOTTOM alter the position of the element based
                on it's height, you have to alter the 'top' to a negative number to do that; all this
                does is establish the origin. This is because this way you can align multiple things
                in the center and bottom with different 'top' offsets for maximum flexibility.
                ****/
                virtual void setVerticalAlignment(EarthView::World::Graphic::GuiVerticalAlignment gva);
                /***** Gets the vertical alignment for this element. ****/
                virtual EarthView::World::Graphic::GuiVerticalAlignment getVerticalAlignment() const;


                /***** Returns true if xy is within the constraints of the component ****/
                virtual ev_bool contains(Real x, Real y) const;
                /***** Returns true if xy is within the constraints of the component ****/
                virtual EarthView::World::Graphic::COverlayElement *findElementAt(Real x, Real y);					/// relative to parent
                /*****
                * returns false as this class is not a container type
				****/
                inline virtual ev_bool isContainer() const
                {
                    return false;
                }
                inline virtual ev_bool isKeyEnabled() const
                {
                    return false;
                }
                inline virtual ev_bool isCloneable() const
                {
                    return mCloneable;
                }
                inline virtual void setCloneable(ev_bool c)
                {
                    mCloneable = c;
                }
                /*****
                * Returns the parent container.
                ****/
                EarthView::World::Graphic::COverlayContainer *getParent() ;
                void _setParent(EarthView::World::Graphic::COverlayContainer *ref_parent)
                {
                    mParent = ref_parent;
                }
                /*****
                * Returns the zOrder of the element
                ****/
                inline ev_uint16 getZOrder() const
                {
                    return mZOrder;
                }
                /***** Overridden from EarthView::World::Graphic::CRenderable ****/
                Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const
                {
                    return 10000.0f - (Real)getZOrder();
                }
                /***** @copydoc CRenderable::getLights ****/
                const EarthView::World::Graphic::LightList &getLights() const
                {
                    /// Overlayelements should not be lit by the scene, this will not get called
                    static EarthView::World::Graphic::LightList ll;
                    return ll;
                }
                virtual void copyFromTemplate(EarthView::World::Graphic::COverlayElement *ref_templateOverlay);
                virtual EarthView::World::Graphic::COverlayElement *clone(const EVString &instanceName);
                /// Returns the SourceTemplate for this element
                const EarthView::World::Graphic::COverlayElement *getSourceTemplate () const
                {
                    return mSourceTemplate ;
                }
            };

            /***** @} ****/
            /***** @} ****/
        }
    }
}


#endif

