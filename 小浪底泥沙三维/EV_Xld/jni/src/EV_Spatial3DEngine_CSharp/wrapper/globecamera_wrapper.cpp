/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/globecamera.h"
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
			typedef const EarthView::World::Graphic::CCamera::CCameraInternalRenderable*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback)(_in const void* anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* l);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* ref_lodCam);
			typedef const EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback)(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback)(_in const void* worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback)(_in ev_bool use);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback)(_in char*& newName);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback)();
			typedef EarthView::World::Graphic::CViewport*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback)();
			typedef const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback)(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback)(_in const void* fovy);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback)(_in Real nearDist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback)(_in Real farDist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback)(_in Real ratio);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback)(_in const void* offset);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback)(_in Real horizontal, _in Real vertical);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback)(_in Real horizontal);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback)(_in Real focalLength);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback)(_in Real left, _in Real right, _in Real top, _in Real bottom);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback)(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback)(_in const void* relPos, _inout void* matToUpdate);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* viewMatrix);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* projectionMatrix);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback)();
			typedef const EarthView::World::Spatial::Math::CPlane*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback)(_in ev_uint16 plane);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback)(_in const void* vert, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_Callback)(_in const void* vert);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback)(_in int pt);
			typedef int  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback)(_in Real w, _in Real h);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback)(_in Real h);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback)(_in Real w);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback)(_in const void* p);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* p);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback)(_in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* plane);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback)(_in const void* plane);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CGlobeCameraProxy : public EarthView::World::Spatial3D::CGlobeCamera
			{
			private:
				EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback* m_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CGlobeCameraProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeCamera(pList)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable(EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void(EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener(EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener(EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode(EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera(EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void(EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List(EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString(EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree(EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree(EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree(EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree(EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64(EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64(EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64(EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport(EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera(EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr(EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation(EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList(EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void(EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateView_void(EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void(EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void(EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void(EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void(EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void(EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void(EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void(EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void(EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void(EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian(EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian(EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real(EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real(EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real(EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2(EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real(EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void(EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2(EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void(EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real(EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void(EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane(EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16(EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox(EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane(EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere(EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane(EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3(EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType(EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType(EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real(EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real(EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real(EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane(EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane(EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void(EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane(EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane(EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane(EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void(EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3(EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion(EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8(EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory(EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory(EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager(EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager(EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString(EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString(EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode(EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode(EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool(EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode(EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void(EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void(EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList(EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener(EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox(EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real(EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere(EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue(EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real(EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real(EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real(EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real(EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue(EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector(EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector(EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void(EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void(EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void(EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox(EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8(EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8(EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4(EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener(EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener(EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener(EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList(EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList(EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor(EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData(EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox(EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight(EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual ev_bool hasChanged() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::hasChanged();
				}
				virtual EarthView::World::Graphic::CCamera* clone(_in const EVString& newName) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newName_Char = newName.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback(newName_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CGlobeCamera::clone(newName);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback(&bound, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CGlobeCamera::isVisible(bound, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback(&bound);
						return returnValue;
					}
					else
						return this->CGlobeCamera::isVisible(bound);
				}
				virtual ev_real64 getCameraDistanceOfGround() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getCameraDistanceOfGround();
				}
				virtual ev_real64 getAltitudeUnderCamera() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getAltitudeUnderCamera();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLatitude() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLatitude();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLongitude() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLongitude();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getHeading() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getHeading();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getTilt() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getTilt();
				}
				virtual ev_real64 getAltitude() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getAltitude();
				}
				virtual ev_bool isSlaveCamera()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isSlaveCamera();
				}
				virtual EarthView::World::Graphic::CSceneNode* getLockTarget()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLockTarget();
				}
				virtual ev_bool isUnderGround() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isUnderGround();
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getAbsoluteProjectMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getAbsoluteProjectMatrix();
				}
				virtual ev_bool isLockingToTarget() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isLockingToTarget();
				}
				virtual EarthView::World::Graphic::CViewport* getGlobeViewport() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CViewport* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getGlobeViewport();
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CGlobeCamera::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* getCameraRenderablePtr()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getCameraRenderablePtr();
				}
				virtual ev_bool isViewOutOfDate() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isViewOutOfDate();
				}
				virtual void invalidateFrustum() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback();
					}
					else
						return this->CGlobeCamera::invalidateFrustum();
				}
				virtual void invalidateView() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback();
					}
					else
						return this->CGlobeCamera::invalidateView();
				}
				virtual void setWindowImpl() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback();
					}
					else
						return this->CGlobeCamera::setWindowImpl();
				}
				virtual EarthView::World::Spatial::Math::Vector4List getRayForwardIntersect(_in const EarthView::World::Spatial::Math::CVector3& anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::Vector4List returnValue = *(EarthView::World::Spatial::Math::Vector4List*)m_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback(&anchor, dir, planeOffset);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getRayForwardIntersect(anchor, dir, planeOffset);
				}
				virtual void addListener(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback(ref_l);
					}
					else
						return this->CGlobeCamera::addListener(ref_l);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CCamera::CCameraListener* l)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback(l);
					}
					else
						return this->CGlobeCamera::removeListener(l);
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getMovableType();
				}
				virtual void setLodCamera(_in const EarthView::World::Graphic::CCamera* ref_lodCam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback(ref_lodCam);
					}
					else
						return this->CGlobeCamera::setLodCamera(ref_lodCam);
				}
				virtual const EarthView::World::Graphic::CCamera* getLodCamera() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLodCamera();
				}
				virtual void setWindow(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback(Left, Top, Right, Bottom);
					}
					else
						return this->CGlobeCamera::setWindow(Left, Top, Right, Bottom);
				}
				virtual void resetWindow()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback();
					}
					else
						return this->CGlobeCamera::resetWindow();
				}
				virtual ev_bool isWindowSet() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isWindowSet();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getBoundingRadius();
				}
				virtual void forwardIntersect(_in const EarthView::World::Spatial::Math::CPlane& worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback(&worldPlane, intersect3d);
					}
					else
						return this->CGlobeCamera::forwardIntersect(worldPlane, intersect3d);
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getFrustumPlane(_in ev_uint16 plane) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback(plane);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getFrustumPlane(plane);
				}
				virtual ev_bool projectSphere(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback(&sphere, left, top, right, bottom);
						return returnValue;
					}
					else
						return this->CGlobeCamera::projectSphere(sphere, left, top, right, bottom);
				}
				virtual Real getNearClipDistance() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getNearClipDistance();
				}
				virtual Real getFarClipDistance() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getFarClipDistance();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getViewMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getViewMatrix();
				}
				virtual void setUseRenderingDistance(_in ev_bool use)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback(use);
					}
					else
						return this->CGlobeCamera::setUseRenderingDistance(use);
				}
				virtual ev_bool getUseRenderingDistance() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getUseRenderingDistance();
				}
				virtual void synchroniseBaseSettingsWith(_in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback(cam);
					}
					else
						return this->CGlobeCamera::synchroniseBaseSettingsWith(cam);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPositionForViewUpdate() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getPositionForViewUpdate();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientationForViewUpdate() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getOrientationForViewUpdate();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CGlobeCamera::getRenderOperation(op);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLights();
				}
				virtual const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* getFrustumRenderablePtr()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getFrustumRenderablePtr();
				}
				virtual void calcProjectionParameters(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback(left, right, bottom, top);
					}
					else
						return this->CGlobeCamera::calcProjectionParameters(left, right, bottom, top);
				}
				virtual void updateFrustum() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback();
					}
					else
						return this->CGlobeCamera::updateFrustum();
				}
				virtual void updateView() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback();
					}
					else
						return this->CGlobeCamera::updateView();
				}
				virtual void updateFrustumImpl() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback();
					}
					else
						return this->CGlobeCamera::updateFrustumImpl();
				}
				virtual void updateViewImpl() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback();
					}
					else
						return this->CGlobeCamera::updateViewImpl();
				}
				virtual void updateFrustumPlanes() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback();
					}
					else
						return this->CGlobeCamera::updateFrustumPlanes();
				}
				virtual void updateFrustumPlanesImpl() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback();
					}
					else
						return this->CGlobeCamera::updateFrustumPlanesImpl();
				}
				virtual void updateWorldSpaceCorners() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback();
					}
					else
						return this->CGlobeCamera::updateWorldSpaceCorners();
				}
				virtual void updateWorldSpaceCornersImpl() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback();
					}
					else
						return this->CGlobeCamera::updateWorldSpaceCornersImpl();
				}
				virtual void updateVertexData() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback();
					}
					else
						return this->CGlobeCamera::updateVertexData();
				}
				virtual ev_bool isFrustumOutOfDate() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isFrustumOutOfDate();
				}
				virtual void setFOVy(_in const EarthView::World::Spatial::Math::CRadian& fovy)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback(&fovy);
					}
					else
						return this->CGlobeCamera::setFOVy(fovy);
				}
				virtual const EarthView::World::Spatial::Math::CRadian& getFOVy() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getFOVy();
				}
				virtual void setNearClipDistance(_in Real nearDist)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback(nearDist);
					}
					else
						return this->CGlobeCamera::setNearClipDistance(nearDist);
				}
				virtual void setFarClipDistance(_in Real farDist)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback(farDist);
					}
					else
						return this->CGlobeCamera::setFarClipDistance(farDist);
				}
				virtual void setAspectRatio(_in Real ratio)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback(ratio);
					}
					else
						return this->CGlobeCamera::setAspectRatio(ratio);
				}
				virtual Real getAspectRatio() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getAspectRatio();
				}
				virtual void setFrustumOffset(_in const EarthView::World::Spatial::Math::CVector2& offset)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback(&offset);
					}
					else
						return this->CGlobeCamera::setFrustumOffset(offset);
				}
				virtual void setFrustumOffset(_in Real horizontal, _in Real vertical)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback(horizontal, vertical);
					}
					else
						return this->CGlobeCamera::setFrustumOffset(horizontal, vertical);
				}
				virtual void setFrustumOffset(_in Real horizontal)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback(horizontal);
					}
					else
						return this->CGlobeCamera::setFrustumOffset(horizontal);
				}
				virtual void setFrustumOffset()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback();
					}
					else
						return this->CGlobeCamera::setFrustumOffset();
				}
				virtual const EarthView::World::Spatial::Math::CVector2& getFrustumOffset() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector2& returnValue = *(EarthView::World::Spatial::Math::CVector2*)m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getFrustumOffset();
				}
				virtual void setFocalLength(_in Real focalLength)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback(focalLength);
					}
					else
						return this->CGlobeCamera::setFocalLength(focalLength);
				}
				virtual void setFocalLength()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback();
					}
					else
						return this->CGlobeCamera::setFocalLength();
				}
				virtual Real getFocalLength() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getFocalLength();
				}
				virtual void setFrustumExtents(_in Real left, _in Real right, _in Real top, _in Real bottom)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback(left, right, top, bottom);
					}
					else
						return this->CGlobeCamera::setFrustumExtents(left, right, top, bottom);
				}
				virtual void resetFrustumExtents()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback();
					}
					else
						return this->CGlobeCamera::resetFrustumExtents();
				}
				virtual void getFrustumExtents(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback(outleft, outright, outtop, outbottom);
					}
					else
						return this->CGlobeCamera::getFrustumExtents(outleft, outright, outtop, outbottom);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixRS() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getProjectionMatrixRS();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixWithRSDepth() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getProjectionMatrixWithRSDepth();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getProjectionMatrix();
				}
				virtual void calcViewMatrixRelative(_in const EarthView::World::Spatial::Math::CVector3& relPos, _inout EarthView::World::Spatial::Math::CMatrix4& matToUpdate) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback(&relPos, &matToUpdate);
					}
					else
						return this->CGlobeCamera::calcViewMatrixRelative(relPos, matToUpdate);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback(enable, &viewMatrix);
					}
					else
						return this->CGlobeCamera::setCustomViewMatrix(enable, viewMatrix);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CGlobeCamera::setCustomViewMatrix(enable);
				}
				virtual ev_bool isCustomViewMatrixEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isCustomViewMatrixEnabled();
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& projectionMatrix)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback(enable, &projectionMatrix);
					}
					else
						return this->CGlobeCamera::setCustomProjectionMatrix(enable, projectionMatrix);
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CGlobeCamera::setCustomProjectionMatrix(enable);
				}
				virtual ev_bool isCustomProjectionMatrixEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isCustomProjectionMatrixEnabled();
				}
				virtual const EarthView::World::Spatial::Math::CPlane* getFrustumPlanes() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getFrustumPlanes();
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getTypeFlags();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getBoundingBox();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CGlobeCamera::_updateRenderQueue(queue);
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CGlobeCamera::_notifyCurrentCamera(cam);
				}
				virtual void setProjectionType(_in EarthView::World::Graphic::ProjectionType pt)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback((int)pt);
					}
					else
						return this->CGlobeCamera::setProjectionType(pt);
				}
				virtual EarthView::World::Graphic::ProjectionType getProjectionType() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ProjectionType returnValue = (EarthView::World::Graphic::ProjectionType)m_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getProjectionType();
				}
				virtual void setOrthoWindow(_in Real w, _in Real h)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback(w, h);
					}
					else
						return this->CGlobeCamera::setOrthoWindow(w, h);
				}
				virtual void setOrthoWindowHeight(_in Real h)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback(h);
					}
					else
						return this->CGlobeCamera::setOrthoWindowHeight(h);
				}
				virtual void setOrthoWindowWidth(_in Real w)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback(w);
					}
					else
						return this->CGlobeCamera::setOrthoWindowWidth(w);
				}
				virtual Real getOrthoWindowHeight() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getOrthoWindowHeight();
				}
				virtual Real getOrthoWindowWidth() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getOrthoWindowWidth();
				}
				virtual void enableReflection(_in const EarthView::World::Spatial::Math::CPlane& p)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback(&p);
					}
					else
						return this->CGlobeCamera::enableReflection(p);
				}
				virtual void enableReflection(_in const EarthView::World::Graphic::CMovablePlane* p)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback(p);
					}
					else
						return this->CGlobeCamera::enableReflection(p);
				}
				virtual void disableReflection()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback();
					}
					else
						return this->CGlobeCamera::disableReflection();
				}
				virtual ev_bool isReflected() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isReflected();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getReflectionMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getReflectionMatrix();
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getReflectionPlane() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getReflectionPlane();
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Graphic::CMovablePlane* plane)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback(plane);
					}
					else
						return this->CGlobeCamera::enableCustomNearClipPlane(plane);
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Spatial::Math::CPlane& plane)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback(&plane);
					}
					else
						return this->CGlobeCamera::enableCustomNearClipPlane(plane);
				}
				virtual void disableCustomNearClipPlane()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback();
					}
					else
						return this->CGlobeCamera::disableCustomNearClipPlane();
				}
				virtual ev_bool isCustomNearClipPlaneEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isCustomNearClipPlaneEnabled();
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CGlobeCamera::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CGlobeCamera::visitRenderables(visitor);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CGlobeCamera::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CGlobeCamera::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CGlobeCamera::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CGlobeCamera::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback();
					}
					else
						return this->CGlobeCamera::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback();
					}
					else
						return this->CGlobeCamera::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CGlobeCamera::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CGlobeCamera::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CGlobeCamera::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CGlobeCamera::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CGlobeCamera::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CGlobeCamera::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CGlobeCamera::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CGlobeCamera::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CGlobeCamera::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CGlobeCamera::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CGlobeCamera::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CGlobeCamera::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CGlobeCamera::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback();
					}
					else
						return this->CGlobeCamera::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback();
					}
					else
						return this->CGlobeCamera::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CGlobeCamera::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback();
					}
					else
						return this->CGlobeCamera::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CGlobeCamera::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CGlobeCamera::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CGlobeCamera::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CGlobeCamera::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CGlobeCamera::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CGlobeCamera::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CGlobeCamera::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CGlobeCamera::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CGlobeCamera::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getVisibilityFlags();
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CGlobeCamera::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CGlobeCamera::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CGlobeCamera::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CGlobeCamera::getPointExtrusionDistance(l);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CGlobeCamera::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeCamera::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CGlobeCamera::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CGlobeCamera::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CGlobeCamera::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CGlobeCameraProxy);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			class CGlobeCameraListenerProxy : public EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener
			{
			private:
				EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback;
			public:
				CGlobeCameraListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeCameraListener(pList)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback = pCallback;
				}
				virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback(camera);
					}
					else
						return this->CGlobeCameraListener::cameraParamChanged(camera);
				}
				virtual void cameraPreRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CGlobeCameraListener::cameraPreRenderScene(cam);
				}
				virtual void cameraPostRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CGlobeCameraListener::cameraPostRenderScene(cam);
				}
				virtual void cameraDestroyed(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback(cam);
					}
					else
						return this->CGlobeCameraListener::cameraDestroyed(cam);
				}
			};
			REGISTER_FACTORY_CLASS(CGlobeCameraListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* camera )
			{
				EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener::cameraParamChanged(camera);
				else
					ptrNativeObject->cameraParamChanged(camera);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_Callback* pCallback )
			{
				CGlobeCameraListenerProxy* ptr = dynamic_cast<CGlobeCameraListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraParamChanged_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* camera )
			{
				EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener::cameraParamChanged(camera);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera_Callback* pCallback )
			{
				CGlobeCameraListenerProxy* ptr = dynamic_cast<CGlobeCameraListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPreRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera_Callback* pCallback )
			{
				CGlobeCameraListenerProxy* ptr = dynamic_cast<CGlobeCameraListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraPostRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera_Callback* pCallback )
			{
				CGlobeCameraListenerProxy* ptr = dynamic_cast<CGlobeCameraListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CGlobeCameraListener_cameraDestroyed_void_CCamera(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback)(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera, _inout ev_real64& nearDistance, _inout ev_real64& farDistance);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			class CProjectMatrixListenerProxy : public EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener
			{
			private:
				EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback;
				EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback* m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback;
			public:
				CProjectMatrixListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CProjectMatrixListener(pList)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64(EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera(EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback = pCallback;
				}
				virtual void parameterChanging(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera, _inout ev_real64& nearDistance, _inout ev_real64& farDistance)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback(globeCamera, nearDistance, farDistance);
					}
					else
						return this->CProjectMatrixListener::parameterChanging(globeCamera, nearDistance, farDistance);
				}
				virtual void cameraPreRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CProjectMatrixListener::cameraPreRenderScene(cam);
				}
				virtual void cameraPostRenderScene(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback(cam);
					}
					else
						return this->CProjectMatrixListener::cameraPostRenderScene(cam);
				}
				virtual void cameraDestroyed(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback(cam);
					}
					else
						return this->CProjectMatrixListener::cameraDestroyed(cam);
				}
			};
			REGISTER_FACTORY_CLASS(CProjectMatrixListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera, _inout ev_real64& nearDistance, _inout ev_real64& farDistance )
			{
				EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*) pObjectXXXX;
				if (dynamic_cast<CProjectMatrixListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener::parameterChanging(globeCamera, nearDistance, farDistance);
				else
					ptrNativeObject->parameterChanging(globeCamera, nearDistance, farDistance);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_Callback* pCallback )
			{
				CProjectMatrixListenerProxy* ptr = dynamic_cast<CProjectMatrixListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_parameterChanging_void_CGlobeCamera_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera, _inout ev_real64& nearDistance, _inout ev_real64& farDistance )
			{
				EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener::parameterChanging(globeCamera, nearDistance, farDistance);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera_Callback* pCallback )
			{
				CProjectMatrixListenerProxy* ptr = dynamic_cast<CProjectMatrixListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPreRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera_Callback* pCallback )
			{
				CProjectMatrixListenerProxy* ptr = dynamic_cast<CProjectMatrixListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraPostRenderScene_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera_Callback* pCallback )
			{
				CProjectMatrixListenerProxy* ptr = dynamic_cast<CProjectMatrixListenerProxy*>((EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_CProjectMatrixListener_cameraDestroyed_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::hasChanged();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasChanged();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_hasChanged_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::hasChanged();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_OperatorEquals_ev_bool_CGlobeCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CGlobeCamera& objXXXX = *(EarthView::World::Spatial3D::CGlobeCamera*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeCamera& objXXXX1 = *(EarthView::World::Spatial3D::CGlobeCamera*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_OperatorNotEquals_ev_bool_CGlobeCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CGlobeCamera& objXXXX = *(EarthView::World::Spatial3D::CGlobeCamera*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeCamera& objXXXX1 = *(EarthView::World::Spatial3D::CGlobeCamera*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_OperatorAssign_void_CGlobeCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CGlobeCamera& objXXXX = *((EarthView::World::Spatial3D::CGlobeCamera*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial3D::CGlobeCamera*)rhs;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::clone(newName1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_clone_CCamera_EVString_NoVirtual(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::clone(newName1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setProjectMatrixListener_void_CProjectMatrixListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener* pPorjectMatrixListener )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setProjectMatrixListener(pPorjectMatrixListener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getProjectMatrixListener_CProjectMatrixListener(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeCamera::CProjectMatrixListener* objXXXX = ptrNativeObject->getProjectMatrixListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_screenToScene_CRay_ev_real32_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y, _in ev_real64 top, _in ev_real64 left, _in ev_real64 width, _in ev_real64 height )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y, top, left, width, height);
				EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_NoVirtual(void *pObjectXXXX, _in const void* bound, _in int* culledBy )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound, (EarthView::World::Graphic::FrustumPlane*)culledBy);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CAxisAlignedBox_NoVirtual(void *pObjectXXXX, _in const void* bound )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isVisible(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bound);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLastViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getLastViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getIntersectPointWithPlane_ev_bool_CRay_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* ray, _in const void* normal, _in const void* point, _out void* intersectPoint )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIntersectPointWithPlane(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Spatial::Math::CVector3*)normal, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::CVector3*)intersectPoint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_pan_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 preLatitude, _in ev_real64 preLongitude, _in ev_real64 latitude, _in ev_real64 longitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->pan(preLatitude, preLongitude, latitude, longitude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_pan_void_CDegree_CDegree_CDegree_CDegree(void *pObjectXXXX, _in const void* preLatitude, _in const void* preLongitude, _in const void* latitude, _in const void* longitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->pan(*(EarthView::World::Spatial::Math::CDegree*)preLatitude, *(EarthView::World::Spatial::Math::CDegree*)preLongitude, *(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_pan_void_ev_real64_ev_real64(void *pObjectXXXX, _in const ev_real64 latitudeStep, _in const ev_real64 longitudeStep )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->pan(latitudeStep, longitudeStep);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_panTo_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 targetLatitude, _in ev_real64 targetLongitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->panTo(targetLatitude, targetLongitude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_panTo_void_CDegree_CDegree(void *pObjectXXXX, _in const void* targetLatitude, _in const void* targetLongitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->panTo(*(EarthView::World::Spatial::Math::CDegree*)targetLatitude, *(EarthView::World::Spatial::Math::CDegree*)targetLongitude);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeAxisMatrix_CMatrix3_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 lonitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->computeAxisMatrix(latitude, lonitude);
				EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeAxisMatrix_CMatrix3_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 lonitude, _in ev_real64 radius )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->computeAxisMatrix(latitude, lonitude, radius);
				EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeAxisMatrix_CMatrix3_CDegree_CDegree(void *pObjectXXXX, _in const void* latitude, _in const void* longitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->computeAxisMatrix(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude);
				EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeAxisMatrix_CMatrix3_CDegree_CDegree_ev_real64(void *pObjectXXXX, _in const void* latitude, _in const void* longitude, _in ev_real64 radius )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->computeAxisMatrix(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, radius);
				EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setAutoCalculateProjectMatrix_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setAutoCalculateProjectMatrix(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAutoCalculateProjectMatrix_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAutoCalculateProjectMatrix();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setTilt_void_CDegree(void *pObjectXXXX, _in void* tilt )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setTilt(*(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setPosition_void_CDegree_CDegree_CDegree_CDegree_ev_real64_ev_real64(void *pObjectXXXX, _in const void* latitude, _in const void* longitude, _in const void* heading, _in const void* tilt, _in ev_real64 altitude, _in ev_real64 moditifAltitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, altitude, moditifAltitude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setPosition_void_CDegree_CDegree_CDegree_CDegree_ev_real64(void *pObjectXXXX, _in const void* latitude, _in const void* longitude, _in const void* heading, _in const void* tilt, _in ev_real64 altitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setPosition(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, altitude);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeCameraTilt_ev_real64_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* target, _in const void* observer, _in const void* upVector )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->computeCameraTilt(*(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)upVector);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeCameraHeading_ev_real64_CVector3_CVector3_ev_real64_CVector3(void *pObjectXXXX, _in const void* up, _in const void* look, _in ev_real64 tiltRadious, _in const void* target )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->computeCameraHeading(*(EarthView::World::Spatial::Math::CVector3*)up, *(EarthView::World::Spatial::Math::CVector3*)look, tiltRadious, *(EarthView::World::Spatial::Math::CVector3*)target);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_lockToTarget_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* node )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->lockToTarget(node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLockTilt_void_CDegree(void *pObjectXXXX, _in const void* lockTarget )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setLockTilt(*(EarthView::World::Spatial::Math::CDegree*)lockTarget);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLockTilt_CDegree(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getLockTilt();
				EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLockHeading_void_CDegree(void *pObjectXXXX, _in const void* lockHeading )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setLockHeading(*(EarthView::World::Spatial::Math::CDegree*)lockHeading);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLockHeading_CDegree(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getLockHeading();
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLockYaw_void_CDegree(void *pObjectXXXX, _in const void* lockYaw )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setLockYaw(*(EarthView::World::Spatial::Math::CDegree*)lockYaw);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLockYaw_CDegree(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getLockYaw();
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLockDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 lockDistance )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setLockDistance(lockDistance);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLockDistance_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getLockDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeLockTargetViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->computeLockTargetViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getCameraDistanceOfGround();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getCameraDistanceOfGround();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getCameraDistanceOfGround_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getCameraDistanceOfGround();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getAltitudeUnderCamera();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getAltitudeUnderCamera();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAltitudeUnderCamera_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getAltitudeUnderCamera();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_rotationYawPitchRoll_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 yaw, _in ev_real64 pitch, _in ev_real64 roll )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->rotationYawPitchRoll(yaw, pitch, roll);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLastIntersected_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLastIntersected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getLatitude();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLatitude_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getLatitude();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLatitude_void_CDegree(void *pObjectXXXX, _in const void* lat )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setLatitude(*(EarthView::World::Spatial::Math::CDegree*)lat);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getLongitude();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLongitude_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getLongitude();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getHeading();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getHeading_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getHeading();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setHeading_void_CDegree(void *pObjectXXXX, _in const void* heading )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setHeading(*(EarthView::World::Spatial::Math::CDegree*)heading);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getTilt();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTilt_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getTilt();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getAltitude();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getAltitude();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAltitude_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 altitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setAltitude(altitude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setMaxLimitAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 maxAltitude )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setMaxLimitAltitude(maxAltitude);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getMaxLimitAltitude_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxLimitAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getDistance_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setTarget_void_CVector3(void *pObjectXXXX, _in const void* target )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setTarget(*(EarthView::World::Spatial::Math::CVector3*)target);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTarget_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getTarget();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRealTarget_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getRealTarget();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setObserver_void_CVector3(void *pObjectXXXX, _in const void* observer )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setObserver(*(EarthView::World::Spatial::Math::CVector3*)observer);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getObserver_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getObserver();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setUpVector_void_CVector3(void *pObjectXXXX, _in const void* upVector )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setUpVector(*(EarthView::World::Spatial::Math::CVector3*)upVector);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTrueDistance_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getTrueDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setTrueDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setTrueDistance(distance);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getUpVector_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getUpVector();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLookVector_void_CVector3(void *pObjectXXXX, _in const void* lookVector )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setLookVector(*(EarthView::World::Spatial::Math::CVector3*)lookVector);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLookVector_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getLookVector();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRightVector_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getRightVector();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setDistance(distance);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getViewRange_CDegree(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getViewRange();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTrueViewRange_CDegree(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getTrueViewRange();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getTargetAltitude_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getTargetAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setLocalCenter_void_CVector3(void *pObjectXXXX, _in const void* localCenter )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setLocalCenter(*(EarthView::World::Spatial::Math::CVector3*)localCenter);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLocalCenter_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getLocalCenter();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setRadius_void_ev_real64(void *pObjectXXXX, _in ev_real64 radius )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setRadius(radius);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getRadius_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setViewMatrix_void_CVector3_CQuaternion(void *pObjectXXXX, _in const void* cameraPostion, _in const void* q )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setViewMatrix(*(EarthView::World::Spatial::Math::CVector3*)cameraPostion, *(EarthView::World::Spatial::Math::CQuaternion*)q);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setViewMatrix_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* target, _in const void* observer, _in const void* upVector )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setViewMatrix(*(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)upVector);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_adjustTarget_void_CVector3_CVector3_CVector3_ev_real64(void *pObjectXXXX, _in const void* oldTarget, _in const void* observer, _inout void* target, _in ev_real64 worldradius )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->adjustTarget(*(EarthView::World::Spatial::Math::CVector3*)oldTarget, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)target, worldradius);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->computeViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeNextViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->computeNextViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeProjectMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->computeProjectMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setNearClipRate_void_ev_real64(void *pObjectXXXX, _in ev_real64 nearClipRate )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setNearClipRate(nearClipRate);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getNearClipRate_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getNearClipRate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getMaxTilt_CDegree(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getMaxTilt();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isSlaveCamera();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isSlaveCamera();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isSlaveCamera_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isSlaveCamera();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_copyMatrix_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->copyMatrix();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getLockTarget();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getLockTarget();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getLockTarget_CSceneNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getLockTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setMasterCamera_void_CGlobeCamera(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* masterCamera )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setMasterCamera(masterCamera);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setNeedCopyMasterCameraTarget_void_ev_bool(void *pObjectXXXX, _in ev_bool needCopyMasterCameraTarget )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setNeedCopyMasterCameraTarget(needCopyMasterCameraTarget);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getNeedCopyMasterCameraTarget_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNeedCopyMasterCameraTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getIsUnderGroundMode_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsUnderGroundMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setIsUnderGroundMode_void_ev_bool(void *pObjectXXXX, _in ev_bool isUnderGroundMode )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setIsUnderGroundMode(isUnderGroundMode);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getModitifAltitude_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getModitifAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isUnderGround();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isUnderGround();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isUnderGround_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isUnderGround();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setCalculateIntersect_void_ev_bool(void *pObjectXXXX, _in ev_bool calculateIntersect )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setCalculateIntersect(calculateIntersect);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setIsPlaneBased_void_ev_bool(void *pObjectXXXX, _in ev_bool planeBase )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setIsPlaneBased(planeBase);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getIsPlaneBased_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsPlaneBased();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setIsModelBased_void_ev_bool(void *pObjectXXXX, _in ev_bool modelBase )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setIsModelBased(modelBase);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getIsModelBased_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsModelBased();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setModelBasedMoveCenter_void_CVector3(void *pObjectXXXX, _in void* center )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setModelBasedMoveCenter(*(EarthView::World::Spatial::Math::CVector3*)center);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getModelBasedMoveCenter_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getModelBasedMoveCenter();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setCameraControlDepth_void_ev_real64(void *pObjectXXXX, _in ev_real64 cameraDepth )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setCameraControlDepth(cameraDepth);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getCameraControlDepth_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getCameraControlDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getUnderGroundWidth_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getUnderGroundWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getUnderGroundDepth_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getUnderGroundDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeTrueDistance_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeTrueDistance();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getAbsoluteProjectMatrix();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getAbsoluteProjectMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getAbsoluteProjectMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isLockingToTarget();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLockingToTarget();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeCamera_isLockingToTarget_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::isLockingToTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getMinFarDistance_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinFarDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_setMinFarDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 distance )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->setMinFarDistance(distance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeDistance_void_ev_real64_CDegree(void *pObjectXXXX, _in ev_real64 altitude, _in const void* tilt )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeDistance(altitude, *(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeDistance_void_ev_real64_CDegree_ev_bool(void *pObjectXXXX, _in ev_real64 altitude, _in const void* tilt, _in ev_bool isNearToTarget )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeDistance(altitude, *(EarthView::World::Spatial::Math::CDegree*)tilt, isNearToTarget);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeTrueDistance_void_ev_real64_CDegree(void *pObjectXXXX, _in ev_real64 altitude, _in const void* tilt )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeTrueDistance(altitude, *(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeTrueDistance_void_ev_real64_CDegree_ev_bool(void *pObjectXXXX, _in ev_real64 altitude, _in const void* tilt, _in ev_bool isNearToTarget )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeTrueDistance(altitude, *(EarthView::World::Spatial::Math::CDegree*)tilt, isNearToTarget);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeAltitude_void_ev_real64_CDegree(void *pObjectXXXX, _in ev_real64 distance, _in const void* tilt )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeAltitude(distance, *(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeAltitude_void_ev_real64_CDegree_ev_bool(void *pObjectXXXX, _in ev_real64 distance, _in const void* tilt, _in ev_bool isNearToTarget )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeAltitude(distance, *(EarthView::World::Spatial::Math::CDegree*)tilt, isNearToTarget);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeTrueAltitude_void_ev_real64_CDegree(void *pObjectXXXX, _in ev_real64 distance, _in const void* tilt )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeTrueAltitude(distance, *(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeTilt_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 alt, _in ev_real64 distance )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeTilt(alt, distance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameter_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& left, _inout ev_real64& right, _inout ev_real64& bottom, _inout ev_real64& top )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->calcProjectionParameter(left, right, bottom, top);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera_computeAbsoluteProjectMatrix_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 trueDistance, _in ev_real64 farDistance )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->computeAbsoluteProjectMatrix(trueDistance, farDistance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeCamera__notifyParamChanged_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ptrNativeObject->_notifyParamChanged();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				if (dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getGlobeViewport();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getGlobeViewport();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Spatial3D_CGlobeCamera_getGlobeViewport_CViewport_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CGlobeCamera::getGlobeViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlatitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlatitude;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlatitude( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlatitude = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlongitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlongitude;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlongitude( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlongitude = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mheading( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mheading;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mheading( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mheading = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mtilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mtilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mtilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mtilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mminTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mminTilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mminTilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mminTilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mmaxTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mmaxTilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mmaxTilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mmaxTilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_maltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->maltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_maltitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->maltitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mminAltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mminAltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mminAltitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mminAltitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mmaxAltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mmaxAltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mmaxAltitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mmaxAltitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mdistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mdistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mdistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mdistance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mTrueDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mTrueDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mTrueDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mTrueDistance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mtargetAltiude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mtargetAltiude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mtargetAltiude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mtargetAltiude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mAltitudeUnderCamera( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mAltitudeUnderCamera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mAltitudeUnderCamera( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mAltitudeUnderCamera = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mtarget( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mtarget;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mtarget( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mtarget = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mobserver( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mobserver;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mobserver( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mobserver = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mupVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mupVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mupVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mupVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlookVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mlookVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlookVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlookVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mrightVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mrightVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mrightVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mrightVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mViewRange( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mViewRange;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mViewRange( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mViewRange = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mTrueViewRange( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mTrueViewRange;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mTrueViewRange( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mTrueViewRange = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGeoSceneManager*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mGeoSceneManager( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial3D::CGeoSceneManager* objXXXX = ptrNativeObject->mGeoSceneManager;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mGeoSceneManager( void *pObjectXXXX, EarthView::World::Spatial3D::CGeoSceneManager*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mGeoSceneManager = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeCamera*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mmasterCamera( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeCamera* objXXXX = ptrNativeObject->mmasterCamera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mmasterCamera( void *pObjectXXXX, EarthView::World::Spatial3D::CGlobeCamera*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mmasterCamera = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mIsSlaveCamera( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mIsSlaveCamera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mIsSlaveCamera( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mIsSlaveCamera = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mNeedCopyMasterCameraTarget( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mNeedCopyMasterCameraTarget;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mNeedCopyMasterCameraTarget( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mNeedCopyMasterCameraTarget = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlockTarget( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->mlockTarget;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlockTarget( void *pObjectXXXX, EarthView::World::Graphic::CSceneNode*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlockTarget = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlockTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlockTilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlockTilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlockTilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlockHeading( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlockHeading;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlockHeading( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlockHeading = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlockYaw( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlockYaw;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlockYaw( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlockYaw = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlockDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mlockDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlockDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlockDistance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_misUnderGroundMode( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->misUnderGroundMode;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_misUnderGroundMode( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->misUnderGroundMode = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mMinFarDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mMinFarDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mMinFarDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mMinFarDistance = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mrealTarget( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mrealTarget;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mrealTarget( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mrealTarget = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mmoditifAltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mmoditifAltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mmoditifAltitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mmoditifAltitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mcameraControlDepth( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mcameraControlDepth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mcameraControlDepth( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mcameraControlDepth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mUnderGroundDepth( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mUnderGroundDepth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mUnderGroundDepth( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mUnderGroundDepth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mUnderGroundWidth( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mUnderGroundWidth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mUnderGroundWidth( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mUnderGroundWidth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_misPlaneBased( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->misPlaneBased;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_misPlaneBased( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->misPlaneBased = value;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mcalculateIntersect( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->mcalculateIntersect;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mcalculateIntersect( void *pObjectXXXX, bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mcalculateIntersect = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mIsMoveAtModelMode( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mIsMoveAtModelMode;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mIsMoveAtModelMode( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mIsMoveAtModelMode = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mDefaultMoveCenter( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mDefaultMoveCenter;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mDefaultMoveCenter( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mDefaultMoveCenter = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlocalCenter( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mlocalCenter;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlocalCenter( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlocalCenter = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mradius( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mradius;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mradius( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mradius = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlastViewMatrix( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->mlastViewMatrix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlastViewMatrix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlastViewMatrix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlastIntersected( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mlastIntersected;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlastIntersected( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlastIntersected = value;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mviewMatrixChanged( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->mviewMatrixChanged;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mviewMatrixChanged( void *pObjectXXXX, bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mviewMatrixChanged = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mlastPanRotationAxis( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mlastPanRotationAxis;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mlastPanRotationAxis( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mlastPanRotationAxis = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mInertiaRotationRatian( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mInertiaRotationRatian;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mInertiaRotationRatian( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mInertiaRotationRatian = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_minertiaDecelerateRate( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->minertiaDecelerateRate;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_minertiaDecelerateRate( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->minertiaDecelerateRate = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mInertialObserver( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mInertialObserver;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mInertialObserver( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mInertialObserver = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mInertialUpVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mInertialUpVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mInertialUpVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mInertialUpVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mInertialLookVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mInertialLookVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mInertialLookVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mInertialLookVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mInertialAngleDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mInertialAngleDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mInertialAngleDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mInertialAngleDistance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mInertialDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mInertialDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mInertialDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mInertialDistance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mBeginInertialPan( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mBeginInertialPan;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mBeginInertialPan( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mBeginInertialPan = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mDeltaPan( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mDeltaPan;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mDeltaPan( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mDeltaPan = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mAutoCalculateProjectMatrix( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mAutoCalculateProjectMatrix;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mAutoCalculateProjectMatrix( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mAutoCalculateProjectMatrix = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeCamera_mAbsoluteProjectMatrix( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeCamera* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->mAbsoluteProjectMatrix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeCamera_mAbsoluteProjectMatrix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeCamera*)pObjectXXXX)->mAbsoluteProjectMatrix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getCameraRenderablePtr_CCameraInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setWindowImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLodCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLodCamera_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setWindow_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_resetWindow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isWindowSet_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_forwardIntersect_void_CPlane_Vector4List(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setUseRenderingDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getUseRenderingDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_synchroniseBaseSettingsWith_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_calcProjectionParameters_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateView_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateView_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateViewImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanes_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateFrustumPlanesImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCorners_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateWorldSpaceCornersImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateVertexData_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isViewOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isFrustumOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_invalidateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_invalidateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFOVy_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFOVy_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setNearClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getNearClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFarClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFarClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setAspectRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAspectRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumOffset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumOffset_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFocalLength_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFocalLength_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_resetFrustumExtents_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixRS_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrixWithRSDepth_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getViewMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomViewMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomViewMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCustomProjectionMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomProjectionMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlanes_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getFrustumPlane_CPlane_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setProjectionType_void_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getProjectionType_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindow_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowHeight_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setOrthoWindowWidth_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowHeight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrthoWindowWidth_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableReflection_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_disableReflection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isReflected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getReflectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getReflectionPlane_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_enableCustomNearClipPlane_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_disableCustomNearClipPlane_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isCustomNearClipPlaneEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getPositionForViewUpdate_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getOrientationForViewUpdate_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getName_EVString_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_endEditing_void_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CGlobeCameraProxy* ptr = dynamic_cast<CGlobeCameraProxy*>((EarthView::World::Spatial3D::CGlobeCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CGlobeCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
		}
	}
}
