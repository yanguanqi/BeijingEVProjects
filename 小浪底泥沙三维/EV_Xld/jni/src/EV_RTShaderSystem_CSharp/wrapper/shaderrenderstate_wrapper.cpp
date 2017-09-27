/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderrenderstate.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_addTemplateSubRenderState_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState )
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					ptrNativeObject->addTemplateSubRenderState(subRenderState);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_removeTemplateSubRenderState_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState )
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					ptrNativeObject->removeTemplateSubRenderState(subRenderState);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_getTemplateSubRenderStateList_SubRenderStateList(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					const EarthView::World::Graphic::RTShaderSystem::SubRenderStateList& objXXXX = ptrNativeObject->getTemplateSubRenderStateList();
					const EarthView::World::Graphic::RTShaderSystem::SubRenderStateList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_setLightCount_void_ev_int32(void *pObjectXXXX, _in const ev_int32* lightCount )
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					ptrNativeObject->setLightCount(lightCount);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_getLightCount_void_ev_int32(void *pObjectXXXX, _in ev_int32* lightCount )
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					ptrNativeObject->getLightCount(lightCount);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_setLightCountAutoUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool autoUpdate )
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					ptrNativeObject->setLightCountAutoUpdate(autoUpdate);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CRenderState_getLightCountAutoUpdate_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLightCountAutoUpdate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_push_back_void_CRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CRenderState* t )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_front_CRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_back_CRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_insert_void_ev_uint32_CRenderState(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::RTShaderSystem::CRenderState*& t )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_OperatorIndex_CRenderState_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_at_CRenderState_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_resize_void_ev_size_t_CRenderState(void *pObjectXXXX, _in ev_uint64  newSize, _in EarthView::World::Graphic::RTShaderSystem::CRenderState* t )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->resize(newSize, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_RenderStateList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::RenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::RenderStateList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTargetRenderState_link_void_CRenderState_CPass_CPass(void *pObjectXXXX, _in const void* other, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CTargetRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTargetRenderState*) pObjectXXXX;
					ptrNativeObject->link(*(EarthView::World::Graphic::RTShaderSystem::CRenderState*)other, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CTargetRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CTargetRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CTargetRenderState*) pObjectXXXX;
					ptrNativeObject->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
			}
		}
	}
}
