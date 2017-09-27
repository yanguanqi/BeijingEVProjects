/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderablefont.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* node);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback)(_in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CRenderableFontProxy : public EarthView::World::Graphic::CRenderableFont
			{
			private:
				EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* m_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback;
				EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback* m_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback;
				EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback* m_EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback;
				EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CRenderableFontProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableFont(pList)
				{
					m_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool(EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode(EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool(EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool(EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr(EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique(EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getLights_LightList(EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool(EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue(EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject(EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener(EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener(EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32(EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CRenderableFont::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CRenderableFont::postRender(sm, rsys);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CRenderableFont::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CRenderableFont::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_out EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CRenderableFont::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getLights();
				}
				virtual void onUpdateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback(queue, renderQueueId);
					}
					else
						return this->CRenderableFont::onUpdateRenderQueue(queue, renderQueueId);
				}
				virtual void onVisitRenderable(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CRenderableFont::onVisitRenderable(visitor, debugRenderables);
				}
				virtual void onAttachedToNode(_in EarthView::World::Graphic::CNode* node)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback(node);
					}
					else
						return this->CRenderableFont::onAttachedToNode(node);
				}
				virtual void setProjOffsetEnable(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CRenderableFont::setProjOffsetEnable(enable);
				}
				virtual void setDepthCheckEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CRenderableFont::setDepthCheckEnabled(enable);
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getTechnique();
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CRenderableFont::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CRenderableFont::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CRenderableFont::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderableFont::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CRenderableFont::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CRenderableFont::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CRenderableFont::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CRenderableFont::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CRenderableFont::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CRenderableFont::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableFontProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::preRender(sm, rsys);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->preRender(sm, rsys);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderableFont_preRender_ev_bool_CSceneManager_CRenderSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::preRender(sm, rsys);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::postRender(sm, rsys);
				else
					ptrNativeObject->postRender(sm, rsys);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_postRender_void_CSceneManager_CRenderSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::postRender(sm, rsys);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderableFont_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderableFont_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _out EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _out EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderableFont_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getLights_LightList_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderableFont_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderableFont::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::onUpdateRenderQueue(queue, renderQueueId);
				else
					ptrNativeObject->onUpdateRenderQueue(queue, renderQueueId);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_onUpdateRenderQueue_void_CRenderQueue_ev_uint8_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _in ev_uint8 renderQueueId )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::onUpdateRenderQueue(queue, renderQueueId);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::onVisitRenderable(visitor, debugRenderables);
				else
					ptrNativeObject->onVisitRenderable(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_onVisitRenderable_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::onVisitRenderable(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::onAttachedToNode(node);
				else
					ptrNativeObject->onAttachedToNode(node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_onAttachedToNode_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::onAttachedToNode(node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_setProjMatrixOffset_void_Real(void *pObjectXXXX, _in Real val )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->setProjMatrixOffset(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_setProjOffsetMaxAngle_void_ev_real32(void *pObjectXXXX, _in ev_real32 val )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->setProjOffsetMaxAngle(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_refresh_void_CTextureTextStyle_CVector2_CAxisAlignedBox(void *pObjectXXXX, _in const EarthView::World::Graphic::CTextureTextStyle* ref_style, _inout void* pen, _inout void* aabb )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->refresh(ref_style, *(EarthView::World::Spatial::Math::CVector2*)pen, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_forceRefresh_void_CTextureTextStyle_CVector2_CAxisAlignedBox(void *pObjectXXXX, _in const EarthView::World::Graphic::CTextureTextStyle* ref_style, _inout void* pen, _inout void* aabb )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->forceRefresh(ref_style, *(EarthView::World::Spatial::Math::CVector2*)pen, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_bindWorldMaxtrix_void_CMatrix4(void *pObjectXXXX, _in const EarthView::World::Spatial::Math::CMatrix4* mx4 )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->bindWorldMaxtrix(mx4);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_updateRenderStatus_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool geometryOutOfDate, _in ev_bool colorOutOfDate )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->updateRenderStatus(geometryOutOfDate, colorOutOfDate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::setProjOffsetEnable(enable);
				else
					ptrNativeObject->setProjOffsetEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_setProjOffsetEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::setProjOffsetEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderableFont_getProjOffsetEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getProjOffsetEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				if (dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderableFont::setDepthCheckEnabled(enable);
				else
					ptrNativeObject->setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderableFont_setDepthCheckEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderableFont::setDepthCheckEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderableFont_getDepthCheckEnabled_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderableFont* ptrNativeObject = (EarthView::World::Graphic::CRenderableFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDepthCheckEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CRenderableFontProxy* ptr = dynamic_cast<CRenderableFontProxy*>((EarthView::World::Graphic::CRenderableFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderableFont_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
		}
	}
}
