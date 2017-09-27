#ifndef __CompositionPass_H__
#define __CompositionPass_H__
#include "graphic/graphic_config.h"
#include "material.h"
#include "rendersystem_def.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCompositionTargetPass;
            ///<summary> Object representing one pass or operation in a composition sequence. This provides a
            ///	method to conveniently interleave CRenderSystem commands between Render Queues.
            ///</summary>
            class EV_GRAPHIC_DLL CCompositionPass : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CCompositionPass( _in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositionPass(EarthView::World::Graphic::CCompositionTargetPass *ref_parent);
                ~CCompositionPass();

                ///<summary> Enumeration that enumerates the various composition pass types.
                ///</summary>
                enum PassType
                {
                    PT_CLEAR,           			/// Clear target to one colour
                    PT_STENCIL,						/// Set stencil operation
                    PT_RENDERSCENE,     			/// Render the scene or part of it
                    PT_RENDERQUAD,      			/// Render a full screen quad
                    PT_RENDERCUSTOM					/// Render a custom sequence
                };

                ///<summary> Set the type of composition pass </summary>
                ///<param>name = "type"</param>
                ///<returns></returns>
                void setType(EarthView::World::Graphic::CCompositionPass::PassType type);
                ///<summary> Get the type of composition pass </summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionPass::PassType getType() const;

                ///<summary> Set an identifier for this pass. This identifier can be used to
                ///	"listen in" on this pass with an CCompositorInstance::CCompositorInstanceListener.
                ///</summary>
                ///<param>name = "id"</param>
                ///<returns></returns>
                void setIdentifier(ev_uint32 id);
                ///<summary> Get the identifier for this pass </summary>
                ///<param></param>
                ///<returns>id</returns>
                ev_uint32 getIdentifier() const;
                ///<summary> Set the material used by this pass
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </summary>
                ///<param>name = "mat"</param>
                ///<returns></returns>
                void setMaterial(const EarthView::World::Graphic::CMaterialPtr &mat);
                ///<summary> Set the material used by this pass
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </summary>
                ///<param>name = "name"</param>
                ///<returns></returns>
                void setMaterialName(const EVString &name);
                ///<summary> Get the material used by this pass
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </summary>
                ///<param></param>
                ///<returns>EarthView::World::Graphic::CMaterialPtr</returns>
                const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                ///<summary> Set the first render queue to be rendered in this pass (inclusive)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERSCENE</summary>
                ///<param>name = "id"</param>
                ///<returns></returns>
                void setFirstRenderQueue(ev_uint8 id);
                ///<summary> Get the first render queue to be rendered in this pass (inclusive)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERSCENE</summary>
                ///<param></param>
                ///<returns></returns>
                ev_uint8 getFirstRenderQueue() const;
                ///<sumamry> Set the last render queue to be rendered in this pass (inclusive)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERSCENE
                ///</summary>
                ///<param>name ="id"</param>
                ///<returns></returns>
                void setLastRenderQueue(ev_uint8 id);
                ///<summary> Get the last render queue to be rendered in this pass (inclusive)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERSCENE
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                ev_uint8 getLastRenderQueue() const;
                ///<summary> Set the material scheme used by this pass.
                ///@remarks
                ///	Only applicable to passes that render the scene.
                ///	@see CTechnique::setScheme.
                ///</summary>
                ///<param>name = "schemeName"</param>
                ///<returns></returns>
                void setMaterialScheme(const EVString &schemeName);
                ///<summary> Get the material scheme used by this pass.
                ///@remarks
                ///	Only applicable to passes that render the scene.
                ///	@see CTechnique::setScheme.
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                const EVString &getMaterialScheme() const;

                ///<summary> Set the viewport clear buffers  (defaults to FBT_COLOUR|FBT_DEPTH)</summary>
                ///<param>name="val" is a combination of FBT_COLOUR, FBT_DEPTH, FBT_STENCIL.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR</param>
                ///<returns></returns>
                void setClearBuffers(ev_uint32 val);
                ///<summary> Get the viewport clear buffers.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                ev_uint32 getClearBuffers() const;
                ///<summary> Set the viewport clear colour (defaults to 0,0,0,0)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR
                ///</summary>
                ///<param>name="val"</param>
                ///<returns></returns>
                void setClearColour(EarthView::World::Graphic::CColourValue val);
                ///<summary> Get the viewport clear colour (defaults to 0,0,0,0)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                const EarthView::World::Graphic::CColourValue &getClearColour() const;
                ///<summary> Set the viewport clear depth (defaults to 1.0)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR
                ///</summary>
                ///<param>name="depth"</param>
                ///<returns></returns>
                void setClearDepth(Real depth);
                ///<summary> Get the viewport clear depth (defaults to 1.0)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                Real getClearDepth() const;
                ///<summary> Set the viewport clear stencil value (defaults to 0)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR
                ///</summary>
                ///<param>name ="value"</param>
                ///<returns></returns>
                void setClearStencil(ev_uint32 value);
                ///<summary> Get the viewport clear stencil value (defaults to 0)
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is CLEAR
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                ev_uint32 getClearStencil() const;
                ///<summary> Set stencil check on or off.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name = "value"</param>
                ///<returns></returns>
                void setStencilCheck(ev_bool value);
                ///<summary> Get stencil check enable.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                ev_bool getStencilCheck() const;
                ///<summary> Set stencil compare function.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name ="value"</param>
                ///<returns></returns>
                void setStencilFunc(EarthView::World::Graphic::CompareFunction value);

                ///<summary> Get stencil compare function.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CompareFunction getStencilFunc() const;

                ///<summary> Set stencil reference value.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name="value"</param>
                ///<returns></returns>
                void setStencilRefValue(ev_uint32 value);
                ///<summary> Get stencil reference value.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                ev_uint32 getStencilRefValue() const;
                ///<summary> Set stencil mask.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name = "value"</param>
                ///<returns></returns>
                void setStencilMask(ev_uint32 value);
                ///<summary> Get stencil mask.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param></param>
                ///<returns>stencil mask</returns>
                ev_uint32 getStencilMask() const;
                ///<summary> Set stencil fail operation.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name ="value"</param>
                ///<returns></returns>
                void setStencilFailOp(StencilOperation value);
                ///<summary> Get stencil fail operation.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                StencilOperation getStencilFailOp() const;
                ///<summary> Set stencil depth fail operation.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name ="value"</param>
                ///<returns></returns>
                void setStencilDepthFailOp(StencilOperation value);
                ///<summary> Get stencil depth fail operation.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                StencilOperation getStencilDepthFailOp() const;
                /// <summary>Set stencil pass operation.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name="value"</param>
                ///<returns></returns>
                void setStencilPassOp(StencilOperation value);
                ///<summary> Get stencil pass operation.
                /// @note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                StencilOperation getStencilPassOp() const;
                ///<summary> Set two sided stencil operation.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///</summary>
                ///<param>name="value"</param>
                ///<returns></returns>
                void setStencilTwoSidedOperation(ev_bool value);
                ///<summary> Get two sided stencil operation.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is STENCIL
                ///<param></param>
                ///<returns></returns>
                ev_bool getStencilTwoSidedOperation() const;
                ///<summary> Inputs (for material used for rendering the quad)</summary>
                class EV_GRAPHIC_DLL InputTex : public EarthView::World::Core::CBaseObject
                {
                public:
                    //// Name (local) of the input texture (empty == no input)
                    EVString name;
                    //// MRT surface index if applicable
                    ev_size_t mrtIndex;
                    InputTex() : name(""), mrtIndex(0) {}
                    InputTex(const EVString &strName, ev_size_t index)
                        : name(strName), mrtIndex(index) {}
                    InputTex(const EVString &strName)
                        : name(strName), mrtIndex(0) {}
                ev_private:
                    InputTex(EarthView::World::Core::CNameValuePairList *pList)
                        : name(pList && pList->Exist("strName") ? EVString((ev_char *)pList->GetAt("strName")) : "")
                        , mrtIndex(pList && pList->Exist("index") ? *(ev_size_t *)pList->GetAt("index") : 0)
                    {
                    }
                };
                ///<summary> Set an input local texture. An empty string clears the input.</summary>
                ///<param> name ="id" Input to set. Must be in 0..EV_MAX_TEXTURE_LAYERS-1</param>
                /// <param>name= "input" Which texture to bind to this input. An empty string clears the input.</param>
                /// <param> name ="mrtIndex" Which surface of an MRT to retrieve</param>
                /// <param>name ="note" applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </param>
                ///<returns></returns>
                void setInput(ev_size_t id, const EVString &input, ev_size_t mrtIndex);
                void setInput(ev_size_t id, const EVString &input);
                void setInput(ev_size_t id);

                ///<summary> Get the value of an input.</summary>
                ///<param>name=" id"Input to get. Must be in 0..EV_MAX_TEXTURE_LAYERS-1.</param>
                ///<returns></returns>
                const EarthView::World::Graphic::CCompositionPass::InputTex &getInput(ev_size_t id) const;

                ///<summary> Get the number of inputs used.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                ev_size_t getNumInputs() const;

                ///<summary> Clear all inputs.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                void clearAllInputs();

                ///<summary> Get parent object
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionTargetPass *getParent();
                ///<summary> Determine if this target pass is supported on the current rendering device. </summary>
                ///<param></param>
                ///<returns></returns>
                ev_bool _isSupported();
                ///<summary> Set quad normalised positions [-1;1]x[-1;1]
                ///    @note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD</summary>
                ///<param>name ="left"</param>
                ///<param>name ="top"</param>
                ///<param>name="right"</param>
                ///<param>name="bottom"</param>
                ///<returns></returns>
                void setQuadCorners(Real left, Real top, Real right, Real bottom);
                ///<summary> Get quad normalised positions [-1;1]x[-1;1]
                ///    @note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </summary>
                ///<param>name ="left"</param>
                ///<param>name ="top"</param>
                ///<param>name="right"</param>
                ///<param>name="bottom"</param>
                ///<returns></returns>
                ev_bool getQuadCorners(Real &left, Real &top, Real &right, Real &bottom) const;

                ///<summary> Sets the use of camera frustum far corners provided in the quad's normals
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </summary>
                ///<param>name="farCorners"</param>
                ///<param>name="farCornersViewSpace"</param>
                ///<returns></returns>
                void setQuadFarCorners(ev_bool farCorners, ev_bool farCornersViewSpace);
                ///<summary> Returns true if camera frustum far corners are provided in the quad.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                ev_bool getQuadFarCorners() const;
                ///<summary> Returns true if the far corners provided in the quad are in view space
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERQUAD </summary>
                ///<param></param>
                ///<returns></returns>
                ev_bool getQuadFarCornersViewSpace() const;
                ///<summary> Set the type name of this custom composition pass.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERCUSTOM
                ///	@see CCompositorManager::registerCustomCompositionPass
                ///</summary>
                ///<param>name ="customType"</param>
                ///<returns></returns>
                void setCustomType(const EVString &customType);
                ///<summary> Get the type name of this custom composition pass.
                ///	@note applies when EarthView::World::Graphic::CCompositionPass::PassType is RENDERCUSTOM
                ///	@see CCompositorManager::registerCustomCompositionPass
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                const EVString &getCustomType() const;
            private:
                //// Parent technique
                EarthView::World::Graphic::CCompositionTargetPass *mParent;
                //// Type of composition pass
                EarthView::World::Graphic::CCompositionPass::PassType mType;
                //// Identifier for this pass
                ev_uint32 mIdentifier;
                //// CMaterial used for rendering
                EarthView::World::Graphic::CMaterialPtr mMaterial;
                //// [first,last] render queue to render this pass (in case of PT_RENDERSCENE)
                ev_uint8 mFirstRenderQueue;
                ev_uint8 mLastRenderQueue;
                //// CMaterial scheme name
                EVString mMaterialScheme;
                //// Clear buffers (in case of PT_CLEAR)
                ev_uint32 mClearBuffers;
                //// Clear colour (in case of PT_CLEAR)
                EarthView::World::Graphic::CColourValue mClearColour;
                //// Clear depth (in case of PT_CLEAR)
                Real mClearDepth;
                //// Clear stencil value (in case of PT_CLEAR)
                ev_uint32 mClearStencil;
                //// Inputs (for material used for rendering the quad)
                //// An empty string signifies that no input is used
                EarthView::World::Graphic::CCompositionPass::InputTex mInputs[EV_MAX_TEXTURE_LAYERS];
                //// Stencil operation parameters
                ev_bool mStencilCheck;
                EarthView::World::Graphic::CompareFunction mStencilFunc;
                ev_uint32 mStencilRefValue;
                ev_uint32 mStencilMask;
                StencilOperation mStencilFailOp;
                StencilOperation mStencilDepthFailOp;
                StencilOperation mStencilPassOp;
                ev_bool mStencilTwoSidedOperation;
                //// true if quad should not cover whole screen
                ev_bool mQuadCornerModified;
                //// quad positions in normalised coordinates [-1;1]x[-1;1] (in case of PT_RENDERQUAD)
                Real mQuadLeft;
                Real mQuadTop;
                Real mQuadRight;
                Real mQuadBottom;
                ev_bool mQuadFarCorners, mQuadFarCornersViewSpace;
                ///The type name of the custom composition pass.
                EVString mCustomType;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

