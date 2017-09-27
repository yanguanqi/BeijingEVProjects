/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particlesystemrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_push_back_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle*& ref_t )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_push_front_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle*& ref_t )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticle*  _stdcall EarthView_World_Graphic_ParticleList_front_CParticle(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				EarthView::World::Graphic::CParticle* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticle*  _stdcall EarthView_World_Graphic_ParticleList_back_CParticle(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				EarthView::World::Graphic::CParticle* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticle*  _stdcall EarthView_World_Graphic_ParticleList_at_CParticle_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				EarthView::World::Graphic::CParticle* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_insert_void_ev_uint32_CParticle(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CParticle*& ref_t )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ParticleList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ParticleList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ParticleList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ParticleList* ptrNativeObject = (EarthView::World::Graphic::ParticleList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue, _inout void* currentParticles, _in ev_bool cullIndividually);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback)(_inout void* mat);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback)(_in ev_uint64  quota);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback)(_in Real width, _in Real height);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* particle);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* particle);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback)(_inout void* currentParticles);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback)(_inout void* currentParticles);
			typedef EarthView::World::Graphic::CParticleVisualData*  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback)(_in EarthView::World::Graphic::CParticleVisualData* vis);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback)(_in ev_bool keepLocal);
			typedef int  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CParticleSystemRendererProxy : public EarthView::World::Graphic::CParticleSystemRenderer
			{
			private:
				EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback;
			public:
				CParticleSystemRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemRenderer(pList)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString(EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr(EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode(EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void(EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void(EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t(EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real(EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle(EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle(EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList(EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList(EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData(EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData(EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool(EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode(EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor(EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString(EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemRenderer::getType();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue, _inout EarthView::World::Graphic::ParticleList& currentParticles, _in ev_bool cullIndividually)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback(queue, &currentParticles, cullIndividually);
					}
					else
						return this->CParticleSystemRenderer::_updateRenderQueue(queue, currentParticles, cullIndividually);
				}
				virtual void _setMaterial(_inout EarthView::World::Graphic::CMaterialPtr& mat)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback(&mat);
					}
					else
						return this->CParticleSystemRenderer::_setMaterial(mat);
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* ref_cam)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback(ref_cam);
					}
					else
						return this->CParticleSystemRenderer::_notifyCurrentCamera(ref_cam);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CParticleSystemRenderer::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CParticleSystemRenderer::_notifyAttached(ref_parent);
				}
				virtual void _notifyParticleRotated()
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback();
					}
					else
						return this->CParticleSystemRenderer::_notifyParticleRotated();
				}
				virtual void _notifyParticleResized()
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback();
					}
					else
						return this->CParticleSystemRenderer::_notifyParticleResized();
				}
				virtual void _notifyParticleQuota(_in ev_size_t quota)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback(quota);
					}
					else
						return this->CParticleSystemRenderer::_notifyParticleQuota(quota);
				}
				virtual void _notifyDefaultDimensions(_in Real width, _in Real height)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback(width, height);
					}
					else
						return this->CParticleSystemRenderer::_notifyDefaultDimensions(width, height);
				}
				virtual void _notifyParticleEmitted(_in EarthView::World::Graphic::CParticle* particle)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback(particle);
					}
					else
						return this->CParticleSystemRenderer::_notifyParticleEmitted(particle);
				}
				virtual void _notifyParticleExpired(_in EarthView::World::Graphic::CParticle* particle)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback(particle);
					}
					else
						return this->CParticleSystemRenderer::_notifyParticleExpired(particle);
				}
				virtual void _notifyParticleMoved(_inout EarthView::World::Graphic::ParticleList& currentParticles)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback(&currentParticles);
					}
					else
						return this->CParticleSystemRenderer::_notifyParticleMoved(currentParticles);
				}
				virtual void _notifyParticleCleared(_inout EarthView::World::Graphic::ParticleList& currentParticles)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback(&currentParticles);
					}
					else
						return this->CParticleSystemRenderer::_notifyParticleCleared(currentParticles);
				}
				virtual EarthView::World::Graphic::CParticleVisualData* _createVisualData()
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CParticleVisualData* returnValue = m_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemRenderer::_createVisualData();
				}
				virtual void _destroyVisualData(_in EarthView::World::Graphic::CParticleVisualData* vis)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback(vis);
					}
					else
						return this->CParticleSystemRenderer::_destroyVisualData(vis);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CParticleSystemRenderer::setRenderQueueGroup(queueID);
				}
				virtual void setKeepParticlesInLocalSpace(_in ev_bool keepLocal)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback(keepLocal);
					}
					else
						return this->CParticleSystemRenderer::setKeepParticlesInLocalSpace(keepLocal);
				}
				virtual EarthView::World::Graphic::SortMode _getSortMode() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SortMode returnValue = (EarthView::World::Graphic::SortMode)m_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemRenderer::_getSortMode();
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CParticleSystemRenderer::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CParticleSystemRenderer::visitRenderables(visitor);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CParticleSystemRenderer::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CParticleSystemRenderer::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CParticleSystemRenderer::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CParticleSystemRenderer::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CParticleSystemRenderer::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CParticleSystemRendererProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _inout void* currentParticles, _in ev_bool cullIndividually )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_updateRenderQueue(queue, *(EarthView::World::Graphic::ParticleList*)currentParticles, cullIndividually);
				else
					ptrNativeObject->_updateRenderQueue(queue, *(EarthView::World::Graphic::ParticleList*)currentParticles, cullIndividually);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _inout void* currentParticles, _in ev_bool cullIndividually )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_updateRenderQueue(queue, *(EarthView::World::Graphic::ParticleList*)currentParticles, cullIndividually);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr(void *pObjectXXXX, _inout void* mat )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
				else
					ptrNativeObject->_setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__setMaterial_void_CMaterialPtr_NoVirtual(void *pObjectXXXX, _inout void* mat )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyCurrentCamera(ref_cam);
				else
					ptrNativeObject->_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyAttached(ref_parent, isTagPoint);
				else
					ptrNativeObject->_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyAttached(ref_parent);
				else
					ptrNativeObject->_notifyAttached(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyAttached_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyAttached(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleRotated();
				else
					ptrNativeObject->_notifyParticleRotated();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleRotated_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleRotated();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleResized();
				else
					ptrNativeObject->_notifyParticleResized();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleResized_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleResized();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  quota )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleQuota(quota);
				else
					ptrNativeObject->_notifyParticleQuota(quota);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleQuota_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  quota )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleQuota(quota);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real(void *pObjectXXXX, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyDefaultDimensions(width, height);
				else
					ptrNativeObject->_notifyDefaultDimensions(width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyDefaultDimensions_void_Real_Real_NoVirtual(void *pObjectXXXX, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyDefaultDimensions(width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* particle )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleEmitted(particle);
				else
					ptrNativeObject->_notifyParticleEmitted(particle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleEmitted_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* particle )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleEmitted(particle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* particle )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleExpired(particle);
				else
					ptrNativeObject->_notifyParticleExpired(particle);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleExpired_void_CParticle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticle* particle )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleExpired(particle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList(void *pObjectXXXX, _inout void* currentParticles )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleMoved(*(EarthView::World::Graphic::ParticleList*)currentParticles);
				else
					ptrNativeObject->_notifyParticleMoved(*(EarthView::World::Graphic::ParticleList*)currentParticles);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleMoved_void_ParticleList_NoVirtual(void *pObjectXXXX, _inout void* currentParticles )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleMoved(*(EarthView::World::Graphic::ParticleList*)currentParticles);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList(void *pObjectXXXX, _inout void* currentParticles )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleCleared(*(EarthView::World::Graphic::ParticleList*)currentParticles);
				else
					ptrNativeObject->_notifyParticleCleared(*(EarthView::World::Graphic::ParticleList*)currentParticles);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__notifyParticleCleared_void_ParticleList_NoVirtual(void *pObjectXXXX, _inout void* currentParticles )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_notifyParticleCleared(*(EarthView::World::Graphic::ParticleList*)currentParticles);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleVisualData*  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CParticleVisualData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_createVisualData();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CParticleVisualData* objXXXX = ptrNativeObject->_createVisualData();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleVisualData*  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__createVisualData_CParticleVisualData_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				EarthView::World::Graphic::CParticleVisualData* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_createVisualData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleVisualData* vis )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_destroyVisualData(vis);
				else
					ptrNativeObject->_destroyVisualData(vis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__destroyVisualData_void_CParticleVisualData_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleVisualData* vis )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_destroyVisualData(vis);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::setRenderQueueGroup(queueID);
				else
					ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setRenderQueueGroup_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool(void *pObjectXXXX, _in ev_bool keepLocal )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::setKeepParticlesInLocalSpace(keepLocal);
				else
					ptrNativeObject->setKeepParticlesInLocalSpace(keepLocal);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_setKeepParticlesInLocalSpace_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool keepLocal )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::setKeepParticlesInLocalSpace(keepLocal);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::SortMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_getSortMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::SortMode objXXXX = ptrNativeObject->_getSortMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CParticleSystemRenderer__getSortMode_SortMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				EarthView::World::Graphic::SortMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::_getSortMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemRenderer_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CParticleSystemRenderer* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemRenderer::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CParticleSystemRendererProxy* ptr = dynamic_cast<CParticleSystemRendererProxy*>((EarthView::World::Graphic::CParticleSystemRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRenderer_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback)();
			typedef EarthView::World::Graphic::CParticleSystemRenderer*  ( _stdcall EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback)(_in EarthView::World::Graphic::CParticleSystemRenderer* renderer);
			class CParticleSystemRendererFactoryProxy : public EarthView::World::Graphic::CParticleSystemRendererFactory
			{
			private:
				EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback* m_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback;
			public:
				CParticleSystemRendererFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemRendererFactory(pList)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString(EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString(EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer(EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback = pCallback;
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemRendererFactory::getType();
				}
				virtual EarthView::World::Graphic::CParticleSystemRenderer* createInstance(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystemRenderer* returnValue = m_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CParticleSystemRendererFactory::createInstance(name);
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CParticleSystemRenderer* renderer)
				{
					if(m_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback(renderer);
					}
					else
						return this->CParticleSystemRendererFactory::destroyInstance(renderer);
				}
			};
			REGISTER_FACTORY_CLASS(CParticleSystemRendererFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString_Callback* pCallback )
			{
				CParticleSystemRendererFactoryProxy* ptr = dynamic_cast<CParticleSystemRendererFactoryProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback* pCallback )
			{
				CParticleSystemRendererFactoryProxy* ptr = dynamic_cast<CParticleSystemRendererFactoryProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_createInstance_CParticleSystemRenderer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback* pCallback )
			{
				CParticleSystemRendererFactoryProxy* ptr = dynamic_cast<CParticleSystemRendererFactoryProxy*>((EarthView::World::Graphic::CParticleSystemRendererFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemRendererFactory_destroyInstance_void_CParticleSystemRenderer(pCallback);
				}
			}
		}
	}
}
