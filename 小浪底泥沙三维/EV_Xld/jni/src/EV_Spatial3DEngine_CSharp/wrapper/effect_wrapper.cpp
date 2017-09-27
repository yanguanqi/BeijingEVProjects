/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effect.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
		}
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace EffectManager
			{
				typedef EarthView::World::Graphic::CMovableObject::CUserData*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback)();
				class CEffectUserDataProxy : public EarthView::World::Spatial3D::EffectManager::CEffectUserData
				{
				private:
					EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback;
				public:
					CEffectUserDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectUserData(pList)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData(EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback = pCallback;
					}
					virtual EarthView::World::Graphic::CMovableObject::CUserData* clone()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMovableObject::CUserData* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback();
							return returnValue;
						}
						else
							return this->CEffectUserData::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CEffectUserDataProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject::CUserData*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectUserData* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectUserData*) pObjectXXXX;
					if (dynamic_cast<CEffectUserDataProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectUserData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectUserData::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_Callback* pCallback )
				{
					CEffectUserDataProxy* ptr = dynamic_cast<CEffectUserDataProxy*>((EarthView::World::Spatial3D::EffectManager::CEffectUserData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject::CUserData*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectUserData_clone_CUserData_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectUserData* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectUserData*) pObjectXXXX;
					EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffectUserData::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall Get_EarthView_World_Spatial3D_EffectManager_CEffectUserData_VisibleObject( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectUserData* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectUserData*) pObjectXXXX;
					EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->VisibleObject;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_EffectManager_CEffectUserData_VisibleObject( void *pObjectXXXX, EarthView::World::Geometry3D::CVisibleObject*  value )
				{
					((EarthView::World::Spatial3D::EffectManager::CEffectUserData*)pObjectXXXX)->VisibleObject = value;
				}
				typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
				typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback)();
				typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
				typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback)();
				typedef Real  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
				typedef Real  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
				typedef Real  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
				typedef Real  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback)();
				typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback)();
				typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
				typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback)();
				typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
				typedef Real  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
				typedef void  ( _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
				class CEffectProxy : public EarthView::World::Spatial3D::EffectManager::CEffect
				{
				private:
					EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
					EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
				public:
					CEffectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffect(pList)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8(EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory(EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory(EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager(EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager(EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString(EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString(EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode(EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode(EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode(EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void(EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void(EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList(EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener(EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera(EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox(EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real(EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere(EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue(EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real(EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real(EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real(EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real(EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real(EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real(EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue(EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector(EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector(EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void(EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void(EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void(EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox(EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8(EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8(EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4(EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener(EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener(EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener(EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList(EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList(EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor(EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData(EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox(EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight(EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
					}
					virtual void setRenderingMaxDistance(_in Real dist)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback(dist);
						}
						else
							return this->CEffect::setRenderingMaxDistance(dist);
					}
					virtual void setRenderingMinDistance(_in Real dist)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback(dist);
						}
						else
							return this->CEffect::setRenderingMinDistance(dist);
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CEffect::setVisible(visible);
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getBoundingBox();
					}
					virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback(&colour);
						}
						else
							return this->CEffect::setSelectionColour(colour);
					}
					virtual void renderSelection()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback();
						}
						else
							return this->CEffect::renderSelection();
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback();
						}
						else
							return this->CEffect::clearSelection();
					}
					virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback(&objIndics);
							return returnValue;
						}
						else
							return this->CEffect::setSelected(objIndics);
					}
					virtual EarthView::World::Core::IntVector getSelected() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getSelected();
					}
					virtual ev_bool startEditing(_in ev_uint32 objectIndex)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
							return returnValue;
						}
						else
							return this->CEffect::startEditing(objectIndex);
					}
					virtual ev_uint32 getTypeFlags() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getTypeFlags();
					}
					virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _out EarthView::World::Spatial::Math::CMatrix4& matrix)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
							return returnValue;
						}
						else
							return this->CEffect::getSelectedObjectWorldMatrix(objectIndex, matrix);
					}
					virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
							return returnValue;
						}
						else
							return this->CEffect::setSelectedObjectWorldMatrix(objectIndex, matrix);
					}
					virtual void endEditing()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback();
						}
						else
							return this->CEffect::endEditing();
					}
					virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getEditBoundingBox();
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
							return returnValue;
						}
						else
							return this->CEffect::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool renderSelected, _inout EarthView::World::Core::IntVector& indexVec)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, renderSelected, &indexVec);
							return returnValue;
						}
						else
							return this->CEffect::selectBy(aabb, renderSelected, indexVec);
					}
					virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool renderSelected, _inout EarthView::World::Core::IntVector& indexVec)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, renderSelected, &indexVec);
							return returnValue;
						}
						else
							return this->CEffect::selectBy(sphere, renderSelected, indexVec);
					}
					virtual EVString getMovableType() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getMovableType();
					}
					virtual Real getBoundingRadius() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getBoundingRadius();
					}
					virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback(queue);
						}
						else
							return this->CEffect::_updateRenderQueue(queue);
					}
					virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
						}
						else
							return this->CEffect::visitRenderables(visitor, debugRenderables);
					}
					virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback(visitor);
						}
						else
							return this->CEffect::visitRenderables(visitor);
					}
					virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback(cam);
						}
						else
							return this->CEffect::_notifyCurrentCamera(cam);
					}
					virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* parent, _in ev_bool isTagPoint)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback(parent, isTagPoint);
						}
						else
							return this->CEffect::_notifyAttached(parent, isTagPoint);
					}
					virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* parent)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback(parent);
						}
						else
							return this->CEffect::_notifyAttached(parent);
					}
					virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getAnimableObjectPtr();
					}
					virtual ev_uint8 getRenderQueueId() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getRenderQueueId();
					}
					virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
						}
						else
							return this->CEffect::_notifyCreator(ref_fact);
					}
					virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback();
							return returnValue;
						}
						else
							return this->CEffect::_getCreator();
					}
					virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback(ref_mgr);
						}
						else
							return this->CEffect::_notifyManager(ref_mgr);
					}
					virtual EarthView::World::Graphic::CSceneManager* _getManager() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CEffect::_getManager();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getName();
					}
					virtual EarthView::World::Graphic::CNode* getParentNode() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getParentNode();
					}
					virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getParentSceneNode();
					}
					virtual ev_bool isParentTagPoint() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::isParentTagPoint();
					}
					virtual ev_bool isAttached() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::isAttached();
					}
					virtual void detachFromParent()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback();
						}
						else
							return this->CEffect::detachFromParent();
					}
					virtual ev_bool isInScene() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::isInScene();
					}
					virtual void _notifyMoved()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback();
						}
						else
							return this->CEffect::_notifyMoved();
					}
					virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback(lightList);
						}
						else
							return this->CEffect::_notifyLightsQueried(lightList);
					}
					virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
						}
						else
							return this->CEffect::setLightQueriedListener(listener);
					}
					virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getLightQueriedListener();
					}
					virtual ev_uint32 getLightListUpdated() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getLightListUpdated();
					}
					virtual void setLightListUpdated(_in ev_uint32 frame)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback(frame);
						}
						else
							return this->CEffect::setLightListUpdated(frame);
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
							return returnValue;
						}
						else
							return this->CEffect::getWorldBoundingBox(derive);
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getWorldBoundingBox();
					}
					virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
							return returnValue;
						}
						else
							return this->CEffect::getWorldBoundingSphere(derive);
					}
					virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getWorldBoundingSphere();
					}
					virtual ev_bool getVisible() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getVisible();
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::isVisible();
					}
					virtual Real getRenderingMaxDistance() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getRenderingMaxDistance();
					}
					virtual Real getRenderingMinDistance() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getRenderingMinDistance();
					}
					virtual void setRenderingMinPixelSize(_in Real pixelSize)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
						}
						else
							return this->CEffect::setRenderingMinPixelSize(pixelSize);
					}
					virtual Real getRenderingMinPixelSize() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getRenderingMinPixelSize();
					}
					virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
							return returnValue;
						}
						else
							return this->CEffect::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
					}
					virtual void setRenderQueueGroup(_in ev_uint8 queueID)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
						}
						else
							return this->CEffect::setRenderQueueGroup(queueID);
					}
					virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
						}
						else
							return this->CEffect::setRenderQueueGroupAndPriority(queueID, priority);
					}
					virtual ev_uint8 getRenderQueueGroup() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getRenderQueueGroup();
					}
					virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CEffect::_getParentNodeFullTransform();
					}
					virtual void setQueryFlags(_in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback(flags);
						}
						else
							return this->CEffect::setQueryFlags(flags);
					}
					virtual void addQueryFlags(_in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback(flags);
						}
						else
							return this->CEffect::addQueryFlags(flags);
					}
					virtual void removeQueryFlags(_in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback(flags);
						}
						else
							return this->CEffect::removeQueryFlags(flags);
					}
					virtual ev_uint32 getQueryFlags() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getQueryFlags();
					}
					virtual void setVisibilityFlags(_in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback(flags);
						}
						else
							return this->CEffect::setVisibilityFlags(flags);
					}
					virtual void addVisibilityFlags(_in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback(flags);
						}
						else
							return this->CEffect::addVisibilityFlags(flags);
					}
					virtual void removeVisibilityFlags(_in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback(flags);
						}
						else
							return this->CEffect::removeVisibilityFlags(flags);
					}
					virtual ev_uint32 getVisibilityFlags() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getVisibilityFlags();
					}
					virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback(ref_listener);
						}
						else
							return this->CEffect::addListener(ref_listener);
					}
					virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback(listener);
						}
						else
							return this->CEffect::removeListener(listener);
					}
					virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback(listener);
							return returnValue;
						}
						else
							return this->CEffect::existListener(listener);
					}
					virtual ev_uint32 getListenerCount() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getListenerCount();
					}
					virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CEffect::getListener(index);
					}
					virtual const EarthView::World::Graphic::LightList& queryLights() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback();
							return returnValue;
						}
						else
							return this->CEffect::queryLights();
					}
					virtual ev_uint32 getLightMask() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getLightMask();
					}
					virtual void setLightMask(_in ev_uint32 lightMask)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback(lightMask);
						}
						else
							return this->CEffect::setLightMask(lightMask);
					}
					virtual EarthView::World::Graphic::LightList* _getLightList()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback();
							return returnValue;
						}
						else
							return this->CEffect::_getLightList();
					}
					virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getEdgeList();
					}
					virtual ev_bool hasEdgeList()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::hasEdgeList();
					}
					virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
							return returnValue;
						}
						else
							return this->CEffect::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
					}
					virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
							return returnValue;
						}
						else
							return this->CEffect::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getLightCapBounds();
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
							return returnValue;
						}
						else
							return this->CEffect::getDarkCapBounds(light, dirLightExtrusionDist);
					}
					virtual void setCastShadows(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback(enabled);
						}
						else
							return this->CEffect::setCastShadows(enabled);
					}
					virtual ev_bool getCastShadows() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getCastShadows();
					}
					virtual ev_bool getReceivesShadows()
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::getReceivesShadows();
					}
					virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
						{
							Real returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback(l);
							return returnValue;
						}
						else
							return this->CEffect::getPointExtrusionDistance(l);
					}
					virtual void setDebugDisplayEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CEffect::setDebugDisplayEnabled(enabled);
					}
					virtual ev_bool isDebugDisplayEnabled() const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffect::isDebugDisplayEnabled();
					}
					virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
						}
						else
							return this->CEffect::updateEdgeListLightFacing(edgeData, lightPos);
					}
					virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
						}
						else
							return this->CEffect::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
					}
					virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
					{
						if(m_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
						}
						else
							return this->CEffect::extrudeBounds(box, lightPos, extrudeDist);
					}
				};
				REGISTER_FACTORY_CLASS(CEffectProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real(void *pObjectXXXX, _in Real dist )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setRenderingMaxDistance(dist);
					else
						ptrNativeObject->setRenderingMaxDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMaxDistance_void_Real_NoVirtual(void *pObjectXXXX, _in Real dist )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setRenderingMaxDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real(void *pObjectXXXX, _in Real dist )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setRenderingMinDistance(dist);
					else
						ptrNativeObject->setRenderingMinDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinDistance_void_Real_NoVirtual(void *pObjectXXXX, _in Real dist )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setRenderingMinDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getAliasName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getBindedID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getBindedID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setBindedID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->setBindedID(id);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getMovableNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getMovableNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getMovableByIndex_CMovableObject_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getMovableByIndex(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getEffectInfoNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectInfoNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getEffectInfoByIndex_CEffectInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo objXXXX = ptrNativeObject->getEffectInfoByIndex(index);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getEffectID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getBoundingBox();
						const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBoundingBox();
						const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getType_EffectType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::EffectType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
					else
						ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelectionColour_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::renderSelection();
					else
						ptrNativeObject->renderSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_renderSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::renderSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector(void *pObjectXXXX, _in const void* objIndics )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setSelected(*(EarthView::World::Core::IntVector*)objIndics);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setSelected(*(EarthView::World::Core::IntVector*)objIndics);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelected_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* objIndics )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setSelected(*(EarthView::World::Core::IntVector*)objIndics);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::IntVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getSelected();
						EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getSelected();
						EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getSelected_IntVector_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					EarthView::World::Core::IntVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getSelected();
					EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 objectIndex )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::startEditing(objectIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(objectIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_startEditing_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::startEditing(objectIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getTypeFlags();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getTypeFlags();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getTypeFlags_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getTypeFlags();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _out void* matrix )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _out void* matrix )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::endEditing();
					else
						ptrNativeObject->endEditing();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_endEditing_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::endEditing();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getEditBoundingBox();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->getEditBoundingBox();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getEditBoundingBox_CEditBoundingBox_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getEditBoundingBox();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(void *pObjectXXXX, _in const void* aabb, _in ev_bool renderSelected, _inout void* indexVec )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, renderSelected, *(EarthView::World::Core::IntVector*)indexVec);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, renderSelected, *(EarthView::World::Core::IntVector*)indexVec);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* aabb, _in ev_bool renderSelected, _inout void* indexVec )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, renderSelected, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector(void *pObjectXXXX, _in const void* sphere, _in ev_bool renderSelected, _inout void* indexVec )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, renderSelected, *(EarthView::World::Core::IntVector*)indexVec);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, renderSelected, *(EarthView::World::Core::IntVector*)indexVec);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_selectBy_ev_bool_CSphere_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* sphere, _in ev_bool renderSelected, _inout void* indexVec )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, renderSelected, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getMovableType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getMovableType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getMovableType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
					{
						Real objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getBoundingRadius();
						return objXXXX;
					}
					else
					{
						Real objXXXX = ptrNativeObject->getBoundingRadius();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::getBoundingRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_updateRenderQueue(queue);
					else
						ptrNativeObject->_updateRenderQueue(queue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__updateRenderQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_updateRenderQueue(queue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::visitRenderables(visitor, debugRenderables);
					else
						ptrNativeObject->visitRenderables(visitor, debugRenderables);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::visitRenderables(visitor, debugRenderables);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::visitRenderables(visitor);
					else
						ptrNativeObject->visitRenderables(visitor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::visitRenderables(visitor);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_notifyCurrentCamera(cam);
					else
						ptrNativeObject->_notifyCurrentCamera(cam);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_notifyCurrentCamera(cam);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* parent, _in ev_bool isTagPoint )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_notifyAttached(parent, isTagPoint);
					else
						ptrNativeObject->_notifyAttached(parent, isTagPoint);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* parent, _in ev_bool isTagPoint )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_notifyAttached(parent, isTagPoint);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* parent )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					if (dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_notifyAttached(parent);
					else
						ptrNativeObject->_notifyAttached(parent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffect__notifyAttached_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* parent )
				{
					EarthView::World::Spatial3D::EffectManager::CEffect* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::EffectManager::CEffect::_notifyAttached(parent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueId_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyCreator_void_CMovableObjectFactory(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getCreator_CMovableObjectFactory(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyManager_void_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getParentNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getParentSceneNode_CSceneNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isParentTagPoint_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_detachFromParent_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isInScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyMoved_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__notifyLightsQueried_void_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightQueriedListener_void_CLightQueriedListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightQueriedListener_CLightQueriedListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightListUpdated_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightListUpdated_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingSphere_CSphere(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMaxDistance_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinDistance_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderingMinPixelSize_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderingMinPixelSize_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroup_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getRenderQueueGroup_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getParentNodeFullTransform_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setQueryFlags_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addQueryFlags_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeQueryFlags_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getQueryFlags_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setVisibilityFlags_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addVisibilityFlags_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeVisibilityFlags_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getVisibilityFlags_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_addListener_void_CMovableObjectListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_removeListener_void_CMovableObjectListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_existListener_ev_bool_CMovableObjectListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getListenerCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getListener_CMovableObjectListener_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_queryLights_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightMask_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setLightMask_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect__getLightList_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setCastShadows_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getReceivesShadows_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_setDebugDisplayEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_isDebugDisplayEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getCastShadows_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getEdgeList_CEdgeData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_hasEdgeList_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getWorldBoundingBox_CAxisAlignedBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getLightCapBounds_CAxisAlignedBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_getPointExtrusionDistance_Real_CLight(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
				{
					CEffectProxy* ptr = dynamic_cast<CEffectProxy*>((EarthView::World::Spatial3D::EffectManager::CEffect*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_EffectManager_CEffect_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
					}
				}
			}
		}
	}
}
