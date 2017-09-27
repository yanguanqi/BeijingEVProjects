/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderablestring.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* node);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback)(_in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CRenderableCharProxy : public EarthView::World::Graphic::CRenderableChar
			{
			private:
				EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* m_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback;
				EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback* m_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback;
				EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback* m_EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback;
				EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CRenderableCharProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableChar(pList)
				{
					m_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool(EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode(EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool(EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool(EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr(EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique(EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getLights_LightList(EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool(EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue(EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject(EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener(EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener(EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32(EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual void onUpdateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback(queue, renderQueueId);
					}
					else
						return this->CRenderableChar::onUpdateRenderQueue(queue, renderQueueId);
				}
				virtual void onVisitRenderable(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CRenderableChar::onVisitRenderable(visitor, debugRenderables);
				}
				virtual void setDepthCheckEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CRenderableChar::setDepthCheckEnabled(enable);
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CRenderableChar::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CRenderableChar::postRender(sm, rsys);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CRenderableChar::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CRenderableChar::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_out EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CRenderableChar::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getLights();
				}
				virtual void onAttachedToNode(_in EarthView::World::Graphic::CNode* node)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback(node);
					}
					else
						return this->CRenderableChar::onAttachedToNode(node);
				}
				virtual void setProjOffsetEnable(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CRenderableChar::setProjOffsetEnable(enable);
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getTechnique();
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CRenderableChar::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CRenderableChar::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CRenderableChar::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderableChar::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CRenderableChar::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CRenderableChar::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CRenderableChar::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CRenderableChar::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CRenderableChar::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CRenderableChar::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableCharProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId )
			{
				EarthView::World::Graphic::CRenderableChar* ptrNativeObject = (EarthView::World::Graphic::CRenderableChar*) pObjectXXXX;
				if (dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableChar::onUpdateRenderQueue(queue, renderQueueId);
				else
					ptrNativeObject->onUpdateRenderQueue(queue, renderQueueId);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableChar_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId )
			{
				EarthView::World::Graphic::CRenderableChar* ptrNativeObject = (EarthView::World::Graphic::CRenderableChar*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableChar::onUpdateRenderQueue(queue, renderQueueId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CRenderableChar* ptrNativeObject = (EarthView::World::Graphic::CRenderableChar*) pObjectXXXX;
				if (dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableChar::onVisitRenderable(visitor, debugRenderables);
				else
					ptrNativeObject->onVisitRenderable(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableChar_onVisitRenderable_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CRenderableChar* ptrNativeObject = (EarthView::World::Graphic::CRenderableChar*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableChar::onVisitRenderable(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CRenderableChar*  _stdcall EarthView_World_Graphic_CRenderableChar_getNext_CRenderableChar(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableChar* ptrNativeObject = (EarthView::World::Graphic::CRenderableChar*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderableChar* objXXXX = ptrNativeObject->getNext();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableChar* ptrNativeObject = (EarthView::World::Graphic::CRenderableChar*) pObjectXXXX;
				if (dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableChar::setDepthCheckEnabled(enable);
				else
					ptrNativeObject->setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableChar_setDepthCheckEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableChar* ptrNativeObject = (EarthView::World::Graphic::CRenderableChar*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableChar::setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_onAttachedToNode_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_setProjOffsetEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getLights_LightList_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CRenderableCharProxy* ptr = dynamic_cast<CRenderableCharProxy*>((EarthView::World::Graphic::CRenderableChar*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableChar_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* node);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback)(_in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CRenderableStringProxy : public EarthView::World::Graphic::CRenderableString
			{
			private:
				EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* m_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback;
				EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback* m_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback;
				EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback* m_EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback;
				EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CRenderableStringProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableString(pList)
				{
					m_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool(EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode(EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool(EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool(EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr(EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique(EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getLights_LightList(EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool(EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue(EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject(EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener(EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener(EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32(EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual void onUpdateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId)
				{
					if(m_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback(queue, renderQueueId);
					}
					else
						return this->CRenderableString::onUpdateRenderQueue(queue, renderQueueId);
				}
				virtual void onVisitRenderable(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CRenderableString::onVisitRenderable(visitor, debugRenderables);
				}
				virtual void onAttachedToNode(_in EarthView::World::Graphic::CNode* node)
				{
					if(m_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback(node);
					}
					else
						return this->CRenderableString::onAttachedToNode(node);
				}
				virtual void setProjOffsetEnable(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CRenderableString::setProjOffsetEnable(enable);
				}
				virtual void setDepthCheckEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CRenderableString::setDepthCheckEnabled(enable);
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CRenderableString::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CRenderableString::postRender(sm, rsys);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CRenderableString::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CRenderableString::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_out EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CRenderableString::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getLights();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getTechnique();
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CRenderableString::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CRenderableString::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CRenderableString::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderableString::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CRenderableString::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CRenderableString::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CRenderableString::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CRenderableString::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CRenderableString::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CRenderableString::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableStringProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				if (dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableString::onUpdateRenderQueue(queue, renderQueueId);
				else
					ptrNativeObject->onUpdateRenderQueue(queue, renderQueueId);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableString::onUpdateRenderQueue(queue, renderQueueId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				if (dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableString::onVisitRenderable(visitor, debugRenderables);
				else
					ptrNativeObject->onVisitRenderable(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_onVisitRenderable_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableString::onVisitRenderable(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				if (dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableString::onAttachedToNode(node);
				else
					ptrNativeObject->onAttachedToNode(node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_onAttachedToNode_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableString::onAttachedToNode(node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				if (dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableString::setProjOffsetEnable(enable);
				else
					ptrNativeObject->setProjOffsetEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_setProjOffsetEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableString::setProjOffsetEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				if (dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableString::setDepthCheckEnabled(enable);
				else
					ptrNativeObject->setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_setDepthCheckEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableString::setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableString_setText_void_EarthView_World_Core_CUnicodeString(void *pObjectXXXX, _in const ev_wchar* wstr )
			{
				EarthView::World::Core::ev_wstring wstr1 = wstr;
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				ptrNativeObject->setText(wstr1);
			}
			extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Graphic_CRenderableString_getText_EarthView_World_Core_CUnicodeString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				const EarthView::World::Core::CUnicodeString& objXXXX = ptrNativeObject->getText();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderableString_getMaterials_CMaterialPtrList(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderableString* ptrNativeObject = (EarthView::World::Graphic::CRenderableString*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtrList objXXXX = ptrNativeObject->getMaterials();
				EarthView::World::Graphic::CMaterialPtrList *pXXXX = new EarthView::World::Graphic::CMaterialPtrList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getLights_LightList_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CRenderableStringProxy* ptr = dynamic_cast<CRenderableStringProxy*>((EarthView::World::Graphic::CRenderableString*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableString_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
		}
	}
}
