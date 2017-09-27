/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/billboardparticlerenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef char*  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue, _inout void* currentParticles, _in ev_bool cullIndividually);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback)(_inout void* mat);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback)(_in ev_uint64  quota);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback)(_in Real width, _in Real height);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* particle);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback)(_in EarthView::World::Graphic::CParticle* particle);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback)(_inout void* currentParticles);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback)(_inout void* currentParticles);
			typedef EarthView::World::Graphic::CParticleVisualData*  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback)(_in EarthView::World::Graphic::CParticleVisualData* vis);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback)(_in ev_bool keepLocal);
			typedef int  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CBillboardParticleRendererProxy : public EarthView::World::Graphic::CBillboardParticleRenderer
			{
			private:
				EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback;
			public:
				CBillboardParticleRendererProxy(EarthView::World::Core::CNameValuePairList *pList) : CBillboardParticleRenderer(pList)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString(EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr(EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode(EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void(EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void(EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t(EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real(EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle(EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle(EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList(EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList(EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData(EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData(EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool(EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode(EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor(EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString(EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBillboardParticleRenderer::getType();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue, _inout EarthView::World::Graphic::ParticleList& currentParticles, _in ev_bool cullIndividually)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback(queue, &currentParticles, cullIndividually);
					}
					else
						return this->CBillboardParticleRenderer::_updateRenderQueue(queue, currentParticles, cullIndividually);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CBillboardParticleRenderer::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CBillboardParticleRenderer::visitRenderables(visitor);
				}
				virtual void _setMaterial(_inout EarthView::World::Graphic::CMaterialPtr& mat)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback(&mat);
					}
					else
						return this->CBillboardParticleRenderer::_setMaterial(mat);
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* ref_cam)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback(ref_cam);
					}
					else
						return this->CBillboardParticleRenderer::_notifyCurrentCamera(ref_cam);
				}
				virtual void _notifyParticleRotated()
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback();
					}
					else
						return this->CBillboardParticleRenderer::_notifyParticleRotated();
				}
				virtual void _notifyParticleResized()
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback();
					}
					else
						return this->CBillboardParticleRenderer::_notifyParticleResized();
				}
				virtual void _notifyParticleQuota(_in ev_size_t quota)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback(quota);
					}
					else
						return this->CBillboardParticleRenderer::_notifyParticleQuota(quota);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CBillboardParticleRenderer::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CBillboardParticleRenderer::_notifyAttached(ref_parent);
				}
				virtual void _notifyDefaultDimensions(_in Real width, _in Real height)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback(width, height);
					}
					else
						return this->CBillboardParticleRenderer::_notifyDefaultDimensions(width, height);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CBillboardParticleRenderer::setRenderQueueGroup(queueID);
				}
				virtual void setKeepParticlesInLocalSpace(_in ev_bool keepLocal)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback(keepLocal);
					}
					else
						return this->CBillboardParticleRenderer::setKeepParticlesInLocalSpace(keepLocal);
				}
				virtual EarthView::World::Graphic::SortMode _getSortMode() const
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SortMode returnValue = (EarthView::World::Graphic::SortMode)m_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback();
						return returnValue;
					}
					else
						return this->CBillboardParticleRenderer::_getSortMode();
				}
				virtual void _notifyParticleEmitted(_in EarthView::World::Graphic::CParticle* particle)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback(particle);
					}
					else
						return this->CBillboardParticleRenderer::_notifyParticleEmitted(particle);
				}
				virtual void _notifyParticleExpired(_in EarthView::World::Graphic::CParticle* particle)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback(particle);
					}
					else
						return this->CBillboardParticleRenderer::_notifyParticleExpired(particle);
				}
				virtual void _notifyParticleMoved(_inout EarthView::World::Graphic::ParticleList& currentParticles)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback(&currentParticles);
					}
					else
						return this->CBillboardParticleRenderer::_notifyParticleMoved(currentParticles);
				}
				virtual void _notifyParticleCleared(_inout EarthView::World::Graphic::ParticleList& currentParticles)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback(&currentParticles);
					}
					else
						return this->CBillboardParticleRenderer::_notifyParticleCleared(currentParticles);
				}
				virtual EarthView::World::Graphic::CParticleVisualData* _createVisualData()
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CParticleVisualData* returnValue = m_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback();
						return returnValue;
					}
					else
						return this->CBillboardParticleRenderer::_createVisualData();
				}
				virtual void _destroyVisualData(_in EarthView::World::Graphic::CParticleVisualData* vis)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback(vis);
					}
					else
						return this->CBillboardParticleRenderer::_destroyVisualData(vis);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CBillboardParticleRenderer::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CBillboardParticleRenderer::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CBillboardParticleRenderer::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CBillboardParticleRenderer::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CBillboardParticleRenderer::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CBillboardParticleRendererProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setBillboardType_void_BillboardType(void *pObjectXXXX, _in int bbt )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->setBillboardType((EarthView::World::Graphic::BillboardType)bbt);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getBillboardType_BillboardType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				EarthView::World::Graphic::BillboardType objXXXX = ptrNativeObject->getBillboardType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setUseAccurateFacing_void_ev_bool(void *pObjectXXXX, _in ev_bool acc )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->setUseAccurateFacing(acc);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getUseAccurateFacing_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseAccurateFacing();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setBillboardOrigin_void_BillboardOrigin(void *pObjectXXXX, _in int origin )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->setBillboardOrigin((EarthView::World::Graphic::BillboardOrigin)origin);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getBillboardOrigin_BillboardOrigin(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				EarthView::World::Graphic::BillboardOrigin objXXXX = ptrNativeObject->getBillboardOrigin();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setBillboardRotationType_void_BillboardRotationType(void *pObjectXXXX, _in int rotationType )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->setBillboardRotationType((EarthView::World::Graphic::BillboardRotationType)rotationType);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getBillboardRotationType_BillboardRotationType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				EarthView::World::Graphic::BillboardRotationType objXXXX = ptrNativeObject->getBillboardRotationType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setCommonDirection_void_CVector3(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->setCommonDirection(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getCommonDirection_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getCommonDirection();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setCommonUpVector_void_CVector3(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->setCommonUpVector(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getCommonUpVector_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getCommonUpVector();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setPointRenderingEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->setPointRenderingEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_isPointRenderingEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isPointRenderingEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _inout void* currentParticles, _in ev_bool cullIndividually )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_updateRenderQueue(queue, *(EarthView::World::Graphic::ParticleList*)currentParticles, cullIndividually);
				else
					ptrNativeObject->_updateRenderQueue(queue, *(EarthView::World::Graphic::ParticleList*)currentParticles, cullIndividually);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__updateRenderQueue_void_CRenderQueue_ParticleList_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue, _inout void* currentParticles, _in ev_bool cullIndividually )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_updateRenderQueue(queue, *(EarthView::World::Graphic::ParticleList*)currentParticles, cullIndividually);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr(void *pObjectXXXX, _inout void* mat )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
				else
					ptrNativeObject->_setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__setMaterial_void_CMaterialPtr_NoVirtual(void *pObjectXXXX, _inout void* mat )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyCurrentCamera(ref_cam);
				else
					ptrNativeObject->_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleRotated();
				else
					ptrNativeObject->_notifyParticleRotated();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleRotated_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleRotated();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleResized();
				else
					ptrNativeObject->_notifyParticleResized();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleResized_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleResized();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  quota )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleQuota(quota);
				else
					ptrNativeObject->_notifyParticleQuota(quota);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleQuota_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  quota )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyParticleQuota(quota);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent, isTagPoint);
				else
					ptrNativeObject->_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent);
				else
					ptrNativeObject->_notifyAttached(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyAttached_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyAttached(ref_parent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real(void *pObjectXXXX, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyDefaultDimensions(width, height);
				else
					ptrNativeObject->_notifyDefaultDimensions(width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__notifyDefaultDimensions_void_Real_Real_NoVirtual(void *pObjectXXXX, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_notifyDefaultDimensions(width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::setRenderQueueGroup(queueID);
				else
					ptrNativeObject->setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setRenderQueueGroup_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 queueID )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::setRenderQueueGroup(queueID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool(void *pObjectXXXX, _in ev_bool keepLocal )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::setKeepParticlesInLocalSpace(keepLocal);
				else
					ptrNativeObject->setKeepParticlesInLocalSpace(keepLocal);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_setKeepParticlesInLocalSpace_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool keepLocal )
			{
				EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::setKeepParticlesInLocalSpace(keepLocal);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::SortMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_getSortMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::SortMode objXXXX = ptrNativeObject->_getSortMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer__getSortMode_SortMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				EarthView::World::Graphic::SortMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRenderer::_getSortMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBillboardSet*  _stdcall EarthView_World_Graphic_CBillboardParticleRenderer_getBillboardSet_CBillboardSet(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRenderer* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX;
				EarthView::World::Graphic::CBillboardSet* objXXXX = ptrNativeObject->getBillboardSet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleEmitted_void_CParticle(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleExpired_void_CParticle(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleMoved_void_ParticleList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__notifyParticleCleared_void_ParticleList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__createVisualData_CParticleVisualData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer__destroyVisualData_void_CParticleVisualData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CBillboardParticleRendererProxy* ptr = dynamic_cast<CBillboardParticleRendererProxy*>((EarthView::World::Graphic::CBillboardParticleRenderer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRenderer_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback)();
			typedef EarthView::World::Graphic::CParticleSystemRenderer*  ( _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback)(_in EarthView::World::Graphic::CParticleSystemRenderer* renderer);
			class CBillboardParticleRendererFactoryProxy : public EarthView::World::Graphic::CBillboardParticleRendererFactory
			{
			private:
				EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback* m_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback;
				EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback* m_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback;
				EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback* m_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback;
			public:
				CBillboardParticleRendererFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CBillboardParticleRendererFactory(pList)
				{
					m_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString(EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString(EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer(EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback = pCallback;
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBillboardParticleRendererFactory::getType();
				}
				virtual EarthView::World::Graphic::CParticleSystemRenderer* createInstance(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystemRenderer* returnValue = m_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CBillboardParticleRendererFactory::createInstance(name);
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CParticleSystemRenderer* inst)
				{
					if(m_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback(inst);
					}
					else
						return this->CBillboardParticleRendererFactory::destroyInstance(inst);
				}
			};
			REGISTER_FACTORY_CLASS(CBillboardParticleRendererFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRendererFactory* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererFactoryProxy*>((EarthView::World::Graphic::CBillboardParticleRendererFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRendererFactory::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_Callback* pCallback )
			{
				CBillboardParticleRendererFactoryProxy* ptr = dynamic_cast<CBillboardParticleRendererFactoryProxy*>((EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBillboardParticleRendererFactory* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRendererFactory::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRenderer*  _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CBillboardParticleRendererFactory* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererFactoryProxy*>((EarthView::World::Graphic::CBillboardParticleRendererFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CParticleSystemRenderer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRendererFactory::createInstance(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CParticleSystemRenderer* objXXXX = ptrNativeObject->createInstance(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_Callback* pCallback )
			{
				CBillboardParticleRendererFactoryProxy* ptr = dynamic_cast<CBillboardParticleRendererFactoryProxy*>((EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRenderer*  _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_createInstance_CParticleSystemRenderer_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CBillboardParticleRendererFactory* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRenderer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRendererFactory::createInstance(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystemRenderer* inst )
			{
				EarthView::World::Graphic::CBillboardParticleRendererFactory* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX;
				if (dynamic_cast<CBillboardParticleRendererFactoryProxy*>((EarthView::World::Graphic::CBillboardParticleRendererFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRendererFactory::destroyInstance(inst);
				else
					ptrNativeObject->destroyInstance(inst);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer( void *pObjectXXXX, EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_Callback* pCallback )
			{
				CBillboardParticleRendererFactoryProxy* ptr = dynamic_cast<CBillboardParticleRendererFactoryProxy*>((EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBillboardParticleRendererFactory_destroyInstance_void_CParticleSystemRenderer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystemRenderer* inst )
			{
				EarthView::World::Graphic::CBillboardParticleRendererFactory* ptrNativeObject = (EarthView::World::Graphic::CBillboardParticleRendererFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CBillboardParticleRendererFactory::destroyInstance(inst);
			}
		}
	}
}
