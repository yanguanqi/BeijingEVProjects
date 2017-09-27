/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_octreescenemanager/octreecamera.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef const EarthView::World::Graphic::CCamera::CCameraInternalRenderable*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback)(_in const void* anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* l);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* ref_lodCam);
			typedef const EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback)(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback)(_in const void* worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback)(_in ev_bool use);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback)(_in char*& newName);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback)();
			typedef EarthView::World::Graphic::CViewport*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback)();
			typedef const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback)(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback)(_in const void* fovy);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback)(_in Real nearDist);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback)(_in Real farDist);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback)(_in Real ratio);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback)(_in const void* offset);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback)(_in Real horizontal, _in Real vertical);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback)(_in Real horizontal);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback)(_in Real focalLength);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback)(_in Real left, _in Real right, _in Real top, _in Real bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback)(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback)(_in const void* relPos, _inout void* matToUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* viewMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* projectionMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback)();
			typedef const EarthView::World::Spatial::Math::CPlane*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback)(_in ev_uint16 plane);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback)(_in const void* vert, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_Callback)(_in const void* vert);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback)(_in int pt);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback)(_in Real w, _in Real h);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback)(_in Real h);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback)(_in Real w);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback)(_in const void* p);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* p);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback)(_in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* plane);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback)(_in const void* plane);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class COctreeCameraProxy : public EarthView::World::Graphic::COctreeCamera
			{
			private:
				EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* m_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback;
				EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback* m_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback;
				EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback* m_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback;
				EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback* m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback;
				EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback* m_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback;
				EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback* m_EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback;
				EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback* m_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback;
				EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback* m_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback;
				EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback* m_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback;
				EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback* m_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback;
				EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback* m_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback;
				EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback* m_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback;
				EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback* m_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback;
				EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback* m_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback;
				EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback* m_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback;
				EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback* m_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback;
				EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback* m_EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback;
				EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* m_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback;
				EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateView_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateView_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback;
				EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback* m_EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback;
				EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback* m_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback;
				EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback* m_EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback;
				EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback* m_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback;
				EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback* m_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback;
				EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback* m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback;
				EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback* m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback;
				EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback* m_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback;
				EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback* m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback;
				EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback* m_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback;
				EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback* m_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback;
				EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback;
				EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback;
				EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_Callback* m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_Callback;
				EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback;
				EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_Callback* m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_Callback;
				EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback* m_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback;
				EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback* m_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback;
				EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback* m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback;
				EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback* m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback;
				EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback* m_EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback;
				EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback* m_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback;
				EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback;
				EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback* m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback;
				EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback* m_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback;
				EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback* m_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback;
				EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback* m_EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback;
				EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback* m_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback;
				EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback* m_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback;
				EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback* m_EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback;
				EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback* m_EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback;
				EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback* m_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback;
				EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback* m_EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback;
				EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback* m_EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback;
				EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback* m_EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback;
				EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback* m_EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback;
				EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback* m_EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback;
				EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				COctreeCameraProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreeCamera(pList)
				{
					m_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateView_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable(EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void(EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener(EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener(EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4(EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool(EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode(EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool(EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera(EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera(EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real(EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_resetWindow_void(EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool(EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List(EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool(EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool(EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera(EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString(EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree(EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree(EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree(EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree(EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64(EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool(EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64(EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64(EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport(EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool(EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr(EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLights_LightList(EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real(EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustum_void(EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateView_void(EarthView_World_Graphic_COctreeCamera_updateView_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void(EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void(EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void(EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void(EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void(EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void(EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateVertexData_void(EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool(EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool(EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void(EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_invalidateView_void(EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian(EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian(EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real(EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real(EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real(EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real(EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real(EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real(EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2(EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real(EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real(EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void(EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2(EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real(EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void(EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real(EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void(EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4(EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4(EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4(EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4(EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool(EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool(EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool(EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool(EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane(EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16(EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox(EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane(EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere(EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane(EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3(EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType(EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType(EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real(EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real(EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real(EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real(EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real(EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane(EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane(EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_disableReflection_void(EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool(EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4(EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane(EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane(EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane(EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void(EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool(EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3(EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion(EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8(EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory(EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager(EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager(EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getName_EVString(EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString(EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode(EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode(EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool(EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode(EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool(EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_detachFromParent_void(EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool(EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__notifyMoved_void(EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList(EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32(EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real(EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool(EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool(EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool(EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real(EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real(EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real(EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real(EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue(EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector(EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector(EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_renderSelection_void(EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_clearSelection_void(EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_endEditing_void(EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32(EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener(EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32(EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_queryLights_LightList(EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32(EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32(EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera__getLightList_LightList(EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool(EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool(EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32(EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor(EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool(EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData(EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool(EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback(&bound, (int*)culledBy);
						return returnValue;
					}
					else
						return this->COctreeCamera::isVisible(bound, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback(&bound);
						return returnValue;
					}
					else
						return this->COctreeCamera::isVisible(bound);
				}
				virtual EarthView::World::Graphic::CCamera* clone(_in const EVString& newName) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newName_Char = newName.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback(newName_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->COctreeCamera::clone(newName);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->COctreeCamera::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* getCameraRenderablePtr()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* returnValue = m_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getCameraRenderablePtr();
				}
				virtual ev_bool isViewOutOfDate() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isViewOutOfDate();
				}
				virtual void invalidateFrustum() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback();
					}
					else
						return this->COctreeCamera::invalidateFrustum();
				}
				virtual void invalidateView() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback();
					}
					else
						return this->COctreeCamera::invalidateView();
				}
				virtual void setWindowImpl() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback();
					}
					else
						return this->COctreeCamera::setWindowImpl();
				}
				virtual EarthView::World::Spatial::Math::Vector4List getRayForwardIntersect(_in const EarthView::World::Spatial::Math::CVector3& anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::Vector4List returnValue = *(EarthView::World::Spatial::Math::Vector4List*)m_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback(&anchor, dir, planeOffset);
						return returnValue;
					}
					else
						return this->COctreeCamera::getRayForwardIntersect(anchor, dir, planeOffset);
				}
				virtual void addListener(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback(ref_l);
					}
					else
						return this->COctreeCamera::addListener(ref_l);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CCamera::CCameraListener* l)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback(l);
					}
					else
						return this->COctreeCamera::removeListener(l);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getAbsoluteProjectMatrix() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getAbsoluteProjectMatrix();
				}
				virtual ev_bool isLockingToTarget() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isLockingToTarget();
				}
				virtual EarthView::World::Graphic::CSceneNode* getLockTarget()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLockTarget();
				}
				virtual ev_bool isSlaveCamera()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isSlaveCamera();
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getMovableType();
				}
				virtual void setLodCamera(_in const EarthView::World::Graphic::CCamera* ref_lodCam)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback(ref_lodCam);
					}
					else
						return this->COctreeCamera::setLodCamera(ref_lodCam);
				}
				virtual const EarthView::World::Graphic::CCamera* getLodCamera() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLodCamera();
				}
				virtual void setWindow(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback(Left, Top, Right, Bottom);
					}
					else
						return this->COctreeCamera::setWindow(Left, Top, Right, Bottom);
				}
				virtual void resetWindow()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback();
					}
					else
						return this->COctreeCamera::resetWindow();
				}
				virtual ev_bool isWindowSet() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isWindowSet();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getBoundingRadius();
				}
				virtual void forwardIntersect(_in const EarthView::World::Spatial::Math::CPlane& worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback(&worldPlane, intersect3d);
					}
					else
						return this->COctreeCamera::forwardIntersect(worldPlane, intersect3d);
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getFrustumPlane(_in ev_uint16 plane) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback(plane);
						return returnValue;
					}
					else
						return this->COctreeCamera::getFrustumPlane(plane);
				}
				virtual ev_bool projectSphere(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback(&sphere, left, top, right, bottom);
						return returnValue;
					}
					else
						return this->COctreeCamera::projectSphere(sphere, left, top, right, bottom);
				}
				virtual Real getNearClipDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getNearClipDistance();
				}
				virtual Real getFarClipDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getFarClipDistance();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getViewMatrix() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getViewMatrix();
				}
				virtual void setUseRenderingDistance(_in ev_bool use)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback(use);
					}
					else
						return this->COctreeCamera::setUseRenderingDistance(use);
				}
				virtual ev_bool getUseRenderingDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getUseRenderingDistance();
				}
				virtual void synchroniseBaseSettingsWith(_in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback(cam);
					}
					else
						return this->COctreeCamera::synchroniseBaseSettingsWith(cam);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPositionForViewUpdate() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getPositionForViewUpdate();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientationForViewUpdate() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getOrientationForViewUpdate();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getHeading() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getHeading();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getTilt() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getTilt();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLatitude() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLatitude();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLongitude() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLongitude();
				}
				virtual ev_real64 getAltitude() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getAltitude();
				}
				virtual ev_bool isUnderGround() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isUnderGround();
				}
				virtual ev_real64 getCameraDistanceOfGround() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getCameraDistanceOfGround();
				}
				virtual ev_real64 getAltitudeUnderCamera() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getAltitudeUnderCamera();
				}
				virtual EarthView::World::Graphic::CViewport* getGlobeViewport() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CViewport* returnValue = m_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getGlobeViewport();
				}
				virtual ev_bool hasChanged() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::hasChanged();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->COctreeCamera::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->COctreeCamera::getRenderOperation(op);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLights();
				}
				virtual const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* getFrustumRenderablePtr()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* returnValue = m_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getFrustumRenderablePtr();
				}
				virtual void calcProjectionParameters(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback(left, right, bottom, top);
					}
					else
						return this->COctreeCamera::calcProjectionParameters(left, right, bottom, top);
				}
				virtual void updateFrustum() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback();
					}
					else
						return this->COctreeCamera::updateFrustum();
				}
				virtual void updateView() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateView_void_Callback();
					}
					else
						return this->COctreeCamera::updateView();
				}
				virtual void updateFrustumImpl() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback();
					}
					else
						return this->COctreeCamera::updateFrustumImpl();
				}
				virtual void updateViewImpl() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback();
					}
					else
						return this->COctreeCamera::updateViewImpl();
				}
				virtual void updateFrustumPlanes() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback();
					}
					else
						return this->COctreeCamera::updateFrustumPlanes();
				}
				virtual void updateFrustumPlanesImpl() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback();
					}
					else
						return this->COctreeCamera::updateFrustumPlanesImpl();
				}
				virtual void updateWorldSpaceCorners() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback();
					}
					else
						return this->COctreeCamera::updateWorldSpaceCorners();
				}
				virtual void updateWorldSpaceCornersImpl() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback();
					}
					else
						return this->COctreeCamera::updateWorldSpaceCornersImpl();
				}
				virtual void updateVertexData() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback();
					}
					else
						return this->COctreeCamera::updateVertexData();
				}
				virtual ev_bool isFrustumOutOfDate() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isFrustumOutOfDate();
				}
				virtual void setFOVy(_in const EarthView::World::Spatial::Math::CRadian& fovy)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback(&fovy);
					}
					else
						return this->COctreeCamera::setFOVy(fovy);
				}
				virtual const EarthView::World::Spatial::Math::CRadian& getFOVy() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getFOVy();
				}
				virtual void setNearClipDistance(_in Real nearDist)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback(nearDist);
					}
					else
						return this->COctreeCamera::setNearClipDistance(nearDist);
				}
				virtual void setFarClipDistance(_in Real farDist)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback(farDist);
					}
					else
						return this->COctreeCamera::setFarClipDistance(farDist);
				}
				virtual void setAspectRatio(_in Real ratio)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback(ratio);
					}
					else
						return this->COctreeCamera::setAspectRatio(ratio);
				}
				virtual Real getAspectRatio() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getAspectRatio();
				}
				virtual void setFrustumOffset(_in const EarthView::World::Spatial::Math::CVector2& offset)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback(&offset);
					}
					else
						return this->COctreeCamera::setFrustumOffset(offset);
				}
				virtual void setFrustumOffset(_in Real horizontal, _in Real vertical)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback(horizontal, vertical);
					}
					else
						return this->COctreeCamera::setFrustumOffset(horizontal, vertical);
				}
				virtual void setFrustumOffset(_in Real horizontal)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback(horizontal);
					}
					else
						return this->COctreeCamera::setFrustumOffset(horizontal);
				}
				virtual void setFrustumOffset()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback();
					}
					else
						return this->COctreeCamera::setFrustumOffset();
				}
				virtual const EarthView::World::Spatial::Math::CVector2& getFrustumOffset() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector2& returnValue = *(EarthView::World::Spatial::Math::CVector2*)m_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getFrustumOffset();
				}
				virtual void setFocalLength(_in Real focalLength)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback(focalLength);
					}
					else
						return this->COctreeCamera::setFocalLength(focalLength);
				}
				virtual void setFocalLength()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback();
					}
					else
						return this->COctreeCamera::setFocalLength();
				}
				virtual Real getFocalLength() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getFocalLength();
				}
				virtual void setFrustumExtents(_in Real left, _in Real right, _in Real top, _in Real bottom)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback(left, right, top, bottom);
					}
					else
						return this->COctreeCamera::setFrustumExtents(left, right, top, bottom);
				}
				virtual void resetFrustumExtents()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback();
					}
					else
						return this->COctreeCamera::resetFrustumExtents();
				}
				virtual void getFrustumExtents(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback(outleft, outright, outtop, outbottom);
					}
					else
						return this->COctreeCamera::getFrustumExtents(outleft, outright, outtop, outbottom);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixRS() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getProjectionMatrixRS();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixWithRSDepth() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getProjectionMatrixWithRSDepth();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrix() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getProjectionMatrix();
				}
				virtual void calcViewMatrixRelative(_in const EarthView::World::Spatial::Math::CVector3& relPos, _inout EarthView::World::Spatial::Math::CMatrix4& matToUpdate) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback(&relPos, &matToUpdate);
					}
					else
						return this->COctreeCamera::calcViewMatrixRelative(relPos, matToUpdate);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback(enable, &viewMatrix);
					}
					else
						return this->COctreeCamera::setCustomViewMatrix(enable, viewMatrix);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->COctreeCamera::setCustomViewMatrix(enable);
				}
				virtual ev_bool isCustomViewMatrixEnabled() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isCustomViewMatrixEnabled();
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& projectionMatrix)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback(enable, &projectionMatrix);
					}
					else
						return this->COctreeCamera::setCustomProjectionMatrix(enable, projectionMatrix);
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->COctreeCamera::setCustomProjectionMatrix(enable);
				}
				virtual ev_bool isCustomProjectionMatrixEnabled() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isCustomProjectionMatrixEnabled();
				}
				virtual const EarthView::World::Spatial::Math::CPlane* getFrustumPlanes() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane* returnValue = m_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getFrustumPlanes();
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getTypeFlags();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getBoundingBox();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->COctreeCamera::_updateRenderQueue(queue);
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->COctreeCamera::_notifyCurrentCamera(cam);
				}
				virtual void setProjectionType(_in EarthView::World::Graphic::ProjectionType pt)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback((int)pt);
					}
					else
						return this->COctreeCamera::setProjectionType(pt);
				}
				virtual EarthView::World::Graphic::ProjectionType getProjectionType() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ProjectionType returnValue = (EarthView::World::Graphic::ProjectionType)m_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getProjectionType();
				}
				virtual void setOrthoWindow(_in Real w, _in Real h)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback(w, h);
					}
					else
						return this->COctreeCamera::setOrthoWindow(w, h);
				}
				virtual void setOrthoWindowHeight(_in Real h)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback(h);
					}
					else
						return this->COctreeCamera::setOrthoWindowHeight(h);
				}
				virtual void setOrthoWindowWidth(_in Real w)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback(w);
					}
					else
						return this->COctreeCamera::setOrthoWindowWidth(w);
				}
				virtual Real getOrthoWindowHeight() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getOrthoWindowHeight();
				}
				virtual Real getOrthoWindowWidth() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getOrthoWindowWidth();
				}
				virtual void enableReflection(_in const EarthView::World::Spatial::Math::CPlane& p)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback(&p);
					}
					else
						return this->COctreeCamera::enableReflection(p);
				}
				virtual void enableReflection(_in const EarthView::World::Graphic::CMovablePlane* p)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback(p);
					}
					else
						return this->COctreeCamera::enableReflection(p);
				}
				virtual void disableReflection()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback();
					}
					else
						return this->COctreeCamera::disableReflection();
				}
				virtual ev_bool isReflected() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isReflected();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getReflectionMatrix() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getReflectionMatrix();
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getReflectionPlane() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getReflectionPlane();
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Graphic::CMovablePlane* plane)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback(plane);
					}
					else
						return this->COctreeCamera::enableCustomNearClipPlane(plane);
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Spatial::Math::CPlane& plane)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback(&plane);
					}
					else
						return this->COctreeCamera::enableCustomNearClipPlane(plane);
				}
				virtual void disableCustomNearClipPlane()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback();
					}
					else
						return this->COctreeCamera::disableCustomNearClipPlane();
				}
				virtual ev_bool isCustomNearClipPlaneEnabled() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isCustomNearClipPlaneEnabled();
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->COctreeCamera::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->COctreeCamera::visitRenderables(visitor);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->COctreeCamera::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->COctreeCamera::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->COctreeCamera::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->COctreeCamera::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback();
					}
					else
						return this->COctreeCamera::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback();
					}
					else
						return this->COctreeCamera::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->COctreeCamera::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->COctreeCamera::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->COctreeCamera::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->COctreeCamera::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->COctreeCamera::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->COctreeCamera::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->COctreeCamera::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->COctreeCamera::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->COctreeCamera::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->COctreeCamera::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->COctreeCamera::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->COctreeCamera::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->COctreeCamera::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->COctreeCamera::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->COctreeCamera::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback();
					}
					else
						return this->COctreeCamera::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback();
					}
					else
						return this->COctreeCamera::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->COctreeCamera::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback();
					}
					else
						return this->COctreeCamera::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->COctreeCamera::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->COctreeCamera::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->COctreeCamera::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->COctreeCamera::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->COctreeCamera::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->COctreeCamera::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->COctreeCamera::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->COctreeCamera::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->COctreeCamera::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->COctreeCamera::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getVisibilityFlags();
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->COctreeCamera::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeCamera::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->COctreeCamera::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->COctreeCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->COctreeCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->COctreeCamera::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->COctreeCamera::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->COctreeCamera::getPointExtrusionDistance(l);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->COctreeCamera::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeCamera::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->COctreeCamera::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->COctreeCamera::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->COctreeCamera::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(COctreeCameraProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_COctreeCamera_getVisibility_Visibility_CAxisAlignedBox(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::COctreeCamera* ptrNativeObject = (EarthView::World::Graphic::COctreeCamera*) pObjectXXXX;
				EarthView::World::Graphic::COctreeCamera::Visibility objXXXX = ptrNativeObject->getVisibility(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::COctreeCamera* ptrNativeObject = (EarthView::World::Graphic::COctreeCamera*) pObjectXXXX;
				if (dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::COctreeCamera* ptrNativeObject = (EarthView::World::Graphic::COctreeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::COctreeCamera* ptrNativeObject = (EarthView::World::Graphic::COctreeCamera*) pObjectXXXX;
				if (dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CAxisAlignedBox_NoVirtual(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::COctreeCamera* ptrNativeObject = (EarthView::World::Graphic::COctreeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeCamera_OperatorAssign_void_COctreeCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::COctreeCamera& objXXXX = *((EarthView::World::Graphic::COctreeCamera*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::COctreeCamera*)rhs;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::COctreeCamera* ptrNativeObject = (EarthView::World::Graphic::COctreeCamera*) pObjectXXXX;
				if (dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeCamera::clone(newName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->clone(newName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_COctreeCamera_clone_CCamera_EVString_NoVirtual(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::COctreeCamera* ptrNativeObject = (EarthView::World::Graphic::COctreeCamera*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeCamera::clone(newName1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getCameraRenderablePtr_CCameraInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setWindowImpl_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setWindowImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getAbsoluteProjectMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isLockingToTarget_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLockTarget_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isSlaveCamera_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setLodCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLodCamera_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setWindow_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_resetWindow_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_resetWindow_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_resetWindow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isWindowSet_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_forwardIntersect_void_CPlane_Vector4List(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setUseRenderingDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getUseRenderingDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_synchroniseBaseSettingsWith_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getHeading_CDegree_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getHeading_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getTilt_CDegree_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getTilt_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLatitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLongitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getAltitude_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isUnderGround_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getCameraDistanceOfGround_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getAltitudeUnderCamera_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getGlobeViewport_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_hasChanged_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLights_LightList_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_calcProjectionParameters_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustum_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateFrustum_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateView_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateView_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateViewImpl_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateViewImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanes_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateFrustumPlanesImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCorners_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateWorldSpaceCornersImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateVertexData_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateVertexData_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateVertexData_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isViewOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isFrustumOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_invalidateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_invalidateView_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_invalidateView_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_invalidateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFOVy_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFOVy_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setNearClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getNearClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFarClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFarClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setAspectRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getAspectRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumOffset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumOffset_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFocalLength_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFocalLength_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFocalLength_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFocalLength_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_resetFrustumExtents_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixRS_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrixWithRSDepth_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getViewMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomViewMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isCustomViewMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setCustomProjectionMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isCustomProjectionMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlanes_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getFrustumPlane_CPlane_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setProjectionType_void_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getProjectionType_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindow_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowHeight_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setOrthoWindowWidth_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowHeight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getOrthoWindowWidth_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_enableReflection_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_disableReflection_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_disableReflection_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_disableReflection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isReflected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getReflectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getReflectionPlane_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_enableCustomNearClipPlane_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_disableCustomNearClipPlane_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isCustomNearClipPlaneEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getPositionForViewUpdate_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getOrientationForViewUpdate_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getName_EVString_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getMovableType_EVString_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getParentNode_CNode_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_detachFromParent_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__notifyMoved_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getSelected_IntVector_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_renderSelection_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_clearSelection_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_endEditing_void_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_queryLights_LightList_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera__getLightList_LightList_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				COctreeCameraProxy* ptr = dynamic_cast<COctreeCameraProxy*>((EarthView::World::Graphic::COctreeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
		}
	}
}
