/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderable.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderable_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CRenderableProxy : public EarthView::World::Graphic::CRenderable
			{
			private:
				EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CRenderable_getLights_LightList_Callback* m_EarthView_World_Graphic_CRenderable_getLights_LightList_Callback;
				EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderable(pList)
				{
					m_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr(EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique(EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getLights_LightList(EarthView_World_Graphic_CRenderable_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool(EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue(EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject(EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener(EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener(EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32(EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getMaterial();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getTechnique();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CRenderable::getRenderOperation(op);
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CRenderable::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CRenderable::postRender(sm, rsys);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CRenderable::getWorldTransforms(xform);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getNumWorldTransforms();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CRenderable::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CRenderable_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getLights();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CRenderable::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CRenderable::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CRenderable::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderable::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CRenderable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CRenderable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CRenderable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CRenderable::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CRenderable::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CRenderable::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableProxy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback)(_in EarthView::World::Graphic::CRenderable* renderable);
			class CRenderableListenerProxy : public EarthView::World::Graphic::CRenderable::CRenderableListener
			{
			private:
				EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback* m_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback;
				EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback* m_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback;
				EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback* m_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback;
			public:
				CRenderableListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableListener(pList)
				{
					m_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable(EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback = pCallback;
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable)
				{
					if(m_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback(sm, rsys, renderable);
						return returnValue;
					}
					else
						return this->CRenderableListener::preRender(sm, rsys, renderable);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable)
				{
					if(m_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback(sm, rsys, renderable);
					}
					else
						return this->CRenderableListener::postRender(sm, rsys, renderable);
				}
				virtual void destroyed(_in EarthView::World::Graphic::CRenderable* renderable)
				{
					if(m_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback(renderable);
					}
					else
						return this->CRenderableListener::destroyed(renderable);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderableListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX;
				if (dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderable::CRenderableListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::CRenderableListener::preRender(sm, rsys, renderable);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->preRender(sm, rsys, renderable);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback )
			{
				CRenderableListenerProxy* ptr = dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_preRender_ev_bool_CSceneManager_CRenderSystem_CRenderable_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::CRenderableListener::preRender(sm, rsys, renderable);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX;
				if (dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderable::CRenderableListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::CRenderableListener::postRender(sm, rsys, renderable);
				else
					ptrNativeObject->postRender(sm, rsys, renderable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_Callback* pCallback )
			{
				CRenderableListenerProxy* ptr = dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_postRender_void_CSceneManager_CRenderSystem_CRenderable_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::CRenderableListener::postRender(sm, rsys, renderable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX;
				if (dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderable::CRenderableListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::CRenderableListener::destroyed(renderable);
				else
					ptrNativeObject->destroyed(renderable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_Callback* pCallback )
			{
				CRenderableListenerProxy* ptr = dynamic_cast<CRenderableListenerProxy*>((EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CRenderableListener_destroyed_void_CRenderable_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* renderable )
			{
				EarthView::World::Graphic::CRenderable::CRenderableListener* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CRenderableListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::CRenderableListener::destroyed(renderable);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getMaterial();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderable_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CRenderable_getTechnique_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getTechnique();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getTechnique();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CRenderable_getTechnique_CTechnique_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::preRender(sm, rsys);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->preRender(sm, rsys);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::preRender(sm, rsys);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::postRender(sm, rsys);
				else
					ptrNativeObject->postRender(sm, rsys);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_postRender_void_CSceneManager_CRenderSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::postRender(sm, rsys);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getNumWorldTransforms();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumWorldTransforms();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderable_getNumWorldTransforms_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getNumWorldTransforms();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setUseIdentityProjection_void_ev_bool(void *pObjectXXXX, _in ev_bool useIdentityProjection )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->setUseIdentityProjection(useIdentityProjection);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_getUseIdentityProjection_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseIdentityProjection();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setCustomProjection_void_ev_bool(void *pObjectXXXX, _in ev_bool customProjection )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->setCustomProjection(customProjection);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_getCustomProjection_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getCustomProjection();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setUseIdentityView_void_ev_bool(void *pObjectXXXX, _in ev_bool useIdentityView )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->setUseIdentityView(useIdentityView);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_getUseIdentityView_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseIdentityView();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderable_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderable_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getLights();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getLights_LightList_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderable_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getCastsShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCastsShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_getCastsShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getCastsShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setCustomParameter_void_ev_size_t_CVector4(void *pObjectXXXX, _in ev_uint64  index, _in const void* value )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->setCustomParameter(index, *(EarthView::World::Spatial::Math::CVector4*)value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_removeCustomParameter_void_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->removeCustomParameter(index);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CRenderable_hasCustomParameter_bool_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->hasCustomParameter(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderable_getCustomParameter_CVector4_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->getCustomParameter(index);
				const EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(void *pObjectXXXX, _in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::_updateCustomGpuParameter(*(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)constantEntry, params);
				else
					ptrNativeObject->_updateCustomGpuParameter(*(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)constantEntry, params);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_NoVirtual(void *pObjectXXXX, _in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::_updateCustomGpuParameter(*(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*)constantEntry, params);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool(void *pObjectXXXX, _in ev_bool override )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::setPolygonModeOverrideable(override);
				else
					ptrNativeObject->setPolygonModeOverrideable(override);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setPolygonModeOverrideable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool override )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::setPolygonModeOverrideable(override);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getPolygonModeOverrideable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getPolygonModeOverrideable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_getPolygonModeOverrideable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getPolygonModeOverrideable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue(void *pObjectXXXX, _in const void* ambient )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::setCustomAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
				else
					ptrNativeObject->setCustomAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setCustomAmbient_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* ambient )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::setCustomAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getCustomAmbient();
					const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getCustomAmbient();
					const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderable_getCustomAmbient_CColourValue_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getCustomAmbient();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getCustomAmbientEnabled();
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->getCustomAmbientEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CRenderable_getCustomAmbientEnabled_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getCustomAmbientEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::setCustomAmbientEnabled(enabled);
				else
					ptrNativeObject->setCustomAmbientEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setCustomAmbientEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::setCustomAmbientEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getMovableObject();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getMovableObject();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CRenderable_getMovableObject_CMovableObject_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getMovableObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::addListener(ref_listener);
				else
					ptrNativeObject->addListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_addListener_void_CRenderableListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::addListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderableListener* listener )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::removeListener(listener);
				else
					ptrNativeObject->removeListener(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_removeListener_void_CRenderableListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderableListener* listener )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::removeListener(listener);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderableListener* listener )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::existListener(listener);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->existListener(listener);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_existListener_ev_bool_CRenderableListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderableListener* listener )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::existListener(listener);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getListenerCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getListenerCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderable_getListenerCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getListenerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderable::CRenderableListener*  _stdcall EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderable::CRenderableListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getListener(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderable::CRenderableListener* objXXXX = ptrNativeObject->getListener(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderable::CRenderableListener*  _stdcall EarthView_World_Graphic_CRenderable_getListener_CRenderableListener_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CRenderable::CRenderableListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getListener(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderable_getUserObjectBindings_CUserObjectBindings(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CUserObjectBindings& objXXXX = ptrNativeObject->getUserObjectBindings();
				EarthView::World::Graphic::CUserObjectBindings *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in ev_uint16 lodIndex, _in ev_bool isDebug);
			class CVisitorProxy : public EarthView::World::Graphic::CRenderable::CVisitor
			{
			private:
				EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback* m_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback;
			public:
				CVisitorProxy(EarthView::World::Core::CNameValuePairList *pList) : CVisitor(pList)
				{
					m_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool(EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback = pCallback;
				}
				virtual void visit(_in EarthView::World::Graphic::CRenderable* rend, _in ev_uint16 lodIndex, _in ev_bool isDebug)
				{
					if(m_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback(rend, lodIndex, isDebug);
					}
					else
						return this->CVisitor::visit(rend, lodIndex, isDebug);
				}
			};
			REGISTER_FACTORY_CLASS(CVisitorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in ev_uint16 lodIndex, _in ev_bool isDebug )
			{
				EarthView::World::Graphic::CRenderable::CVisitor* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CVisitor*) pObjectXXXX;
				if (dynamic_cast<CVisitorProxy*>((EarthView::World::Graphic::CRenderable::CVisitor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::CVisitor::visit(rend, lodIndex, isDebug);
				else
					ptrNativeObject->visit(rend, lodIndex, isDebug);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_Callback* pCallback )
			{
				CVisitorProxy* ptr = dynamic_cast<CVisitorProxy*>((EarthView::World::Graphic::CRenderable::CVisitor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CVisitor_visit_void_CRenderable_ev_uint16_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in ev_uint16 lodIndex, _in ev_bool isDebug )
			{
				EarthView::World::Graphic::CRenderable::CVisitor* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CVisitor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::CVisitor::visit(rend, lodIndex, isDebug);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderable::CRenderSystemData*  _stdcall EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderable::CRenderSystemData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getRenderSystemData();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderable::CRenderSystemData* objXXXX = ptrNativeObject->getRenderSystemData();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderable::CRenderSystemData*  _stdcall EarthView_World_Graphic_CRenderable_getRenderSystemData_CRenderSystemData_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				EarthView::World::Graphic::CRenderable::CRenderSystemData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderable::getRenderSystemData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				if (dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderable::setRenderSystemData(ref_val);
				else
					ptrNativeObject->setRenderSystemData(ref_val);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CRenderableProxy* ptr = dynamic_cast<CRenderableProxy*>((EarthView::World::Graphic::CRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_setRenderSystemData_void_CRenderSystemData_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val )
			{
				const EarthView::World::Graphic::CRenderable* ptrNativeObject = (EarthView::World::Graphic::CRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderable::setRenderSystemData(ref_val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_push_ev_bool_ev_size_t_CVector4(void *pObjectXXXX, _in const ev_uint64 & key, _in const void* val )
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push((ev_size_t&)key, *(EarthView::World::Spatial::Math::CVector4*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_exist_ev_bool_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist((ev_size_t&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_OperatorIndex_CVector4_ev_size_t(void *pObjXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap& objYYYY = *(EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4& objXXXX = objYYYY[key];
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_get_CVector4_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->get((ev_size_t&)key);
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_erase_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64 & key )
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjectXXXX;
				ptrNativeObject->erase((ev_size_t&)key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable::CustomParameterMap* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderable::CustomParameterMap* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderable_CustomParameterMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderable::CustomParameterMap* ptrNativeObject = (EarthView::World::Graphic::CRenderable::CustomParameterMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
		}
	}
}
