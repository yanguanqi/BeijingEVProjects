/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/frustum.h"
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
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getLights_LightList_Callback)();
			typedef const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*  ( _stdcall EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback)(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_invalidateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback)(_in const void* fovy);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback)(_in Real nearDist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback)(_in Real farDist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback)(_in Real ratio);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback)(_in const void* offset);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback)(_in Real horizontal, _in Real vertical);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback)(_in Real horizontal);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback)(_in Real focalLength);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback)(_in Real left, _in Real right, _in Real top, _in Real bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback)(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback)(_in const void* relPos, _inout void* matToUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* viewMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* projectionMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback)();
			typedef const EarthView::World::Spatial::Math::CPlane*  ( _stdcall EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback)(_in ev_uint16 plane);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback)(_in const void* vert, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback)(_in const void* vert);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback)(_in int pt);
			typedef int  ( _stdcall EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback)(_in Real w, _in Real h);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback)(_in Real h);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback)(_in Real w);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback)(_in const void* p);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* p);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_disableReflection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback)(_in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* plane);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback)(_in const void* plane);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CFrustum_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CFrustumProxy : public EarthView::World::Graphic::CFrustum
			{
			private:
				EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_getLights_LightList_Callback* m_EarthView_World_Graphic_CFrustum_getLights_LightList_Callback;
				EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* m_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback;
				EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback* m_EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback;
				EarthView_World_Graphic_CFrustum_updateView_void_Callback* m_EarthView_World_Graphic_CFrustum_updateView_void_Callback;
				EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback* m_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback;
				EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback* m_EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback;
				EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback* m_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback;
				EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback* m_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback;
				EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback* m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback;
				EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback* m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback;
				EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback* m_EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback;
				EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback* m_EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback;
				EarthView_World_Graphic_CFrustum_invalidateView_void_Callback* m_EarthView_World_Graphic_CFrustum_invalidateView_void_Callback;
				EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback* m_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback;
				EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback* m_EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback;
				EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback* m_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback;
				EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback* m_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback;
				EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback* m_EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback;
				EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback* m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback;
				EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback* m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback;
				EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback* m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback;
				EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback* m_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback;
				EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback* m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback;
				EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback* m_EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback;
				EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback* m_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback;
				EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback* m_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback;
				EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback* m_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback;
				EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback;
				EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback* m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback;
				EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback* m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback;
				EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback* m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback;
				EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback* m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback;
				EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback* m_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback;
				EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback* m_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback;
				EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback* m_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback;
				EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback* m_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback;
				EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback* m_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback;
				EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback* m_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback;
				EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback* m_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback;
				EarthView_World_Graphic_CFrustum_disableReflection_void_Callback* m_EarthView_World_Graphic_CFrustum_disableReflection_void_Callback;
				EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback* m_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback;
				EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback* m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback;
				EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback* m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback;
				EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback* m_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback;
				EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback* m_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback;
				EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback* m_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback;
				EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_CFrustum_getName_EVString_Callback* m_EarthView_World_Graphic_CFrustum_getName_EVString_Callback;
				EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback* m_EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback;
				EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback* m_EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback;
				EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback* m_EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback;
				EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback* m_EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback;
				EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CFrustum_renderSelection_void_Callback* m_EarthView_World_Graphic_CFrustum_renderSelection_void_Callback;
				EarthView_World_Graphic_CFrustum_clearSelection_void_Callback* m_EarthView_World_Graphic_CFrustum_clearSelection_void_Callback;
				EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_endEditing_void_Callback* m_EarthView_World_Graphic_CFrustum_endEditing_void_Callback;
				EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback* m_EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback;
				EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback* m_EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback;
				EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CFrustumProxy(EarthView::World::Core::CNameValuePairList *pList) : CFrustum(pList)
				{
					m_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateView_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_invalidateView_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_disableReflection_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr(EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getLights_LightList(EarthView_World_Graphic_CFrustum_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable(EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real(EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateFrustum_void(EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateView_void(EarthView_World_Graphic_CFrustum_updateView_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void(EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateViewImpl_void(EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void(EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void(EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void(EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void(EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateVertexData_void(EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool(EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool(EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_invalidateFrustum_void(EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_invalidateView_void(EarthView_World_Graphic_CFrustum_invalidateView_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_invalidateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian(EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFOVy_CRadian(EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real(EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real(EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real(EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real(EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real(EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getAspectRatio_Real(EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2(EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real(EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real(EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void(EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2(EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real(EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFocalLength_void(EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFocalLength_Real(EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void(EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4(EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4(EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4(EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4(EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4(EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4(EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool(EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool(EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4(EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool(EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool(EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane(EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16(EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox(EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane(EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere(EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane(EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3(EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType(EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType(EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real(EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real(EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real(EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real(EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real(EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane(EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane(EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_disableReflection_void(EarthView_World_Graphic_CFrustum_disableReflection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_disableReflection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isReflected_ev_bool(EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4(EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane(EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane(EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane(EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void(EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool(EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3(EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion(EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8(EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory(EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager(EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__getManager_CSceneManager(EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getName_EVString(EarthView_World_Graphic_CFrustum_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getMovableType_EVString(EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getParentNode_CNode(EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode(EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool(EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode(EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isAttached_ev_bool(EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_detachFromParent_void(EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isInScene_ev_bool(EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__notifyMoved_void(EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList(EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32(EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real(EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool(EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getVisible_ev_bool(EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool(EarthView_World_Graphic_CFrustum_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real(EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real(EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real(EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real(EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue(EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector(EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getSelected_IntVector(EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_renderSelection_void(EarthView_World_Graphic_CFrustum_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_clearSelection_void(EarthView_World_Graphic_CFrustum_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_endEditing_void(EarthView_World_Graphic_CFrustum_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32(EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener(EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32(EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_queryLights_LightList(EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32(EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32(EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum__getLightList_LightList(EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool(EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool(EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32(EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor(EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool(EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData(EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool(EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CFrustum::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CFrustum::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CFrustum::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CFrustum_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getLights();
				}
				virtual const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* getFrustumRenderablePtr()
				{
					if(m_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* returnValue = m_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getFrustumRenderablePtr();
				}
				virtual void calcProjectionParameters(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top) const
				{
					if(m_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback(left, right, bottom, top);
					}
					else
						return this->CFrustum::calcProjectionParameters(left, right, bottom, top);
				}
				virtual void updateFrustum() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback();
					}
					else
						return this->CFrustum::updateFrustum();
				}
				virtual void updateView() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateView_void_Callback();
					}
					else
						return this->CFrustum::updateView();
				}
				virtual void updateFrustumImpl() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback();
					}
					else
						return this->CFrustum::updateFrustumImpl();
				}
				virtual void updateViewImpl() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback();
					}
					else
						return this->CFrustum::updateViewImpl();
				}
				virtual void updateFrustumPlanes() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback();
					}
					else
						return this->CFrustum::updateFrustumPlanes();
				}
				virtual void updateFrustumPlanesImpl() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback();
					}
					else
						return this->CFrustum::updateFrustumPlanesImpl();
				}
				virtual void updateWorldSpaceCorners() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback();
					}
					else
						return this->CFrustum::updateWorldSpaceCorners();
				}
				virtual void updateWorldSpaceCornersImpl() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback();
					}
					else
						return this->CFrustum::updateWorldSpaceCornersImpl();
				}
				virtual void updateVertexData() const
				{
					if(m_EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback();
					}
					else
						return this->CFrustum::updateVertexData();
				}
				virtual ev_bool isViewOutOfDate() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isViewOutOfDate();
				}
				virtual ev_bool isFrustumOutOfDate() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isFrustumOutOfDate();
				}
				virtual void invalidateFrustum() const
				{
					if(m_EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback();
					}
					else
						return this->CFrustum::invalidateFrustum();
				}
				virtual void invalidateView() const
				{
					if(m_EarthView_World_Graphic_CFrustum_invalidateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_invalidateView_void_Callback();
					}
					else
						return this->CFrustum::invalidateView();
				}
				virtual void setFOVy(_in const EarthView::World::Spatial::Math::CRadian& fovy)
				{
					if(m_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback(&fovy);
					}
					else
						return this->CFrustum::setFOVy(fovy);
				}
				virtual const EarthView::World::Spatial::Math::CRadian& getFOVy() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getFOVy();
				}
				virtual void setNearClipDistance(_in Real nearDist)
				{
					if(m_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback(nearDist);
					}
					else
						return this->CFrustum::setNearClipDistance(nearDist);
				}
				virtual Real getNearClipDistance() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getNearClipDistance();
				}
				virtual void setFarClipDistance(_in Real farDist)
				{
					if(m_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback(farDist);
					}
					else
						return this->CFrustum::setFarClipDistance(farDist);
				}
				virtual Real getFarClipDistance() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getFarClipDistance();
				}
				virtual void setAspectRatio(_in Real ratio)
				{
					if(m_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback(ratio);
					}
					else
						return this->CFrustum::setAspectRatio(ratio);
				}
				virtual Real getAspectRatio() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getAspectRatio();
				}
				virtual void setFrustumOffset(_in const EarthView::World::Spatial::Math::CVector2& offset)
				{
					if(m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback(&offset);
					}
					else
						return this->CFrustum::setFrustumOffset(offset);
				}
				virtual void setFrustumOffset(_in Real horizontal, _in Real vertical)
				{
					if(m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback(horizontal, vertical);
					}
					else
						return this->CFrustum::setFrustumOffset(horizontal, vertical);
				}
				virtual void setFrustumOffset(_in Real horizontal)
				{
					if(m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback(horizontal);
					}
					else
						return this->CFrustum::setFrustumOffset(horizontal);
				}
				virtual void setFrustumOffset()
				{
					if(m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback();
					}
					else
						return this->CFrustum::setFrustumOffset();
				}
				virtual const EarthView::World::Spatial::Math::CVector2& getFrustumOffset() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector2& returnValue = *(EarthView::World::Spatial::Math::CVector2*)m_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getFrustumOffset();
				}
				virtual void setFocalLength(_in Real focalLength)
				{
					if(m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback(focalLength);
					}
					else
						return this->CFrustum::setFocalLength(focalLength);
				}
				virtual void setFocalLength()
				{
					if(m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback();
					}
					else
						return this->CFrustum::setFocalLength();
				}
				virtual Real getFocalLength() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getFocalLength();
				}
				virtual void setFrustumExtents(_in Real left, _in Real right, _in Real top, _in Real bottom)
				{
					if(m_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback(left, right, top, bottom);
					}
					else
						return this->CFrustum::setFrustumExtents(left, right, top, bottom);
				}
				virtual void resetFrustumExtents()
				{
					if(m_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback();
					}
					else
						return this->CFrustum::resetFrustumExtents();
				}
				virtual void getFrustumExtents(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback(outleft, outright, outtop, outbottom);
					}
					else
						return this->CFrustum::getFrustumExtents(outleft, outright, outtop, outbottom);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixRS() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getProjectionMatrixRS();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixWithRSDepth() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getProjectionMatrixWithRSDepth();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrix() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getProjectionMatrix();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getViewMatrix() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getViewMatrix();
				}
				virtual void calcViewMatrixRelative(_in const EarthView::World::Spatial::Math::CVector3& relPos, _inout EarthView::World::Spatial::Math::CMatrix4& matToUpdate) const
				{
					if(m_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback(&relPos, &matToUpdate);
					}
					else
						return this->CFrustum::calcViewMatrixRelative(relPos, matToUpdate);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix)
				{
					if(m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback(enable, &viewMatrix);
					}
					else
						return this->CFrustum::setCustomViewMatrix(enable, viewMatrix);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CFrustum::setCustomViewMatrix(enable);
				}
				virtual ev_bool isCustomViewMatrixEnabled() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isCustomViewMatrixEnabled();
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& projectionMatrix)
				{
					if(m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback(enable, &projectionMatrix);
					}
					else
						return this->CFrustum::setCustomProjectionMatrix(enable, projectionMatrix);
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CFrustum::setCustomProjectionMatrix(enable);
				}
				virtual ev_bool isCustomProjectionMatrixEnabled() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isCustomProjectionMatrixEnabled();
				}
				virtual const EarthView::World::Spatial::Math::CPlane* getFrustumPlanes() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane* returnValue = m_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getFrustumPlanes();
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getFrustumPlane(_in ev_uint16 plane) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback(plane);
						return returnValue;
					}
					else
						return this->CFrustum::getFrustumPlane(plane);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback(&bound, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CFrustum::isVisible(bound, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound) const
				{
					if(m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback(&bound);
						return returnValue;
					}
					else
						return this->CFrustum::isVisible(bound);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CSphere& bound, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback(&bound, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CFrustum::isVisible(bound, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CSphere& bound) const
				{
					if(m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback(&bound);
						return returnValue;
					}
					else
						return this->CFrustum::isVisible(bound);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CVector3& vert, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback(&vert, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CFrustum::isVisible(vert, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CVector3& vert) const
				{
					if(m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback(&vert);
						return returnValue;
					}
					else
						return this->CFrustum::isVisible(vert);
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getTypeFlags();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getBoundingBox();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getBoundingRadius();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CFrustum::_updateRenderQueue(queue);
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getMovableType();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CFrustum::_notifyCurrentCamera(cam);
				}
				virtual void setProjectionType(_in EarthView::World::Graphic::ProjectionType pt)
				{
					if(m_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback((int)pt);
					}
					else
						return this->CFrustum::setProjectionType(pt);
				}
				virtual EarthView::World::Graphic::ProjectionType getProjectionType() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ProjectionType returnValue = (EarthView::World::Graphic::ProjectionType)m_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getProjectionType();
				}
				virtual void setOrthoWindow(_in Real w, _in Real h)
				{
					if(m_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback(w, h);
					}
					else
						return this->CFrustum::setOrthoWindow(w, h);
				}
				virtual void setOrthoWindowHeight(_in Real h)
				{
					if(m_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback(h);
					}
					else
						return this->CFrustum::setOrthoWindowHeight(h);
				}
				virtual void setOrthoWindowWidth(_in Real w)
				{
					if(m_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback(w);
					}
					else
						return this->CFrustum::setOrthoWindowWidth(w);
				}
				virtual Real getOrthoWindowHeight() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getOrthoWindowHeight();
				}
				virtual Real getOrthoWindowWidth() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getOrthoWindowWidth();
				}
				virtual void enableReflection(_in const EarthView::World::Spatial::Math::CPlane& p)
				{
					if(m_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback(&p);
					}
					else
						return this->CFrustum::enableReflection(p);
				}
				virtual void enableReflection(_in const EarthView::World::Graphic::CMovablePlane* p)
				{
					if(m_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback(p);
					}
					else
						return this->CFrustum::enableReflection(p);
				}
				virtual void disableReflection()
				{
					if(m_EarthView_World_Graphic_CFrustum_disableReflection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_disableReflection_void_Callback();
					}
					else
						return this->CFrustum::disableReflection();
				}
				virtual ev_bool isReflected() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isReflected();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getReflectionMatrix() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getReflectionMatrix();
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getReflectionPlane() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getReflectionPlane();
				}
				virtual ev_bool projectSphere(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom) const
				{
					if(m_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback(&sphere, left, top, right, bottom);
						return returnValue;
					}
					else
						return this->CFrustum::projectSphere(sphere, left, top, right, bottom);
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Graphic::CMovablePlane* plane)
				{
					if(m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback(plane);
					}
					else
						return this->CFrustum::enableCustomNearClipPlane(plane);
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Spatial::Math::CPlane& plane)
				{
					if(m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback(&plane);
					}
					else
						return this->CFrustum::enableCustomNearClipPlane(plane);
				}
				virtual void disableCustomNearClipPlane()
				{
					if(m_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback();
					}
					else
						return this->CFrustum::disableCustomNearClipPlane();
				}
				virtual ev_bool isCustomNearClipPlaneEnabled() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isCustomNearClipPlaneEnabled();
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CFrustum::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CFrustum::visitRenderables(visitor);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPositionForViewUpdate() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getPositionForViewUpdate();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientationForViewUpdate() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getOrientationForViewUpdate();
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CFrustum::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CFrustum::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFrustum_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CFrustum::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CFrustum::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback();
					}
					else
						return this->CFrustum::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback();
					}
					else
						return this->CFrustum::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CFrustum::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CFrustum::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CFrustum::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CFrustum::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CFrustum::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CFrustum::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CFrustum::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CFrustum::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CFrustum::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CFrustum::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CFrustum::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CFrustum::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CFrustum::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CFrustum::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CFrustum::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CFrustum_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_renderSelection_void_Callback();
					}
					else
						return this->CFrustum::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CFrustum_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_clearSelection_void_Callback();
					}
					else
						return this->CFrustum::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CFrustum::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CFrustum_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_endEditing_void_Callback();
					}
					else
						return this->CFrustum::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CFrustum::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CFrustum::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CFrustum::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CFrustum::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CFrustum::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CFrustum::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CFrustum::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CFrustum::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CFrustum::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CFrustum::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CFrustum::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CFrustum::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CFrustum::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CFrustum::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CFrustum::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CFrustum::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CFrustum::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CFrustum::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CFrustum::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CFrustum::getPointExtrusionDistance(l);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CFrustum::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustum::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CFrustum::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CFrustum::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CFrustum::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CFrustumProxy);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CFrustumInternalRenderableProxy : public EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable
			{
			private:
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CFrustumInternalRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CFrustumInternalRenderable(pList)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CFrustumInternalRenderable::getRenderOperation(op);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CFrustumInternalRenderable::getWorldTransforms(xform);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getLights();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getTechnique();
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CFrustumInternalRenderable::postRender(sm, rsys);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CFrustumInternalRenderable::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CFrustumInternalRenderable::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CFrustumInternalRenderable::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CFrustumInternalRenderable::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CFrustumInternalRenderable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CFrustumInternalRenderable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CFrustumInternalRenderable::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CFrustumInternalRenderable::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CFrustumInternalRenderableProxy);
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				if (dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getMaterial();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				if (dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				if (dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				if (dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				if (dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getLights();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CFrustumInternalRenderableProxy* ptr = dynamic_cast<CFrustumInternalRenderableProxy*>((EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_CFrustumInternalRenderable_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getMaterial();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getLights();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getLights_LightList_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumRenderablePtr();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* objXXXX = ptrNativeObject->getFrustumRenderablePtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumRenderablePtr_CFrustumInternalRenderable_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumRenderablePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real(void *pObjectXXXX, _inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::calcProjectionParameters(left, right, bottom, top);
				else
					ptrNativeObject->calcProjectionParameters(left, right, bottom, top);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_calcProjectionParameters_void_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::calcProjectionParameters(left, right, bottom, top);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustum_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustum();
				else
					ptrNativeObject->updateFrustum();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateFrustum_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateFrustum_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustum_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustum();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateView_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateView();
				else
					ptrNativeObject->updateView();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateView_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateView_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateView_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateView();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustumImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustumImpl();
				else
					ptrNativeObject->updateFrustumImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateFrustumImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustumImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustumImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateViewImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateViewImpl();
				else
					ptrNativeObject->updateViewImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateViewImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateViewImpl_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateViewImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateViewImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateViewImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustumPlanes();
				else
					ptrNativeObject->updateFrustumPlanes();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustumPlanes_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustumPlanes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustumPlanesImpl();
				else
					ptrNativeObject->updateFrustumPlanesImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateFrustumPlanesImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateFrustumPlanesImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateWorldSpaceCorners();
				else
					ptrNativeObject->updateWorldSpaceCorners();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateWorldSpaceCorners_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateWorldSpaceCorners();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateWorldSpaceCornersImpl();
				else
					ptrNativeObject->updateWorldSpaceCornersImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateWorldSpaceCornersImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateWorldSpaceCornersImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateVertexData_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::updateVertexData();
				else
					ptrNativeObject->updateVertexData();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateVertexData_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateVertexData_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateVertexData_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_updateVertexData_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::updateVertexData();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isViewOutOfDate();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isViewOutOfDate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isViewOutOfDate_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isViewOutOfDate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isFrustumOutOfDate();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isFrustumOutOfDate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isFrustumOutOfDate_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isFrustumOutOfDate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_invalidateFrustum_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::invalidateFrustum();
				else
					ptrNativeObject->invalidateFrustum();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_invalidateFrustum_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_invalidateFrustum_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_invalidateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_invalidateFrustum_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::invalidateFrustum();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_invalidateView_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::invalidateView();
				else
					ptrNativeObject->invalidateView();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_invalidateView_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_invalidateView_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_invalidateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_invalidateView_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::invalidateView();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian(void *pObjectXXXX, _in const void* fovy )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFOVy(*(EarthView::World::Spatial::Math::CRadian*)fovy);
				else
					ptrNativeObject->setFOVy(*(EarthView::World::Spatial::Math::CRadian*)fovy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFOVy_void_CRadian_NoVirtual(void *pObjectXXXX, _in const void* fovy )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFOVy(*(EarthView::World::Spatial::Math::CRadian*)fovy);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getFOVy_CRadian(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFOVy();
					const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getFOVy();
					const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFOVy_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFOVy_CRadian_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFOVy_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getFOVy_CRadian_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFOVy();
				const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real(void *pObjectXXXX, _in Real nearDist )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setNearClipDistance(nearDist);
				else
					ptrNativeObject->setNearClipDistance(nearDist);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setNearClipDistance_void_Real_NoVirtual(void *pObjectXXXX, _in Real nearDist )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setNearClipDistance(nearDist);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getNearClipDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getNearClipDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getNearClipDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getNearClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getNearClipDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getNearClipDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real(void *pObjectXXXX, _in Real farDist )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFarClipDistance(farDist);
				else
					ptrNativeObject->setFarClipDistance(farDist);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFarClipDistance_void_Real_NoVirtual(void *pObjectXXXX, _in Real farDist )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFarClipDistance(farDist);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getFarClipDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFarClipDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getFarClipDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFarClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getFarClipDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFarClipDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real(void *pObjectXXXX, _in Real ratio )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setAspectRatio(ratio);
				else
					ptrNativeObject->setAspectRatio(ratio);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setAspectRatio_void_Real_NoVirtual(void *pObjectXXXX, _in Real ratio )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setAspectRatio(ratio);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getAspectRatio_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getAspectRatio();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getAspectRatio();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getAspectRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getAspectRatio_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getAspectRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getAspectRatio_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getAspectRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2(void *pObjectXXXX, _in const void* offset )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset(*(EarthView::World::Spatial::Math::CVector2*)offset);
				else
					ptrNativeObject->setFrustumOffset(*(EarthView::World::Spatial::Math::CVector2*)offset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_CVector2_NoVirtual(void *pObjectXXXX, _in const void* offset )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset(*(EarthView::World::Spatial::Math::CVector2*)offset);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real(void *pObjectXXXX, _in Real horizontal, _in Real vertical )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset(horizontal, vertical);
				else
					ptrNativeObject->setFrustumOffset(horizontal, vertical);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Real_NoVirtual(void *pObjectXXXX, _in Real horizontal, _in Real vertical )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset(horizontal, vertical);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real(void *pObjectXXXX, _in Real horizontal )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset(horizontal);
				else
					ptrNativeObject->setFrustumOffset(horizontal);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Real_NoVirtual(void *pObjectXXXX, _in Real horizontal )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset(horizontal);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset();
				else
					ptrNativeObject->setFrustumOffset();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFrustumOffset_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFrustumOffset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumOffset_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumOffset();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector2& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumOffset();
					const EarthView::World::Spatial::Math::CVector2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector2& objXXXX = ptrNativeObject->getFrustumOffset();
					const EarthView::World::Spatial::Math::CVector2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumOffset_CVector2_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector2& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumOffset();
				const EarthView::World::Spatial::Math::CVector2 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFocalLength_void_Real(void *pObjectXXXX, _in Real focalLength )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFocalLength(focalLength);
				else
					ptrNativeObject->setFocalLength(focalLength);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFocalLength_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFocalLength_void_Real_NoVirtual(void *pObjectXXXX, _in Real focalLength )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFocalLength(focalLength);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFocalLength_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFocalLength();
				else
					ptrNativeObject->setFocalLength();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFocalLength_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFocalLength_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFocalLength_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFocalLength_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFocalLength();
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getFocalLength_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFocalLength();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getFocalLength();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFocalLength_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFocalLength_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFocalLength_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getFocalLength_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFocalLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real left, _in Real right, _in Real top, _in Real bottom )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumExtents(left, right, top, bottom);
				else
					ptrNativeObject->setFrustumExtents(left, right, top, bottom);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setFrustumExtents_void_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real left, _in Real right, _in Real top, _in Real bottom )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setFrustumExtents(left, right, top, bottom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_resetFrustumExtents_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::resetFrustumExtents();
				else
					ptrNativeObject->resetFrustumExtents();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_resetFrustumExtents_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_resetFrustumExtents_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::resetFrustumExtents();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real(void *pObjectXXXX, _inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumExtents(outleft, outright, outtop, outbottom);
				else
					ptrNativeObject->getFrustumExtents(outleft, outright, outtop, outbottom);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_getFrustumExtents_void_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumExtents(outleft, outright, outtop, outbottom);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionMatrixRS();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getProjectionMatrixRS();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrixRS_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionMatrixRS();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionMatrixWithRSDepth();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getProjectionMatrixWithRSDepth();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrixWithRSDepth_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionMatrixWithRSDepth();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getProjectionMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getProjectionMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getViewMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getViewMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getViewMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getViewMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4(void *pObjectXXXX, _in const void* relPos, _inout void* matToUpdate )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::calcViewMatrixRelative(*(EarthView::World::Spatial::Math::CVector3*)relPos, *(EarthView::World::Spatial::Math::CMatrix4*)matToUpdate);
				else
					ptrNativeObject->calcViewMatrixRelative(*(EarthView::World::Spatial::Math::CVector3*)relPos, *(EarthView::World::Spatial::Math::CMatrix4*)matToUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_calcViewMatrixRelative_void_CVector3_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* relPos, _inout void* matToUpdate )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::calcViewMatrixRelative(*(EarthView::World::Spatial::Math::CVector3*)relPos, *(EarthView::World::Spatial::Math::CMatrix4*)matToUpdate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4(void *pObjectXXXX, _in ev_bool enable, _in const void* viewMatrix )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomViewMatrix(enable, *(EarthView::World::Spatial::Math::CMatrix4*)viewMatrix);
				else
					ptrNativeObject->setCustomViewMatrix(enable, *(EarthView::World::Spatial::Math::CMatrix4*)viewMatrix);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_bool enable, _in const void* viewMatrix )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomViewMatrix(enable, *(EarthView::World::Spatial::Math::CMatrix4*)viewMatrix);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomViewMatrix(enable);
				else
					ptrNativeObject->setCustomViewMatrix(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomViewMatrix_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomViewMatrix(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isCustomViewMatrixEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isCustomViewMatrixEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isCustomViewMatrixEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isCustomViewMatrixEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4(void *pObjectXXXX, _in ev_bool enable, _in const void* projectionMatrix )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomProjectionMatrix(enable, *(EarthView::World::Spatial::Math::CMatrix4*)projectionMatrix);
				else
					ptrNativeObject->setCustomProjectionMatrix(enable, *(EarthView::World::Spatial::Math::CMatrix4*)projectionMatrix);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_bool enable, _in const void* projectionMatrix )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomProjectionMatrix(enable, *(EarthView::World::Spatial::Math::CMatrix4*)projectionMatrix);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomProjectionMatrix(enable);
				else
					ptrNativeObject->setCustomProjectionMatrix(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setCustomProjectionMatrix_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setCustomProjectionMatrix(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isCustomProjectionMatrixEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isCustomProjectionMatrixEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isCustomProjectionMatrixEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isCustomProjectionMatrixEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Math::CPlane*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CPlane* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumPlanes();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CPlane* objXXXX = ptrNativeObject->getFrustumPlanes();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Math::CPlane*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumPlanes_CPlane_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CPlane* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumPlanes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16(void *pObjectXXXX, _in ev_uint16 plane )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumPlane(plane);
					const EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->getFrustumPlane(plane);
					const EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getFrustumPlane_CPlane_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 plane )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getFrustumPlane(plane);
				const EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CAxisAlignedBox_NoVirtual(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CSphere_NoVirtual(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane(void *pObjectXXXX, _in const void* vert, _in int* culledBy )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* vert, _in int* culledBy )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3(void *pObjectXXXX, _in const void* vert )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isVisible_ev_bool_CVector3_NoVirtual(void *pObjectXXXX, _in const void* vert )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getTypeFlags();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getTypeFlags();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CFrustum_getTypeFlags_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getTypeFlags();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getBoundingBox();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::_updateRenderQueue(queue);
				else
					ptrNativeObject->_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum__updateRenderQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFrustum_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getMovableType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getMovableType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getMovableType_EVString_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFrustum_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::_notifyCurrentCamera(cam);
				else
					ptrNativeObject->_notifyCurrentCamera(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::_notifyCurrentCamera(cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType(void *pObjectXXXX, _in int pt )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setProjectionType((EarthView::World::Graphic::ProjectionType)pt);
				else
					ptrNativeObject->setProjectionType((EarthView::World::Graphic::ProjectionType)pt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setProjectionType_void_ProjectionType_NoVirtual(void *pObjectXXXX, _in int pt )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setProjectionType((EarthView::World::Graphic::ProjectionType)pt);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ProjectionType objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::ProjectionType objXXXX = ptrNativeObject->getProjectionType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CFrustum_getProjectionType_ProjectionType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				EarthView::World::Graphic::ProjectionType objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getProjectionType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real(void *pObjectXXXX, _in Real w, _in Real h )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setOrthoWindow(w, h);
				else
					ptrNativeObject->setOrthoWindow(w, h);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindow_void_Real_Real_NoVirtual(void *pObjectXXXX, _in Real w, _in Real h )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setOrthoWindow(w, h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real(void *pObjectXXXX, _in Real h )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setOrthoWindowHeight(h);
				else
					ptrNativeObject->setOrthoWindowHeight(h);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindowHeight_void_Real_NoVirtual(void *pObjectXXXX, _in Real h )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setOrthoWindowHeight(h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real(void *pObjectXXXX, _in Real w )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::setOrthoWindowWidth(w);
				else
					ptrNativeObject->setOrthoWindowWidth(w);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setOrthoWindowWidth_void_Real_NoVirtual(void *pObjectXXXX, _in Real w )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::setOrthoWindowWidth(w);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getOrthoWindowHeight();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getOrthoWindowHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getOrthoWindowHeight_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getOrthoWindowHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getOrthoWindowWidth();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getOrthoWindowWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrustum_getOrthoWindowWidth_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getOrthoWindowWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane(void *pObjectXXXX, _in const void* p )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::enableReflection(*(EarthView::World::Spatial::Math::CPlane*)p);
				else
					ptrNativeObject->enableReflection(*(EarthView::World::Spatial::Math::CPlane*)p);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableReflection_void_CPlane_NoVirtual(void *pObjectXXXX, _in const void* p )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::enableReflection(*(EarthView::World::Spatial::Math::CPlane*)p);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane(void *pObjectXXXX, _in const EarthView::World::Graphic::CMovablePlane* p )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::enableReflection(p);
				else
					ptrNativeObject->enableReflection(p);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableReflection_void_CMovablePlane_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CMovablePlane* p )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::enableReflection(p);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_disableReflection_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::disableReflection();
				else
					ptrNativeObject->disableReflection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_disableReflection_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_disableReflection_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_disableReflection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_disableReflection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::disableReflection();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isReflected_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isReflected();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isReflected();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isReflected_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isReflected_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isReflected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isReflected_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isReflected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getReflectionMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getReflectionMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getReflectionMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getReflectionMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getReflectionPlane();
					const EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->getReflectionPlane();
					const EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getReflectionPlane_CPlane_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getReflectionPlane();
				const EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(void *pObjectXXXX, _in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::projectSphere(*(EarthView::World::Spatial::Math::CSphere*)sphere, left, top, right, bottom);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->projectSphere(*(EarthView::World::Spatial::Math::CSphere*)sphere, left, top, right, bottom);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::projectSphere(*(EarthView::World::Spatial::Math::CSphere*)sphere, left, top, right, bottom);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane(void *pObjectXXXX, _in const EarthView::World::Graphic::CMovablePlane* plane )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::enableCustomNearClipPlane(plane);
				else
					ptrNativeObject->enableCustomNearClipPlane(plane);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CMovablePlane_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CMovablePlane* plane )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::enableCustomNearClipPlane(plane);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane(void *pObjectXXXX, _in const void* plane )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::enableCustomNearClipPlane(*(EarthView::World::Spatial::Math::CPlane*)plane);
				else
					ptrNativeObject->enableCustomNearClipPlane(*(EarthView::World::Spatial::Math::CPlane*)plane);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_enableCustomNearClipPlane_void_CPlane_NoVirtual(void *pObjectXXXX, _in const void* plane )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::enableCustomNearClipPlane(*(EarthView::World::Spatial::Math::CPlane*)plane);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::disableCustomNearClipPlane();
				else
					ptrNativeObject->disableCustomNearClipPlane();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_disableCustomNearClipPlane_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::disableCustomNearClipPlane();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isCustomNearClipPlaneEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isCustomNearClipPlaneEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrustum_isCustomNearClipPlaneEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::isCustomNearClipPlaneEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrustum::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrustum::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Graphic_CFrustum_INFINITE_FAR_PLANE_ADJUST()
			{
				const Real objXXXX = EarthView::World::Graphic::CFrustum::INFINITE_FAR_PLANE_ADJUST;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getPositionForViewUpdate();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPositionForViewUpdate();
					const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getPositionForViewUpdate_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getPositionForViewUpdate();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				if (dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getOrientationForViewUpdate();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getOrientationForViewUpdate();
					const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFrustum_getOrientationForViewUpdate_CQuaternion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrustum::getOrientationForViewUpdate();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrustum_getPlaneBoundedVolume_CPlaneBoundedVolume(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				EarthView::World::Spatial::Math::CPlaneBoundedVolume objXXXX = ptrNativeObject->getPlaneBoundedVolume();
				EarthView::World::Spatial::Math::CPlaneBoundedVolume *pXXXX = new EarthView::World::Spatial::Math::CPlaneBoundedVolume(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrustum_setOrientationMode_void_OrientationMode(void *pObjectXXXX, _in int orientationMode )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				ptrNativeObject->setOrientationMode((EarthView::World::Graphic::OrientationMode)orientationMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CFrustum_getOrientationMode_OrientationMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				EarthView::World::Graphic::OrientationMode objXXXX = ptrNativeObject->getOrientationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFrustum_caculateOrthoProjMatrix_CMatrix4_Real_Real_Real_Real_Real_Real(void *pObjectXXXX, _in Real left, _in Real right, _in Real top, _in Real bottom, _in Real nearClip, _in Real farClip )
			{
				EarthView::World::Graphic::CFrustum* ptrNativeObject = (EarthView::World::Graphic::CFrustum*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->caculateOrthoProjMatrix(left, right, top, bottom, nearClip, farClip);
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__getManager_CSceneManager_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getName_EVString_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getParentNode_CNode_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isAttached_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_detachFromParent_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isInScene_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__notifyMoved_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getVisible_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isVisible_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getSelected_IntVector_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_renderSelection_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_clearSelection_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_endEditing_void_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_queryLights_LightList_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_CFrustum__getLightList_LightList_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CFrustumProxy* ptr = dynamic_cast<CFrustumProxy*>((EarthView::World::Graphic::CFrustum*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrustum_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
		}
	}
}
