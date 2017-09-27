/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/instancedentity.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
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
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstancedEntity__getOwner_CInstanceBatch(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->_getOwner();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity_isInUse_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isInUse();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity_isInScene_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isInScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity_setInUse_void_ev_bool(void *pObjectXXXX, _in ev_bool used )
			{
				EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ptrNativeObject->setInUse(used);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity_getVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstancedEntity_getIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstancedEntity_getInstanceIndex_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getInstanceIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstancedEntity_getSubMeshInstanceIndex_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSubMeshInstanceIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity_isInternalInstance_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isInternalInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedEntity_getSubMeshInstanceMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getSubMeshInstanceMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity_setUserColour_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ptrNativeObject->setUserColour(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedEntity_getUserColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getUserColour();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity_setSelected_ev_bool_IntVector(void *pObjectXXXX, _in const void* objIndics )
			{
				EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setSelected(*(EarthView::World::Core::IntVector*)objIndics);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedEntity_getSelected_IntVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getSelected();
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedEntity_getSelectionColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getSelectionColour();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CInstancedEntity* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity*) pObjectXXXX;
				ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback)();
			class CInstancedEntity2Proxy : public EarthView::World::Graphic::CInstancedEntity2
			{
			private:
				EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback;
			public:
				CInstancedEntity2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CInstancedEntity2(pList)
				{
					m_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool(EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback = pCallback;
				}
				virtual ev_bool _updateAnimation()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntity2::_updateAnimation();
				}
			};
			REGISTER_FACTORY_CLASS(CInstancedEntity2Proxy);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CInstancedEntityMovableProxy : public EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable
			{
			private:
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CInstancedEntityMovableProxy(EarthView::World::Core::CNameValuePairList *pList) : CInstancedEntityMovable(pList)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getMovableType();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getBoundingBox();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getBoundingRadius();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getSquaredViewDepth(cam);
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback();
					}
					else
						return this->CInstancedEntityMovable::_notifyMoved();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CInstancedEntityMovable::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CInstancedEntityMovable::_updateRenderQueue(queue);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CInstancedEntityMovable::visitRenderables(visitor, debugRenderables);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::_getParentNodeFullTransform();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* ref_cam)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback(ref_cam);
					}
					else
						return this->CInstancedEntityMovable::_notifyCurrentCamera(ref_cam);
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::isInScene();
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::isVisible();
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CInstancedEntityMovable::setVisible(visible);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CInstancedEntityMovable::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CInstancedEntityMovable::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::isParentTagPoint();
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback();
					}
					else
						return this->CInstancedEntityMovable::detachFromParent();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CInstancedEntityMovable::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CInstancedEntityMovable::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CInstancedEntityMovable::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getWorldBoundingSphere();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CInstancedEntityMovable::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CInstancedEntityMovable::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CInstancedEntityMovable::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CInstancedEntityMovable::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback();
					}
					else
						return this->CInstancedEntityMovable::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback();
					}
					else
						return this->CInstancedEntityMovable::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback();
					}
					else
						return this->CInstancedEntityMovable::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CInstancedEntityMovable::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CInstancedEntityMovable::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getRenderQueueGroup();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedEntityMovable::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedEntityMovable::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedEntityMovable::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedEntityMovable::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedEntityMovable::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstancedEntityMovable::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CInstancedEntityMovable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CInstancedEntityMovable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CInstancedEntityMovable::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CInstancedEntityMovable::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getPointExtrusionDistance(l);
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::getTypeFlags();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CInstancedEntityMovable::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstancedEntityMovable::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CInstancedEntityMovable::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CInstancedEntityMovable::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CInstancedEntityMovable::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CInstancedEntityMovableProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity2*  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParent_CInstancedEntity2(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity2* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getMovableType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getMovableType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getBoundingBox();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_notifyMoved();
				else
					ptrNativeObject->_notifyMoved();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyMoved_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_notifyMoved();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_notifyAttached(ref_parent, isTagPoint);
				else
					ptrNativeObject->_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_updateRenderQueue(queue);
				else
					ptrNativeObject->_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__updateRenderQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_getParentNodeFullTransform();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->_getParentNodeFullTransform();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getParentNodeFullTransform_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_getParentNodeFullTransform();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_notifyCurrentCamera(ref_cam);
				else
					ptrNativeObject->_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::isInScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isInScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isInScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::isInScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::isVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getVisible();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisible_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::setVisible(visible);
				else
					ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
			{
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable::setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CInstancedEntityMovableProxy* ptr = dynamic_cast<CInstancedEntityMovableProxy*>((EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2_CInstancedEntityMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTagPoint*  _stdcall EarthView_World_Graphic_CInstancedEntity2_attachObjectToBone_CTagPoint_EVString_CMovableObject_CQuaternion_CVector3(void *pObjectXXXX, _in const char* boneName, _in EarthView::World::Graphic::CMovableObject* ref_pMovable, _in const void* offsetOrientation, _in const void* offsetPosition )
			{
				EarthView::World::Core::ev_string boneName1 = boneName;
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CTagPoint* objXXXX = ptrNativeObject->attachObjectToBone(boneName1, ref_pMovable, *(EarthView::World::Spatial::Math::CQuaternion*)offsetOrientation, *(EarthView::World::Spatial::Math::CVector3*)offsetPosition);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_detachObjectFromBone_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* pMovable )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->detachObjectFromBone(pMovable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_detachAllObjectsFromBone_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->detachAllObjectsFromBone();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::MovableObjectList*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getAttachedObjectsOnBones_MovableObjectList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::MovableObjectList* objXXXX = ptrNativeObject->getAttachedObjectsOnBones();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getLocalTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getLocalTransform();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CRecursiveMutex*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getTransformMutex_CRecursiveMutex(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Core::CRecursiveMutex* objXXXX = ptrNativeObject->getTransformMutex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getMovable_CInstancedEntityMovable(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity2::CInstancedEntityMovable* objXXXX = ptrNativeObject->getMovable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_calBoundingRadius_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->calBoundingRadius();
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2__notifyMoved_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->_notifyMoved();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2__notifyAttached_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_hasSkeleton_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSkeleton();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSkeletonInstance*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getSkeleton_CSkeletonInstance(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CSkeletonInstance* objXXXX = ptrNativeObject->getSkeleton();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationState*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getAnimationState_CAnimationState_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationState* objXXXX = ptrNativeObject->getAnimationState(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimationStateSet*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getAllAnimationStates_CAnimationStateSet(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CAnimationStateSet* objXXXX = ptrNativeObject->getAllAnimationStates();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				if (dynamic_cast<CInstancedEntity2Proxy*>((EarthView::World::Graphic::CInstancedEntity2*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::_updateAnimation();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->_updateAnimation();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_Callback* pCallback )
			{
				CInstancedEntity2Proxy* ptr = dynamic_cast<CInstancedEntity2Proxy*>((EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2__updateAnimation_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstancedEntity2::_updateAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setTransformLookupNumber_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 num )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setTransformLookupNumber(num);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setPosition_void_CVector3_ev_bool(void *pObjectXXXX, _in const void* position, _in ev_bool doUpdate )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)position, doUpdate);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getOrientation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getOrientation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setOrientation_void_CQuaternion_ev_bool(void *pObjectXXXX, _in const void* orientation, _in ev_bool doUpdate )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)orientation, doUpdate);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getScale();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setScale_void_CVector3_ev_bool(void *pObjectXXXX, _in const void* scale, _in ev_bool doUpdate )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale, doUpdate);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setMatrix_void_CMatrix4_ev_bool(void *pObjectXXXX, _in const void* matrix, _in ev_bool doUpdate )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, doUpdate);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_getMaxScaleCoef_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getMaxScaleCoef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_updateTransforms_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->updateTransforms();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2__getParentNodeFullTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->_getParentNodeFullTransform();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2__getDerivedPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->_getDerivedPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_getSelectable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSelectable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setHighlightable_void_ev_bool(void *pObjectXXXX, _in ev_bool highlightable )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setHighlightable(highlightable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_getHighlightable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getHighlightable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setEditable_void_ev_bool(void *pObjectXXXX, _in ev_bool editable )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setEditable(editable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_getEditable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEditable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_getReflectable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getReflectable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setReflectable_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setReflectable(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_getRefractable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRefractable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setRefractable_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setRefractable(value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_isVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setVisibilityFlags_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 flags )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setVisibilityFlags(flags);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstancedEntity2_getVisibilityFlags_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getVisibilityFlags();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setRenderingMaxDistance_void_Real(void *pObjectXXXX, _in Real dist )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setRenderingMaxDistance(dist);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_getRenderingMaxDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getRenderingMaxDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setRenderingMinDistance_void_Real(void *pObjectXXXX, _in Real dist )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setRenderingMinDistance(dist);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstancedEntity2_getRenderingMinDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getRenderingMinDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject::CUserData*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getUserData_CUserData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->getUserData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setUserData_void_CUserData(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject::CUserData* data )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setUserData(data);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getParentNode_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getParentNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_isAttached_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_isParentNodeLocal_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isParentNodeLocal();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_setParentNodelLocal_void_ev_bool(void *pObjectXXXX, _in ev_bool local )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->setParentNodelLocal(local);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntity2_getSubMeshLocalMatrixUsed_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSubMeshLocalMatrixUsed();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntity2_useSubMeshLocalMatrix_void_ev_bool(void *pObjectXXXX, _in ev_bool use )
			{
				EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				ptrNativeObject->useSubMeshLocalMatrix(use);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getSubMeshLocalMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getSubMeshLocalMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceObject*  _stdcall EarthView_World_Graphic_CInstancedEntity2_getObjectOwner_CInstanceObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntity2* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntity2*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceObject* objXXXX = ptrNativeObject->getObjectOwner();
				return objXXXX;
			}
		}
	}
}
