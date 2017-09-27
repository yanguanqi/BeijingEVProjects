/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/shadowcaster.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback)(_in const void* indexBuffer);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CShadowRenderableProxy : public EarthView::World::Graphic::CShadowRenderable
			{
			private:
				EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback* m_EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback;
				EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CShadowRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadowRenderable(pList)
				{
					m_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool(EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr(EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr(EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique(EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getLights_LightList(EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool(EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue(EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject(EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener(EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener(EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32(EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CShadowRenderable::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CShadowRenderable::getWorldTransforms(xform);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* pCamera) const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback(pCamera);
						return returnValue;
					}
					else
						return this->CShadowRenderable::getSquaredViewDepth(pCamera);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getLights();
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::isVisible();
				}
				virtual void rebindIndexBuffer(_in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback(&indexBuffer);
					}
					else
						return this->CShadowRenderable::rebindIndexBuffer(indexBuffer);
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getTechnique();
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CShadowRenderable::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CShadowRenderable::postRender(sm, rsys);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CShadowRenderable::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CShadowRenderable::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CShadowRenderable::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CShadowRenderable::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CShadowRenderable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CShadowRenderable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CShadowRenderable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CShadowRenderable::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CShadowRenderable::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CShadowRenderable::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CShadowRenderableProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowRenderable_setMaterial_void_CMaterialPtr(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				ptrNativeObject->setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				if (dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getMaterial();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowRenderable_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				if (dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowRenderable_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderOperation*  _stdcall EarthView_World_Graphic_CShadowRenderable_getRenderOperationForUpdate_CRenderOperation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation* objXXXX = ptrNativeObject->getRenderOperationForUpdate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				if (dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* pCamera )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				if (dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getSquaredViewDepth(pCamera);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(pCamera);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CShadowRenderable_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* pCamera )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getSquaredViewDepth(pCamera);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowRenderable_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				if (dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getLights();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getLights_LightList_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowRenderable_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowRenderable_isLightCapSeparate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLightCapSeparate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowRenderable_getLightCapRenderable_CShadowRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->getLightCapRenderable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				if (dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowRenderable_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr(void *pObjectXXXX, _in const void* indexBuffer )
			{
				EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				if (dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::rebindIndexBuffer(*(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)indexBuffer);
				else
					ptrNativeObject->rebindIndexBuffer(*(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)indexBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowRenderable_rebindIndexBuffer_void_CHardwareIndexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* indexBuffer )
			{
				EarthView::World::Graphic::CShadowRenderable* ptrNativeObject = (EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowRenderable::rebindIndexBuffer(*(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)indexBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CShadowRenderableProxy* ptr = dynamic_cast<CShadowRenderableProxy*>((EarthView::World::Graphic::CShadowRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowRenderable_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CShadowCasterProxy : public EarthView::World::Graphic::CShadowCaster
			{
			private:
				EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CShadowCasterProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadowCaster(pList)
				{
					m_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool(EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData(EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool(EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CShadowCaster::getCastShadows();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CShadowCaster::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CShadowCaster::hasEdgeList();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CShadowCaster::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CShadowCaster::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CShadowCaster::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CShadowCaster::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
						return returnValue;
					}
					else
						return this->CShadowCaster::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance)
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
						return returnValue;
					}
					else
						return this->CShadowCaster::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CShadowCaster::getPointExtrusionDistance(l);
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CShadowCaster::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CShadowCaster::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CShadowCaster::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CShadowCasterProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CShadowCaster_getShadowFarDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getShadowFarDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CShadowCaster_getShadowFarDistanceSquared_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getShadowFarDistanceSquared();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_setShadowFarDistance_void_Real(void *pObjectXXXX, _in Real distance )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				ptrNativeObject->setShadowFarDistance(distance);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getCastShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCastShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowCaster_getCastShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getCastShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getEdgeList();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->getEdgeList();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CShadowCaster_getEdgeList_CEdgeData_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getEdgeList();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::hasEdgeList();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasEdgeList();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowCaster_hasEdgeList_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::hasEdgeList();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool(void *pObjectXXXX, _in ev_bool derive )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getWorldBoundingBox(derive);
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getWorldBoundingBox(derive);
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool derive )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getWorldBoundingBox(derive);
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getWorldBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getWorldBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowCaster_getWorldBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getWorldBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getLightCapBounds();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getLightCapBounds();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CShadowCaster_getLightCapBounds_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getLightCapBounds();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real(void *pObjectXXXX, _in const void* light, _in Real dirLightExtrusionDist )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getDarkCapBounds(*(EarthView::World::Graphic::CLight*)light, dirLightExtrusionDist);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getDarkCapBounds(*(EarthView::World::Graphic::CLight*)light, dirLightExtrusionDist);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowCaster_getDarkCapBounds_CAxisAlignedBox_CLight_Real_NoVirtual(void *pObjectXXXX, _in const void* light, _in Real dirLightExtrusionDist )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getDarkCapBounds(*(EarthView::World::Graphic::CLight*)light, dirLightExtrusionDist);
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_push_back_void_CShadowRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CShadowRenderable*& ref_t )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_front_CShadowRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_back_CShadowRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_insert_void_ev_uint32_CShadowRenderable(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CShadowRenderable*& ref_t )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_OperatorIndex_CShadowRenderable_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& objYYYY = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_at_CShadowRenderable_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableList* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableListIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableListIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableListIterator_getCurrent_CShadowRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableListIterator_next_CShadowRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableListIterator_getBegin_CShadowRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CShadowRenderable*  _stdcall EarthView_World_Graphic_CShadowCaster_ShadowRenderableListIterator_getEnd_CShadowRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) pObjectXXXX;
				EarthView::World::Graphic::CShadowRenderable* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_NoVirtual(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance, flags);
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
					EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CShadowCaster_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_NoVirtual(void *pObjectXXXX, _in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getShadowVolumeRenderableIterator((EarthView::World::Graphic::ShadowTechnique)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDistance);
				EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator *pXXXX = new EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_extrudeVertices_void_CHardwareVertexBufferSharedPtr_ev_size_t_CVector4_Real(_in const void* vertexBuffer, _in ev_uint64  originalVertexCount, _in const void* lightPos, _in Real extrudeDist )
			{
				EarthView::World::Graphic::CShadowCaster::extrudeVertices(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)vertexBuffer, originalVertexCount, *(EarthView::World::Spatial::Math::CVector4*)lightPos, extrudeDist);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight(void *pObjectXXXX, _in const EarthView::World::Graphic::CLight* l )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getPointExtrusionDistance(l);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getPointExtrusionDistance(l);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CShadowCaster_getPointExtrusionDistance_Real_CLight_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CLight* l )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CShadowCaster::getPointExtrusionDistance(l);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4(void *pObjectXXXX, _in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowCaster::updateEdgeListLightFacing(edgeData, *(EarthView::World::Spatial::Math::CVector4*)lightPos);
				else
					ptrNativeObject->updateEdgeListLightFacing(edgeData, *(EarthView::World::Spatial::Math::CVector4*)lightPos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_updateEdgeListLightFacing_void_CEdgeData_CVector4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowCaster::updateEdgeListLightFacing(edgeData, *(EarthView::World::Spatial::Math::CVector4*)lightPos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(void *pObjectXXXX, _in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowCaster::generateShadowVolume(edgeData, *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)indexBuffer, light, *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*)shadowRenderables, flags);
				else
					ptrNativeObject->generateShadowVolume(edgeData, *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)indexBuffer, light, *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*)shadowRenderables, flags);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowCaster::generateShadowVolume(edgeData, *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)indexBuffer, light, *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableList*)shadowRenderables, flags);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(void *pObjectXXXX, _inout void* box, _in const void* lightPos, _in Real extrudeDist )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				if (dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CShadowCaster::extrudeBounds(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, *(EarthView::World::Spatial::Math::CVector4*)lightPos, extrudeDist);
				else
					ptrNativeObject->extrudeBounds(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, *(EarthView::World::Spatial::Math::CVector4*)lightPos, extrudeDist);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CShadowCasterProxy* ptr = dynamic_cast<CShadowCasterProxy*>((EarthView::World::Graphic::CShadowCaster*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CShadowCaster_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_NoVirtual(void *pObjectXXXX, _inout void* box, _in const void* lightPos, _in Real extrudeDist )
			{
				const EarthView::World::Graphic::CShadowCaster* ptrNativeObject = (EarthView::World::Graphic::CShadowCaster*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CShadowCaster::extrudeBounds(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, *(EarthView::World::Spatial::Math::CVector4*)lightPos, extrudeDist);
			}
		}
	}
}
