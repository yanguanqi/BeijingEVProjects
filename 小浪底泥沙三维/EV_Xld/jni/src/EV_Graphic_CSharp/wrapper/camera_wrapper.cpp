/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/camera.h"
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
			typedef const EarthView::World::Graphic::CCamera::CCameraInternalRenderable*  ( _stdcall EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback)(_in const void* anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* l);
			typedef void*  ( _stdcall EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* ref_lodCam);
			typedef const EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback)(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_resetWindow_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback)(_in const void* worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback)(_in ev_bool use);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback)(_in char*& newName);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback)();
			typedef EarthView::World::Graphic::CViewport*  ( _stdcall EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getLights_LightList_Callback)();
			typedef const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*  ( _stdcall EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback)(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateVertexData_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_invalidateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback)(_in const void* fovy);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback)(_in Real nearDist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback)(_in Real farDist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback)(_in Real ratio);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback)(_in const void* offset);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback)(_in Real horizontal, _in Real vertical);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback)(_in Real horizontal);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback)(_in Real focalLength);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFocalLength_void_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback)(_in Real left, _in Real right, _in Real top, _in Real bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback)(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback)(_in const void* relPos, _inout void* matToUpdate);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* viewMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* projectionMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback)();
			typedef const EarthView::World::Spatial::Math::CPlane*  ( _stdcall EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback)(_in ev_uint16 plane);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback)(_in const void* vert, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback)(_in const void* vert);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback)(_in int pt);
			typedef int  ( _stdcall EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback)(_in Real w, _in Real h);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback)(_in Real h);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback)(_in Real w);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback)(_in const void* p);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* p);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_disableReflection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback)(_in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* plane);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback)(_in const void* plane);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CCamera_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_CCamera__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CCameraProxy : public EarthView::World::Graphic::CCamera
			{
			private:
				EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* m_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback;
				EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback* m_EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback;
				EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* m_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback;
				EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback* m_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback;
				EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback* m_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback;
				EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback* m_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback;
				EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback* m_EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback;
				EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CCamera_resetWindow_void_Callback* m_EarthView_World_Graphic_CCamera_resetWindow_void_Callback;
				EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback* m_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback;
				EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* m_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback;
				EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback* m_EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback;
				EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback* m_EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback;
				EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback* m_EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback;
				EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback* m_EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback;
				EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback* m_EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback;
				EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback* m_EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback;
				EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback* m_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback;
				EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback* m_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback;
				EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback* m_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback;
				EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_getLights_LightList_Callback* m_EarthView_World_Graphic_CCamera_getLights_LightList_Callback;
				EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* m_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback;
				EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CCamera_updateFrustum_void_Callback* m_EarthView_World_Graphic_CCamera_updateFrustum_void_Callback;
				EarthView_World_Graphic_CCamera_updateView_void_Callback* m_EarthView_World_Graphic_CCamera_updateView_void_Callback;
				EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback* m_EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback;
				EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback* m_EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback;
				EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback* m_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback;
				EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback* m_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback;
				EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback* m_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback;
				EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback* m_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback;
				EarthView_World_Graphic_CCamera_updateVertexData_void_Callback* m_EarthView_World_Graphic_CCamera_updateVertexData_void_Callback;
				EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback* m_EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback;
				EarthView_World_Graphic_CCamera_invalidateView_void_Callback* m_EarthView_World_Graphic_CCamera_invalidateView_void_Callback;
				EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback* m_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback;
				EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback* m_EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback;
				EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback;
				EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback* m_EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback;
				EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback;
				EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback* m_EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback;
				EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback;
				EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback* m_EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback;
				EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback* m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback;
				EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback* m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback;
				EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback;
				EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback* m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback;
				EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback* m_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback;
				EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback;
				EarthView_World_Graphic_CCamera_setFocalLength_void_Callback* m_EarthView_World_Graphic_CCamera_setFocalLength_void_Callback;
				EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback* m_EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback;
				EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback* m_EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback;
				EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback* m_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback;
				EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback* m_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback;
				EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback;
				EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback;
				EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback* m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback;
				EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback;
				EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback* m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback;
				EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback* m_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback;
				EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback* m_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback;
				EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback* m_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback;
				EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback;
				EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback;
				EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback* m_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback;
				EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback* m_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback;
				EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback* m_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback;
				EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback* m_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback;
				EarthView_World_Graphic_CCamera_disableReflection_void_Callback* m_EarthView_World_Graphic_CCamera_disableReflection_void_Callback;
				EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback* m_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback;
				EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback;
				EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback* m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback;
				EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback* m_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback;
				EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback* m_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback;
				EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback* m_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback;
				EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_CCamera_getName_EVString_Callback* m_EarthView_World_Graphic_CCamera_getName_EVString_Callback;
				EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback* m_EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback;
				EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_detachFromParent_void_Callback* m_EarthView_World_Graphic_CCamera_detachFromParent_void_Callback;
				EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_CCamera__notifyMoved_void_Callback* m_EarthView_World_Graphic_CCamera__notifyMoved_void_Callback;
				EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback* m_EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback;
				EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CCamera_renderSelection_void_Callback* m_EarthView_World_Graphic_CCamera_renderSelection_void_Callback;
				EarthView_World_Graphic_CCamera_clearSelection_void_Callback* m_EarthView_World_Graphic_CCamera_clearSelection_void_Callback;
				EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_endEditing_void_Callback* m_EarthView_World_Graphic_CCamera_endEditing_void_Callback;
				EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_queryLights_LightList_Callback* m_EarthView_World_Graphic_CCamera_queryLights_LightList_Callback;
				EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera__getLightList_LightList_Callback* m_EarthView_World_Graphic_CCamera__getLightList_LightList_Callback;
				EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CCameraProxy(EarthView::World::Core::CNameValuePairList *pList) : CCamera(pList)
				{
					m_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_resetWindow_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateFrustum_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateView_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateVertexData_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_invalidateView_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFocalLength_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_disableReflection_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable(EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setWindowImpl_void(EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener(EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener(EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4(EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool(EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode(EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool(EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera(EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLodCamera_CCamera(EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real(EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_resetWindow_void(EarthView_World_Graphic_CCamera_resetWindow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_resetWindow_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool(EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List(EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool(EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool(EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera(EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_clone_CCamera_EVString(EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getHeading_CDegree(EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getTilt_CDegree(EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLatitude_CDegree(EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLongitude_CDegree(EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getAltitude_ev_real64(EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool(EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64(EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64(EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport(EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_hasChanged_ev_bool(EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr(EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLights_LightList(EarthView_World_Graphic_CCamera_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real(EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateFrustum_void(EarthView_World_Graphic_CCamera_updateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateView_void(EarthView_World_Graphic_CCamera_updateView_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateFrustumImpl_void(EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateViewImpl_void(EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void(EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void(EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void(EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void(EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateVertexData_void(EarthView_World_Graphic_CCamera_updateVertexData_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateVertexData_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool(EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool(EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_invalidateFrustum_void(EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_invalidateView_void(EarthView_World_Graphic_CCamera_invalidateView_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_invalidateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian(EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFOVy_CRadian(EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real(EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getNearClipDistance_Real(EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real(EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFarClipDistance_Real(EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real(EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getAspectRatio_Real(EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2(EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real(EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real(EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void(EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2(EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFocalLength_void_Real(EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFocalLength_void(EarthView_World_Graphic_CCamera_setFocalLength_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFocalLength_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFocalLength_Real(EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_resetFrustumExtents_void(EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4(EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4(EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4(EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4(EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool(EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool(EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool(EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool(EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane(EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16(EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox(EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane(EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere(EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane(EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3(EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType(EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType(EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real(EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real(EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real(EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real(EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real(EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane(EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane(EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_disableReflection_void(EarthView_World_Graphic_CCamera_disableReflection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_disableReflection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isReflected_ev_bool(EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4(EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane(EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane(EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane(EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void(EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool(EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3(EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion(EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8(EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory(EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager(EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__getManager_CSceneManager(EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getName_EVString(EarthView_World_Graphic_CCamera_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getMovableType_EVString(EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getParentNode_CNode(EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode(EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool(EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode(EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isAttached_ev_bool(EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_detachFromParent_void(EarthView_World_Graphic_CCamera_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isInScene_ev_bool(EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__notifyMoved_void(EarthView_World_Graphic_CCamera__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList(EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32(EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getBoundingRadius_Real(EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool(EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getVisible_ev_bool(EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool(EarthView_World_Graphic_CCamera_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real(EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real(EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real(EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real(EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue(EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector(EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getSelected_IntVector(EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_renderSelection_void(EarthView_World_Graphic_CCamera_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_clearSelection_void(EarthView_World_Graphic_CCamera_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_endEditing_void(EarthView_World_Graphic_CCamera_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32(EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener(EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32(EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_queryLights_LightList(EarthView_World_Graphic_CCamera_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32(EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32(EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera__getLightList_LightList(EarthView_World_Graphic_CCamera__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool(EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool(EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32(EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor(EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool(EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData(EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool(EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CCamera::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* getCameraRenderablePtr()
				{
					if(m_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* returnValue = m_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getCameraRenderablePtr();
				}
				virtual ev_bool isViewOutOfDate() const
				{
					if(m_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isViewOutOfDate();
				}
				virtual void invalidateFrustum() const
				{
					if(m_EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback();
					}
					else
						return this->CCamera::invalidateFrustum();
				}
				virtual void invalidateView() const
				{
					if(m_EarthView_World_Graphic_CCamera_invalidateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_invalidateView_void_Callback();
					}
					else
						return this->CCamera::invalidateView();
				}
				virtual void setWindowImpl() const
				{
					if(m_EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback();
					}
					else
						return this->CCamera::setWindowImpl();
				}
				virtual EarthView::World::Spatial::Math::Vector4List getRayForwardIntersect(_in const EarthView::World::Spatial::Math::CVector3& anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset) const
				{
					if(m_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::Vector4List returnValue = *(EarthView::World::Spatial::Math::Vector4List*)m_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback(&anchor, dir, planeOffset);
						return returnValue;
					}
					else
						return this->CCamera::getRayForwardIntersect(anchor, dir, planeOffset);
				}
				virtual void addListener(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l)
				{
					if(m_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback(ref_l);
					}
					else
						return this->CCamera::addListener(ref_l);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CCamera::CCameraListener* l)
				{
					if(m_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback(l);
					}
					else
						return this->CCamera::removeListener(l);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getAbsoluteProjectMatrix() const
				{
					if(m_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getAbsoluteProjectMatrix();
				}
				virtual ev_bool isLockingToTarget() const
				{
					if(m_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isLockingToTarget();
				}
				virtual EarthView::World::Graphic::CSceneNode* getLockTarget()
				{
					if(m_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLockTarget();
				}
				virtual ev_bool isSlaveCamera()
				{
					if(m_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isSlaveCamera();
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getMovableType();
				}
				virtual void setLodCamera(_in const EarthView::World::Graphic::CCamera* ref_lodCam)
				{
					if(m_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback(ref_lodCam);
					}
					else
						return this->CCamera::setLodCamera(ref_lodCam);
				}
				virtual const EarthView::World::Graphic::CCamera* getLodCamera() const
				{
					if(m_EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLodCamera();
				}
				virtual void setWindow(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom)
				{
					if(m_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback(Left, Top, Right, Bottom);
					}
					else
						return this->CCamera::setWindow(Left, Top, Right, Bottom);
				}
				virtual void resetWindow()
				{
					if(m_EarthView_World_Graphic_CCamera_resetWindow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_resetWindow_void_Callback();
					}
					else
						return this->CCamera::resetWindow();
				}
				virtual ev_bool isWindowSet() const
				{
					if(m_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isWindowSet();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getBoundingRadius();
				}
				virtual void forwardIntersect(_in const EarthView::World::Spatial::Math::CPlane& worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d) const
				{
					if(m_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback(&worldPlane, intersect3d);
					}
					else
						return this->CCamera::forwardIntersect(worldPlane, intersect3d);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback(&bound, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CCamera::isVisible(bound, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound) const
				{
					if(m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback(&bound);
						return returnValue;
					}
					else
						return this->CCamera::isVisible(bound);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CSphere& bound, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback(&bound, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CCamera::isVisible(bound, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CSphere& bound) const
				{
					if(m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback(&bound);
						return returnValue;
					}
					else
						return this->CCamera::isVisible(bound);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CVector3& vert, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback(&vert, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CCamera::isVisible(vert, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CVector3& vert) const
				{
					if(m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback(&vert);
						return returnValue;
					}
					else
						return this->CCamera::isVisible(vert);
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getFrustumPlane(_in ev_uint16 plane) const
				{
					if(m_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback(plane);
						return returnValue;
					}
					else
						return this->CCamera::getFrustumPlane(plane);
				}
				virtual ev_bool projectSphere(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom) const
				{
					if(m_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback(&sphere, left, top, right, bottom);
						return returnValue;
					}
					else
						return this->CCamera::projectSphere(sphere, left, top, right, bottom);
				}
				virtual Real getNearClipDistance() const
				{
					if(m_EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getNearClipDistance();
				}
				virtual Real getFarClipDistance() const
				{
					if(m_EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getFarClipDistance();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getViewMatrix() const
				{
					if(m_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getViewMatrix();
				}
				virtual void setUseRenderingDistance(_in ev_bool use)
				{
					if(m_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback(use);
					}
					else
						return this->CCamera::setUseRenderingDistance(use);
				}
				virtual ev_bool getUseRenderingDistance() const
				{
					if(m_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getUseRenderingDistance();
				}
				virtual void synchroniseBaseSettingsWith(_in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback(cam);
					}
					else
						return this->CCamera::synchroniseBaseSettingsWith(cam);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPositionForViewUpdate() const
				{
					if(m_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getPositionForViewUpdate();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientationForViewUpdate() const
				{
					if(m_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getOrientationForViewUpdate();
				}
				virtual EarthView::World::Graphic::CCamera* clone(_in const EVString& newName) const
				{
					if(m_EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newName_Char = newName.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback(newName_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CCamera::clone(newName);
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getHeading() const
				{
					if(m_EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getHeading();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getTilt() const
				{
					if(m_EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getTilt();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLatitude() const
				{
					if(m_EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLatitude();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLongitude() const
				{
					if(m_EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLongitude();
				}
				virtual ev_real64 getAltitude() const
				{
					if(m_EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getAltitude();
				}
				virtual ev_bool isUnderGround() const
				{
					if(m_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isUnderGround();
				}
				virtual ev_real64 getCameraDistanceOfGround() const
				{
					if(m_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getCameraDistanceOfGround();
				}
				virtual ev_real64 getAltitudeUnderCamera() const
				{
					if(m_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getAltitudeUnderCamera();
				}
				virtual EarthView::World::Graphic::CViewport* getGlobeViewport() const
				{
					if(m_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CViewport* returnValue = m_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getGlobeViewport();
				}
				virtual ev_bool hasChanged() const
				{
					if(m_EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::hasChanged();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CCamera::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CCamera::getRenderOperation(op);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CCamera_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CCamera_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLights();
				}
				virtual const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* getFrustumRenderablePtr()
				{
					if(m_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* returnValue = m_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getFrustumRenderablePtr();
				}
				virtual void calcProjectionParameters(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top) const
				{
					if(m_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback(left, right, bottom, top);
					}
					else
						return this->CCamera::calcProjectionParameters(left, right, bottom, top);
				}
				virtual void updateFrustum() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateFrustum_void_Callback();
					}
					else
						return this->CCamera::updateFrustum();
				}
				virtual void updateView() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateView_void_Callback();
					}
					else
						return this->CCamera::updateView();
				}
				virtual void updateFrustumImpl() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback();
					}
					else
						return this->CCamera::updateFrustumImpl();
				}
				virtual void updateViewImpl() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback();
					}
					else
						return this->CCamera::updateViewImpl();
				}
				virtual void updateFrustumPlanes() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback();
					}
					else
						return this->CCamera::updateFrustumPlanes();
				}
				virtual void updateFrustumPlanesImpl() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback();
					}
					else
						return this->CCamera::updateFrustumPlanesImpl();
				}
				virtual void updateWorldSpaceCorners() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback();
					}
					else
						return this->CCamera::updateWorldSpaceCorners();
				}
				virtual void updateWorldSpaceCornersImpl() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback();
					}
					else
						return this->CCamera::updateWorldSpaceCornersImpl();
				}
				virtual void updateVertexData() const
				{
					if(m_EarthView_World_Graphic_CCamera_updateVertexData_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateVertexData_void_Callback();
					}
					else
						return this->CCamera::updateVertexData();
				}
				virtual ev_bool isFrustumOutOfDate() const
				{
					if(m_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isFrustumOutOfDate();
				}
				virtual void setFOVy(_in const EarthView::World::Spatial::Math::CRadian& fovy)
				{
					if(m_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback(&fovy);
					}
					else
						return this->CCamera::setFOVy(fovy);
				}
				virtual const EarthView::World::Spatial::Math::CRadian& getFOVy() const
				{
					if(m_EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getFOVy();
				}
				virtual void setNearClipDistance(_in Real nearDist)
				{
					if(m_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback(nearDist);
					}
					else
						return this->CCamera::setNearClipDistance(nearDist);
				}
				virtual void setFarClipDistance(_in Real farDist)
				{
					if(m_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback(farDist);
					}
					else
						return this->CCamera::setFarClipDistance(farDist);
				}
				virtual void setAspectRatio(_in Real ratio)
				{
					if(m_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback(ratio);
					}
					else
						return this->CCamera::setAspectRatio(ratio);
				}
				virtual Real getAspectRatio() const
				{
					if(m_EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getAspectRatio();
				}
				virtual void setFrustumOffset(_in const EarthView::World::Spatial::Math::CVector2& offset)
				{
					if(m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback(&offset);
					}
					else
						return this->CCamera::setFrustumOffset(offset);
				}
				virtual void setFrustumOffset(_in Real horizontal, _in Real vertical)
				{
					if(m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback(horizontal, vertical);
					}
					else
						return this->CCamera::setFrustumOffset(horizontal, vertical);
				}
				virtual void setFrustumOffset(_in Real horizontal)
				{
					if(m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback(horizontal);
					}
					else
						return this->CCamera::setFrustumOffset(horizontal);
				}
				virtual void setFrustumOffset()
				{
					if(m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback();
					}
					else
						return this->CCamera::setFrustumOffset();
				}
				virtual const EarthView::World::Spatial::Math::CVector2& getFrustumOffset() const
				{
					if(m_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector2& returnValue = *(EarthView::World::Spatial::Math::CVector2*)m_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getFrustumOffset();
				}
				virtual void setFocalLength(_in Real focalLength)
				{
					if(m_EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback(focalLength);
					}
					else
						return this->CCamera::setFocalLength(focalLength);
				}
				virtual void setFocalLength()
				{
					if(m_EarthView_World_Graphic_CCamera_setFocalLength_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFocalLength_void_Callback();
					}
					else
						return this->CCamera::setFocalLength();
				}
				virtual Real getFocalLength() const
				{
					if(m_EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getFocalLength();
				}
				virtual void setFrustumExtents(_in Real left, _in Real right, _in Real top, _in Real bottom)
				{
					if(m_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback(left, right, top, bottom);
					}
					else
						return this->CCamera::setFrustumExtents(left, right, top, bottom);
				}
				virtual void resetFrustumExtents()
				{
					if(m_EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback();
					}
					else
						return this->CCamera::resetFrustumExtents();
				}
				virtual void getFrustumExtents(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom) const
				{
					if(m_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback(outleft, outright, outtop, outbottom);
					}
					else
						return this->CCamera::getFrustumExtents(outleft, outright, outtop, outbottom);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixRS() const
				{
					if(m_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getProjectionMatrixRS();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixWithRSDepth() const
				{
					if(m_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getProjectionMatrixWithRSDepth();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrix() const
				{
					if(m_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getProjectionMatrix();
				}
				virtual void calcViewMatrixRelative(_in const EarthView::World::Spatial::Math::CVector3& relPos, _inout EarthView::World::Spatial::Math::CMatrix4& matToUpdate) const
				{
					if(m_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback(&relPos, &matToUpdate);
					}
					else
						return this->CCamera::calcViewMatrixRelative(relPos, matToUpdate);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix)
				{
					if(m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback(enable, &viewMatrix);
					}
					else
						return this->CCamera::setCustomViewMatrix(enable, viewMatrix);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CCamera::setCustomViewMatrix(enable);
				}
				virtual ev_bool isCustomViewMatrixEnabled() const
				{
					if(m_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isCustomViewMatrixEnabled();
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& projectionMatrix)
				{
					if(m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback(enable, &projectionMatrix);
					}
					else
						return this->CCamera::setCustomProjectionMatrix(enable, projectionMatrix);
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CCamera::setCustomProjectionMatrix(enable);
				}
				virtual ev_bool isCustomProjectionMatrixEnabled() const
				{
					if(m_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isCustomProjectionMatrixEnabled();
				}
				virtual const EarthView::World::Spatial::Math::CPlane* getFrustumPlanes() const
				{
					if(m_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane* returnValue = m_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getFrustumPlanes();
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getTypeFlags();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getBoundingBox();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CCamera::_updateRenderQueue(queue);
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CCamera::_notifyCurrentCamera(cam);
				}
				virtual void setProjectionType(_in EarthView::World::Graphic::ProjectionType pt)
				{
					if(m_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback((int)pt);
					}
					else
						return this->CCamera::setProjectionType(pt);
				}
				virtual EarthView::World::Graphic::ProjectionType getProjectionType() const
				{
					if(m_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ProjectionType returnValue = (EarthView::World::Graphic::ProjectionType)m_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getProjectionType();
				}
				virtual void setOrthoWindow(_in Real w, _in Real h)
				{
					if(m_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback(w, h);
					}
					else
						return this->CCamera::setOrthoWindow(w, h);
				}
				virtual void setOrthoWindowHeight(_in Real h)
				{
					if(m_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback(h);
					}
					else
						return this->CCamera::setOrthoWindowHeight(h);
				}
				virtual void setOrthoWindowWidth(_in Real w)
				{
					if(m_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback(w);
					}
					else
						return this->CCamera::setOrthoWindowWidth(w);
				}
				virtual Real getOrthoWindowHeight() const
				{
					if(m_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getOrthoWindowHeight();
				}
				virtual Real getOrthoWindowWidth() const
				{
					if(m_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getOrthoWindowWidth();
				}
				virtual void enableReflection(_in const EarthView::World::Spatial::Math::CPlane& p)
				{
					if(m_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback(&p);
					}
					else
						return this->CCamera::enableReflection(p);
				}
				virtual void enableReflection(_in const EarthView::World::Graphic::CMovablePlane* p)
				{
					if(m_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback(p);
					}
					else
						return this->CCamera::enableReflection(p);
				}
				virtual void disableReflection()
				{
					if(m_EarthView_World_Graphic_CCamera_disableReflection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_disableReflection_void_Callback();
					}
					else
						return this->CCamera::disableReflection();
				}
				virtual ev_bool isReflected() const
				{
					if(m_EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isReflected();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getReflectionMatrix() const
				{
					if(m_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getReflectionMatrix();
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getReflectionPlane() const
				{
					if(m_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getReflectionPlane();
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Graphic::CMovablePlane* plane)
				{
					if(m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback(plane);
					}
					else
						return this->CCamera::enableCustomNearClipPlane(plane);
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Spatial::Math::CPlane& plane)
				{
					if(m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback(&plane);
					}
					else
						return this->CCamera::enableCustomNearClipPlane(plane);
				}
				virtual void disableCustomNearClipPlane()
				{
					if(m_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback();
					}
					else
						return this->CCamera::disableCustomNearClipPlane();
				}
				virtual ev_bool isCustomNearClipPlaneEnabled() const
				{
					if(m_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isCustomNearClipPlaneEnabled();
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CCamera::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CCamera::visitRenderables(visitor);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CCamera::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CCamera::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CCamera::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CCamera::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CCamera_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCamera_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CCamera::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CCamera::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_CCamera_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_detachFromParent_void_Callback();
					}
					else
						return this->CCamera::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_CCamera__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__notifyMoved_void_Callback();
					}
					else
						return this->CCamera::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CCamera::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CCamera::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CCamera::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CCamera::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CCamera::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CCamera::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CCamera::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CCamera::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CCamera::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CCamera::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CCamera::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CCamera::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CCamera::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CCamera::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CCamera::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CCamera_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_renderSelection_void_Callback();
					}
					else
						return this->CCamera::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CCamera_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_clearSelection_void_Callback();
					}
					else
						return this->CCamera::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CCamera::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CCamera_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_endEditing_void_Callback();
					}
					else
						return this->CCamera::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CCamera::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CCamera::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CCamera::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CCamera::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCamera::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCamera::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCamera::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCamera::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCamera::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCamera::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCamera::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getVisibilityFlags();
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CCamera::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CCamera::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_CCamera_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CCamera_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CCamera::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CCamera::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_CCamera__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_CCamera__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CCamera::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CCamera::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CCamera::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CCamera::getPointExtrusionDistance(l);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CCamera::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCamera::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CCamera::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CCamera::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CCamera::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CCameraProxy);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			class CCameraListenerProxy : public EarthView::World::Graphic::CCamera::CCameraListener
			{
			private:
				EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback* m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback;
				EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback* m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback;
				EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback* m_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback;
			public:
				CCameraListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCameraListener(pList)
				{
					m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera(EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera(EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera(EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback = pCallback;
				}
				virtual void cameraPreRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CCameraListener::cameraPreRenderScene(cam);
				}
				virtual void cameraPostRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CCameraListener::cameraPostRenderScene(cam);
				}
				virtual void cameraDestroyed(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback(cam);
					}
					else
						return this->CCameraListener::cameraDestroyed(cam);
				}
			};
			REGISTER_FACTORY_CLASS(CCameraListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera::CCameraListener* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX;
				if (dynamic_cast<CCameraListenerProxy*>((EarthView::World::Graphic::CCamera::CCameraListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraListener::cameraPreRenderScene(cam);
				else
					ptrNativeObject->cameraPreRenderScene(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_Callback* pCallback )
			{
				CCameraListenerProxy* ptr = dynamic_cast<CCameraListenerProxy*>((EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraPreRenderScene_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera::CCameraListener* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraListener::cameraPreRenderScene(cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera::CCameraListener* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX;
				if (dynamic_cast<CCameraListenerProxy*>((EarthView::World::Graphic::CCamera::CCameraListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraListener::cameraPostRenderScene(cam);
				else
					ptrNativeObject->cameraPostRenderScene(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_Callback* pCallback )
			{
				CCameraListenerProxy* ptr = dynamic_cast<CCameraListenerProxy*>((EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraPostRenderScene_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera::CCameraListener* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraListener::cameraPostRenderScene(cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera::CCameraListener* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX;
				if (dynamic_cast<CCameraListenerProxy*>((EarthView::World::Graphic::CCamera::CCameraListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraListener::cameraDestroyed(cam);
				else
					ptrNativeObject->cameraDestroyed(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_Callback* pCallback )
			{
				CCameraListenerProxy* ptr = dynamic_cast<CCameraListenerProxy*>((EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraListener_cameraDestroyed_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera::CCameraListener* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraListener::cameraDestroyed(cam);
			}
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CCameraInternalRenderableProxy : public EarthView::World::Graphic::CCamera::CCameraInternalRenderable
			{
			private:
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CCameraInternalRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CCameraInternalRenderable(pList)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CCameraInternalRenderable::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CCameraInternalRenderable::getRenderOperation(op);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getLights();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getTechnique();
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CCameraInternalRenderable::postRender(sm, rsys);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CCameraInternalRenderable::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CCameraInternalRenderable::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CCameraInternalRenderable::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CCameraInternalRenderable::setCustomAmbientEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getMovableObject();
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CCameraInternalRenderable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CCameraInternalRenderable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CCameraInternalRenderable::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CCameraInternalRenderable::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CCameraInternalRenderableProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX;
				if (dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraInternalRenderable::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* ptrNativeObject = (EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::CCameraInternalRenderable::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CCameraInternalRenderableProxy* ptr = dynamic_cast<CCameraInternalRenderableProxy*>((EarthView::World::Graphic::CCamera::CCameraInternalRenderable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_CCameraInternalRenderable_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCamera::CCameraInternalRenderable*  _stdcall EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getCameraRenderablePtr();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* objXXXX = ptrNativeObject->getCameraRenderablePtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCamera::CCameraInternalRenderable*  _stdcall EarthView_World_Graphic_CCamera_getCameraRenderablePtr_CCameraInternalRenderable_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getCameraRenderablePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_OperatorAssign_void_CCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CCamera& objXXXX = *((EarthView::World::Graphic::CCamera*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CCamera*)rhs;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_shouldChangeProjectMatrix_ev_bool_CNode_CNode_CMatrix4(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* rootNode, _in EarthView::World::Graphic::CNode* lockTarget, _out void* projectMatrixRS )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->shouldChangeProjectMatrix(rootNode, lockTarget, *(EarthView::World::Spatial::Math::CMatrix4*)projectMatrixRS);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isViewOutOfDate();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isViewOutOfDate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isViewOutOfDate_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isViewOutOfDate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_invalidateFrustum_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::invalidateFrustum();
				else
					ptrNativeObject->invalidateFrustum();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_invalidateFrustum_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_invalidateFrustum_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_invalidateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_invalidateFrustum_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::invalidateFrustum();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_invalidateView_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::invalidateView();
				else
					ptrNativeObject->invalidateView();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_invalidateView_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_invalidateView_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_invalidateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_invalidateView_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::invalidateView();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setWindowImpl_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::setWindowImpl();
				else
					ptrNativeObject->setWindowImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setWindowImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setWindowImpl_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setWindowImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setWindowImpl_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::setWindowImpl();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(void *pObjectXXXX, _in const void* anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::Vector4List objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getRayForwardIntersect(*(EarthView::World::Spatial::Math::CVector3*)anchor, dir, planeOffset);
					EarthView::World::Spatial::Math::Vector4List *pXXXX = new EarthView::World::Spatial::Math::Vector4List(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::Vector4List objXXXX = ptrNativeObject->getRayForwardIntersect(*(EarthView::World::Spatial::Math::CVector3*)anchor, dir, planeOffset);
					EarthView::World::Spatial::Math::Vector4List *pXXXX = new EarthView::World::Spatial::Math::Vector4List(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_NoVirtual(void *pObjectXXXX, _in const void* anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::Vector4List objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getRayForwardIntersect(*(EarthView::World::Spatial::Math::CVector3*)anchor, dir, planeOffset);
				EarthView::World::Spatial::Math::Vector4List *pXXXX = new EarthView::World::Spatial::Math::Vector4List(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_addListener_void_CCameraListener(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera::CCameraListener* ref_l )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::addListener(ref_l);
				else
					ptrNativeObject->addListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_addListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_addListener_void_CCameraListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera::CCameraListener* ref_l )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::addListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera::CCameraListener* l )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::removeListener(l);
				else
					ptrNativeObject->removeListener(l);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_removeListener_void_CCameraListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera::CCameraListener* l )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::removeListener(l);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CCamera_getSceneManager_CSceneManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setPolygonMode_void_PolygonMode(void *pObjectXXXX, _in int sd )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setPolygonMode((EarthView::World::Graphic::PolygonMode)sd);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CCamera_getPolygonMode_PolygonMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::PolygonMode objXXXX = ptrNativeObject->getPolygonMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setPosition_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setPosition(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setPosition_void_CVector3(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_move_void_CVector3(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->move(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_moveRelative_void_CVector3(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->moveRelative(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setDirection_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setDirection(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setDirection_void_CVector3(void *pObjectXXXX, _in const void* vec )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setDirection(*(EarthView::World::Spatial::Math::CVector3*)vec);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getDirection_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getDirection();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getUp_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getUp();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getRight_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRight();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_lookAt_void_CVector3(void *pObjectXXXX, _in const void* targetPoint )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->lookAt(*(EarthView::World::Spatial::Math::CVector3*)targetPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_lookAt_void_Real_Real_Real(void *pObjectXXXX, _in Real x, _in Real y, _in Real z )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->lookAt(x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_roll_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->roll(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_yaw_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->yaw(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_pitch_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->pitch(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_rotate_void_CVector3_CRadian(void *pObjectXXXX, _in const void* axis, _in const void* angle )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CVector3*)axis, *(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_rotate_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->rotate(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getAbsoluteProjectMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getAbsoluteProjectMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getAbsoluteProjectMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getAbsoluteProjectMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isLockingToTarget();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLockingToTarget();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isLockingToTarget_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isLockingToTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLockTarget();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getLockTarget();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CCamera_getLockTarget_CSceneNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLockTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isSlaveCamera();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isSlaveCamera();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isSlaveCamera_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isSlaveCamera();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setFixedYawAxis_void_ev_bool_CVector3(void *pObjectXXXX, _in ev_bool useFixed, _in const void* fixedAxis )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setFixedYawAxis(useFixed, *(EarthView::World::Spatial::Math::CVector3*)fixedAxis);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setFixedYawAxis_void_ev_bool(void *pObjectXXXX, _in ev_bool useFixed )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setFixedYawAxis(useFixed);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getOrientation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getOrientation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setOrientation_void_CQuaternion(void *pObjectXXXX, _in const void* q )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setOrientation(*(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera__renderScene_void_CViewport_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_vp, _in ev_bool includeOverlays )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->_renderScene(ref_vp, includeOverlays);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera__notifyRenderedFaces_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 numfaces )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->_notifyRenderedFaces(numfaces);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera__notifyRenderedBatches_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 numbatches )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->_notifyRenderedBatches(numbatches);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera__notifyRenderedVertices_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 numvertices )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->_notifyRenderedVertices(numvertices);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCamera__getNumRenderedFaces_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_getNumRenderedFaces();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCamera__getNumRenderedBatches_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_getNumRenderedBatches();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CCamera__getNumRenderedVertices_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_getNumRenderedVertices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getDerivedOrientation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getDerivedOrientation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getDerivedPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getDerivedPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getDerivedDirection_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getDerivedDirection();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getDerivedUp_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getDerivedUp();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getDerivedRight_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getDerivedRight();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getRealOrientation_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->getRealOrientation();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getRealPosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getRealPosition();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getRealDirection_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRealDirection();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getRealUp_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRealUp();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getRealRight_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRealRight();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCamera_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getMovableType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getMovableType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getMovableType_EVString_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCamera_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setAutoTracking_void_ev_bool_CSceneNode_CVector3(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target, _in const void* offset )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setAutoTracking(enabled, ref_target, *(EarthView::World::Spatial::Math::CVector3*)offset);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setAutoTracking_void_ev_bool_CSceneNode(void *pObjectXXXX, _in ev_bool enabled, _in EarthView::World::Graphic::CSceneNode* ref_target )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setAutoTracking(enabled, ref_target);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setAutoTracking_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setAutoTracking(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setLodBias_void_Real(void *pObjectXXXX, _in Real factor )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setLodBias(factor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setLodBias_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setLodBias();
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getLodBias_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getLodBias();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* ref_lodCam )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::setLodCamera(ref_lodCam);
				else
					ptrNativeObject->setLodCamera(ref_lodCam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setLodCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* ref_lodCam )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::setLodCamera(ref_lodCam);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_CCamera_getLodCamera_CCamera(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLodCamera();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->getLodCamera();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLodCamera_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLodCamera_CCamera_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLodCamera_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_CCamera_getLodCamera_CCamera_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLodCamera();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getCameraToViewportRay_CRay_Real_Real(void *pObjectXXXX, _in Real screenx, _in Real screeny )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->getCameraToViewportRay(screenx, screeny);
				EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_getCameraToViewportRay_void_Real_Real_CRay(void *pObjectXXXX, _in Real screenx, _in Real screeny, _in EarthView::World::Spatial::Math::CRay* outRay )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->getCameraToViewportRay(screenx, screeny, outRay);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getCameraToViewportBoxVolume_CPlaneBoundedVolume_Real_Real_Real_Real_ev_bool(void *pObjectXXXX, _in Real screenLeft, _in Real screenTop, _in Real screenRight, _in Real screenBottom, _in ev_bool includeFarPlane )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CPlaneBoundedVolume objXXXX = ptrNativeObject->getCameraToViewportBoxVolume(screenLeft, screenTop, screenRight, screenBottom, includeFarPlane);
				EarthView::World::Spatial::Math::CPlaneBoundedVolume *pXXXX = new EarthView::World::Spatial::Math::CPlaneBoundedVolume(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCamera_getCameraToViewportBoxVolume_CPlaneBoundedVolume_Real_Real_Real_Real(void *pObjectXXXX, _in Real screenLeft, _in Real screenTop, _in Real screenRight, _in Real screenBottom )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CPlaneBoundedVolume objXXXX = ptrNativeObject->getCameraToViewportBoxVolume(screenLeft, screenTop, screenRight, screenBottom);
				EarthView::World::Spatial::Math::CPlaneBoundedVolume *pXXXX = new EarthView::World::Spatial::Math::CPlaneBoundedVolume(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_getCameraToViewportBoxVolume_void_Real_Real_Real_Real_CPlaneBoundedVolume_ev_bool(void *pObjectXXXX, _in Real screenLeft, _in Real screenTop, _in Real screenRight, _in Real screenBottom, _in EarthView::World::Spatial::Math::CPlaneBoundedVolume* outVolume, _in ev_bool includeFarPlane )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->getCameraToViewportBoxVolume(screenLeft, screenTop, screenRight, screenBottom, outVolume, includeFarPlane);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_getCameraToViewportBoxVolume_void_Real_Real_Real_Real_CPlaneBoundedVolume(void *pObjectXXXX, _in Real screenLeft, _in Real screenTop, _in Real screenRight, _in Real screenBottom, _in EarthView::World::Spatial::Math::CPlaneBoundedVolume* outVolume )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->getCameraToViewportBoxVolume(screenLeft, screenTop, screenRight, screenBottom, outVolume);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera__getLodBiasInverse_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->_getLodBiasInverse();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera__autoTrack_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->_autoTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real Left, _in Real Top, _in Real Right, _in Real Bottom )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::setWindow(Left, Top, Right, Bottom);
				else
					ptrNativeObject->setWindow(Left, Top, Right, Bottom);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setWindow_void_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real Left, _in Real Top, _in Real Right, _in Real Bottom )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::setWindow(Left, Top, Right, Bottom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_resetWindow_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::resetWindow();
				else
					ptrNativeObject->resetWindow();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_resetWindow_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_resetWindow_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_resetWindow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_resetWindow_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::resetWindow();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isWindowSet_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isWindowSet();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isWindowSet();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isWindowSet_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isWindowSet_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isWindowSet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getWindowPlanes_PlaneList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::PlaneList& objXXXX = ptrNativeObject->getWindowPlanes();
				const EarthView::World::Spatial::Math::PlaneList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getBoundingRadius_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_CCamera_getAutoTrackTarget_CSceneNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getAutoTrackTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getAutoTrackOffset_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getAutoTrackOffset();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CCamera_getViewport_CViewport(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CCamera_getCurrentViewport_CViewport(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getCurrentViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera__notifyViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_viewport )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->_notifyViewport(ref_viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setAutoAspectRatio_void_ev_bool(void *pObjectXXXX, _in ev_bool autoratio )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setAutoAspectRatio(autoratio);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_getAutoAspectRatio_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAutoAspectRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setCullingFrustum_void_CFrustum(void *pObjectXXXX, _in EarthView::World::Graphic::CFrustum* ref_frustum )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setCullingFrustum(ref_frustum);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CFrustum*  _stdcall EarthView_World_Graphic_CCamera_getCullingFrustum_CFrustum(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CFrustum* objXXXX = ptrNativeObject->getCullingFrustum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List(void *pObjectXXXX, _in const void* worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::forwardIntersect(*(EarthView::World::Spatial::Math::CPlane*)worldPlane, intersect3d);
				else
					ptrNativeObject->forwardIntersect(*(EarthView::World::Spatial::Math::CPlane*)worldPlane, intersect3d);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List( void *pObjectXXXX, EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_forwardIntersect_void_CPlane_Vector4List_NoVirtual(void *pObjectXXXX, _in const void* worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::forwardIntersect(*(EarthView::World::Spatial::Math::CPlane*)worldPlane, intersect3d);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CAxisAlignedBox_NoVirtual(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CSphere_NoVirtual(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CSphere*)bound);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane(void *pObjectXXXX, _in const void* vert, _in int* culledBy )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* vert, _in int* culledBy )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3(void *pObjectXXXX, _in const void* vert )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isVisible_ev_bool_CVector3_NoVirtual(void *pObjectXXXX, _in const void* vert )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isVisible(*(EarthView::World::Spatial::Math::CVector3*)vert);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16(void *pObjectXXXX, _in ev_uint16 plane )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getFrustumPlane(plane);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getFrustumPlane_CPlane_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 plane )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CPlane& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getFrustumPlane(plane);
				const EarthView::World::Spatial::Math::CPlane *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(void *pObjectXXXX, _in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::projectSphere(*(EarthView::World::Spatial::Math::CSphere*)sphere, left, top, right, bottom);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->projectSphere(*(EarthView::World::Spatial::Math::CSphere*)sphere, left, top, right, bottom);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::projectSphere(*(EarthView::World::Spatial::Math::CSphere*)sphere, left, top, right, bottom);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getNearClipDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getNearClipDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getNearClipDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getNearClipDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getNearClipDistance_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getNearClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getNearClipDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getNearClipDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getFarClipDistance_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getFarClipDistance();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getFarClipDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFarClipDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFarClipDistance_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFarClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getFarClipDistance_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getFarClipDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getViewMatrix();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getViewMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getViewMatrix_CMatrix4_ev_bool(void *pObjectXXXX, _in ev_bool ownFrustumOnly )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getViewMatrix(ownFrustumOnly);
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool(void *pObjectXXXX, _in ev_bool use )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::setUseRenderingDistance(use);
				else
					ptrNativeObject->setUseRenderingDistance(use);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setUseRenderingDistance_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool use )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::setUseRenderingDistance(use);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getUseRenderingDistance();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getUseRenderingDistance();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_getUseRenderingDistance_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getUseRenderingDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCamera::synchroniseBaseSettingsWith(cam);
				else
					ptrNativeObject->synchroniseBaseSettingsWith(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_synchroniseBaseSettingsWith_void_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCamera::synchroniseBaseSettingsWith(cam);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getPositionForViewUpdate();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getPositionForViewUpdate_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getPositionForViewUpdate();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getOrientationForViewUpdate();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getOrientationForViewUpdate_CQuaternion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getOrientationForViewUpdate();
				const EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCamera_setUseMinPixelSize_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ptrNativeObject->setUseMinPixelSize(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_getUseMinPixelSize_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseMinPixelSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CCamera_getPixelDisplayRatio_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getPixelDisplayRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_CCamera_clone_CCamera_EVString(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::clone(newName1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_clone_CCamera_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCamera_clone_CCamera_EVString_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_clone_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_CCamera_clone_CCamera_EVString_NoVirtual(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::clone(newName1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getHeading_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getHeading();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getHeading();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getHeading_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getHeading_CDegree_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getHeading_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getHeading_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getHeading();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getTilt_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getTilt();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getTilt();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getTilt_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getTilt_CDegree_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getTilt_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getTilt_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getTilt();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getLatitude_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLatitude();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getLatitude();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLatitude_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLatitude_CDegree_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLatitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getLatitude_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLatitude();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getLongitude_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLongitude();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getLongitude();
					const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLongitude_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLongitude_CDegree_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLongitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCamera_getLongitude_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getLongitude();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CCamera_getAltitude_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getAltitude();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getAltitude();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getAltitude_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getAltitude_ev_real64_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getAltitude_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CCamera_getAltitude_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isUnderGround_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isUnderGround();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isUnderGround();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isUnderGround_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_isUnderGround_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::isUnderGround();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getCameraDistanceOfGround();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getCameraDistanceOfGround();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CCamera_getCameraDistanceOfGround_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getCameraDistanceOfGround();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getAltitudeUnderCamera();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getAltitudeUnderCamera();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CCamera_getAltitudeUnderCamera_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getAltitudeUnderCamera();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getGlobeViewport();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getGlobeViewport();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CCamera_getGlobeViewport_CViewport_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::getGlobeViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_hasChanged_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				if (dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::hasChanged();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasChanged();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_hasChanged_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_hasChanged_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_hasChanged_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCamera_hasChanged_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCamera* ptrNativeObject = (EarthView::World::Graphic::CCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCamera::hasChanged();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLights_LightList_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_calcProjectionParameters_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateFrustum_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateFrustum_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateView_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateView_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateFrustumImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateFrustumImpl_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateFrustumImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateViewImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateViewImpl_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateViewImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateFrustumPlanes_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateFrustumPlanes_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateFrustumPlanesImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateWorldSpaceCorners_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateWorldSpaceCornersImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateVertexData_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateVertexData_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateVertexData_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isFrustumOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFOVy_void_CRadian_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFOVy_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFOVy_CRadian( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFOVy_CRadian_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFOVy_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setNearClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFarClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setAspectRatio_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setAspectRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getAspectRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getAspectRatio_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getAspectRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFrustumOffset_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFrustumOffset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFrustumOffset_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFocalLength_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFocalLength_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFocalLength_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFocalLength_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFocalLength_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFocalLength_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFocalLength_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFocalLength_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFocalLength_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_resetFrustumExtents_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_resetFrustumExtents_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_resetFrustumExtents_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getProjectionMatrixRS_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getProjectionMatrixWithRSDepth_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getProjectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setCustomViewMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isCustomViewMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setCustomProjectionMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isCustomProjectionMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getFrustumPlanes_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setProjectionType_void_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getProjectionType_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setOrthoWindow_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setOrthoWindowHeight_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setOrthoWindowWidth_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getOrthoWindowHeight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getOrthoWindowWidth_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_enableReflection_void_CPlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_enableReflection_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_enableReflection_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_disableReflection_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_disableReflection_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_disableReflection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isReflected_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isReflected_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isReflected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getReflectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getReflectionPlane_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_enableCustomNearClipPlane_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_disableCustomNearClipPlane_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isCustomNearClipPlaneEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CCamera__getManager_CSceneManager_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getName_EVString_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getParentNode_CNode_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CCamera__notifyAttached_void_CNode_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isAttached_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_detachFromParent_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isInScene_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera__notifyMoved_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setVisible_void_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getVisible_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isVisible_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getSelected_IntVector_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_renderSelection_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_clearSelection_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CCamera_endEditing_void_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CCamera_queryLights_LightList_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLightMask_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_CCamera__getLightList_LightList_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getCastShadows_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CCameraProxy* ptr = dynamic_cast<CCameraProxy*>((EarthView::World::Graphic::CCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
		}
	}
}
