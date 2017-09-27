/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/commonscenecamera.h"
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
			typedef const EarthView::World::Graphic::CCamera::CCameraInternalRenderable*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback)(_in const void* anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback)(_in EarthView::World::Graphic::CCamera::CCameraListener* l);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* ref_lodCam);
			typedef const EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback)(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback)(_in const void* worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback)(_in ev_bool use);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback)(_in char*& newName);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback)();
			typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback)();
			typedef EarthView::World::Graphic::CViewport*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback)();
			typedef const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback)(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback)(_in const void* fovy);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback)(_in Real nearDist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback)(_in Real farDist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback)(_in Real ratio);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback)(_in const void* offset);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback)(_in Real horizontal, _in Real vertical);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback)(_in Real horizontal);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback)(_in Real focalLength);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback)(_in Real left, _in Real right, _in Real top, _in Real bottom);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback)(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback)(_in const void* relPos, _inout void* matToUpdate);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* viewMatrix);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback)(_in ev_bool enable, _in const void* projectionMatrix);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback)();
			typedef const EarthView::World::Spatial::Math::CPlane*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback)(_in ev_uint16 plane);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback)(_in const void* bound, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_Callback)(_in const void* bound);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback)(_in const void* vert, _in int* culledBy);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_Callback)(_in const void* vert);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback)(_in int pt);
			typedef int  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback)(_in Real w, _in Real h);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback)(_in Real h);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback)(_in Real w);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback)(_in const void* p);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* p);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback)(_in const void* sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback)(_in const EarthView::World::Graphic::CMovablePlane* plane);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback)(_in const void* plane);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CCommonSceneCameraProxy : public EarthView::World::Spatial3D::CCommonSceneCamera
			{
			private:
				EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CCommonSceneCameraProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommonSceneCamera(pList)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable(EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void(EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener(EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener(EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode(EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera(EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera(EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void(EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List(EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera(EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString(EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree(EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree(EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree(EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree(EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64(EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64(EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64(EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport(EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera(EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr(EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation(EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList(EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void(EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void(EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void(EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian(EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian(EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2(EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void(EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2(EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void(EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void(EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane(EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16(EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox(EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane(EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere(EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane(EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3(EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType(EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType(EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane(EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane(EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void(EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane(EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane(EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane(EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void(EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3(EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion(EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8(EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory(EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory(EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager(EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager(EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString(EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString(EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode(EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode(EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode(EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void(EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void(EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList(EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener(EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera(EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox(EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere(EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue(EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real(EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue(EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector(EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector(EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void(EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void(EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void(EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox(EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8(EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8(EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4(EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener(EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener(EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener(EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList(EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList(EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor(EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData(EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox(EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight(EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getHeading() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getHeading();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getTilt() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getTilt();
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound, _in EarthView::World::Graphic::FrustumPlane* culledBy) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback(&bound, (int*)culledBy);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isVisible(bound, culledBy);
				}
				virtual ev_bool isVisible(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& bound) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback(&bound);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isVisible(bound);
				}
				virtual EarthView::World::Graphic::CCamera* clone(_in const EVString& newName) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newName_Char = newName.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback(newName_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::clone(newName);
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CCommonSceneCamera::getWorldTransforms(xform);
				}
				virtual const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* getCameraRenderablePtr()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera::CCameraInternalRenderable* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getCameraRenderablePtr();
				}
				virtual ev_bool isViewOutOfDate() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isViewOutOfDate();
				}
				virtual void invalidateFrustum() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback();
					}
					else
						return this->CCommonSceneCamera::invalidateFrustum();
				}
				virtual void invalidateView() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback();
					}
					else
						return this->CCommonSceneCamera::invalidateView();
				}
				virtual void setWindowImpl() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback();
					}
					else
						return this->CCommonSceneCamera::setWindowImpl();
				}
				virtual EarthView::World::Spatial::Math::Vector4List getRayForwardIntersect(_in const EarthView::World::Spatial::Math::CVector3& anchor, _in const EarthView::World::Spatial::Math::CVector3* dir, _in Real planeOffset) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::Vector4List returnValue = *(EarthView::World::Spatial::Math::Vector4List*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback(&anchor, dir, planeOffset);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getRayForwardIntersect(anchor, dir, planeOffset);
				}
				virtual void addListener(_in EarthView::World::Graphic::CCamera::CCameraListener* ref_l)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback(ref_l);
					}
					else
						return this->CCommonSceneCamera::addListener(ref_l);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CCamera::CCameraListener* l)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback(l);
					}
					else
						return this->CCommonSceneCamera::removeListener(l);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getAbsoluteProjectMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getAbsoluteProjectMatrix();
				}
				virtual ev_bool isLockingToTarget() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isLockingToTarget();
				}
				virtual EarthView::World::Graphic::CSceneNode* getLockTarget()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLockTarget();
				}
				virtual ev_bool isSlaveCamera()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isSlaveCamera();
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getMovableType();
				}
				virtual void setLodCamera(_in const EarthView::World::Graphic::CCamera* ref_lodCam)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback(ref_lodCam);
					}
					else
						return this->CCommonSceneCamera::setLodCamera(ref_lodCam);
				}
				virtual const EarthView::World::Graphic::CCamera* getLodCamera() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLodCamera();
				}
				virtual void setWindow(_in Real Left, _in Real Top, _in Real Right, _in Real Bottom)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback(Left, Top, Right, Bottom);
					}
					else
						return this->CCommonSceneCamera::setWindow(Left, Top, Right, Bottom);
				}
				virtual void resetWindow()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback();
					}
					else
						return this->CCommonSceneCamera::resetWindow();
				}
				virtual ev_bool isWindowSet() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isWindowSet();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getBoundingRadius();
				}
				virtual void forwardIntersect(_in const EarthView::World::Spatial::Math::CPlane& worldPlane, _in EarthView::World::Spatial::Math::Vector4List* intersect3d) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback(&worldPlane, intersect3d);
					}
					else
						return this->CCommonSceneCamera::forwardIntersect(worldPlane, intersect3d);
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getFrustumPlane(_in ev_uint16 plane) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback(plane);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getFrustumPlane(plane);
				}
				virtual ev_bool projectSphere(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in Real* left, _in Real* top, _in Real* right, _in Real* bottom) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback(&sphere, left, top, right, bottom);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::projectSphere(sphere, left, top, right, bottom);
				}
				virtual Real getNearClipDistance() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getNearClipDistance();
				}
				virtual Real getFarClipDistance() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getFarClipDistance();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getViewMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getViewMatrix();
				}
				virtual void setUseRenderingDistance(_in ev_bool use)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback(use);
					}
					else
						return this->CCommonSceneCamera::setUseRenderingDistance(use);
				}
				virtual ev_bool getUseRenderingDistance() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getUseRenderingDistance();
				}
				virtual void synchroniseBaseSettingsWith(_in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback(cam);
					}
					else
						return this->CCommonSceneCamera::synchroniseBaseSettingsWith(cam);
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPositionForViewUpdate() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector3& returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getPositionForViewUpdate();
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getOrientationForViewUpdate() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CQuaternion& returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getOrientationForViewUpdate();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLatitude() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLatitude();
				}
				virtual const EarthView::World::Spatial::Math::CDegree& getLongitude() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CDegree& returnValue = *(EarthView::World::Spatial::Math::CDegree*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLongitude();
				}
				virtual ev_real64 getAltitude() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getAltitude();
				}
				virtual ev_bool isUnderGround() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isUnderGround();
				}
				virtual ev_real64 getCameraDistanceOfGround() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getCameraDistanceOfGround();
				}
				virtual ev_real64 getAltitudeUnderCamera() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getAltitudeUnderCamera();
				}
				virtual EarthView::World::Graphic::CViewport* getGlobeViewport() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CViewport* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getGlobeViewport();
				}
				virtual ev_bool hasChanged() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::hasChanged();
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CCommonSceneCamera::getRenderOperation(op);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLights();
				}
				virtual const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* getFrustumRenderablePtr()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CFrustum::CFrustumInternalRenderable* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getFrustumRenderablePtr();
				}
				virtual void calcProjectionParameters(_inout Real& left, _inout Real& right, _inout Real& bottom, _inout Real& top) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback(left, right, bottom, top);
					}
					else
						return this->CCommonSceneCamera::calcProjectionParameters(left, right, bottom, top);
				}
				virtual void updateFrustum() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateFrustum();
				}
				virtual void updateView() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateView();
				}
				virtual void updateFrustumImpl() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateFrustumImpl();
				}
				virtual void updateViewImpl() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateViewImpl();
				}
				virtual void updateFrustumPlanes() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateFrustumPlanes();
				}
				virtual void updateFrustumPlanesImpl() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateFrustumPlanesImpl();
				}
				virtual void updateWorldSpaceCorners() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateWorldSpaceCorners();
				}
				virtual void updateWorldSpaceCornersImpl() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateWorldSpaceCornersImpl();
				}
				virtual void updateVertexData() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback();
					}
					else
						return this->CCommonSceneCamera::updateVertexData();
				}
				virtual ev_bool isFrustumOutOfDate() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isFrustumOutOfDate();
				}
				virtual void setFOVy(_in const EarthView::World::Spatial::Math::CRadian& fovy)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback(&fovy);
					}
					else
						return this->CCommonSceneCamera::setFOVy(fovy);
				}
				virtual const EarthView::World::Spatial::Math::CRadian& getFOVy() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CRadian& returnValue = *(EarthView::World::Spatial::Math::CRadian*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getFOVy();
				}
				virtual void setNearClipDistance(_in Real nearDist)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback(nearDist);
					}
					else
						return this->CCommonSceneCamera::setNearClipDistance(nearDist);
				}
				virtual void setFarClipDistance(_in Real farDist)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback(farDist);
					}
					else
						return this->CCommonSceneCamera::setFarClipDistance(farDist);
				}
				virtual void setAspectRatio(_in Real ratio)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback(ratio);
					}
					else
						return this->CCommonSceneCamera::setAspectRatio(ratio);
				}
				virtual Real getAspectRatio() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getAspectRatio();
				}
				virtual void setFrustumOffset(_in const EarthView::World::Spatial::Math::CVector2& offset)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback(&offset);
					}
					else
						return this->CCommonSceneCamera::setFrustumOffset(offset);
				}
				virtual void setFrustumOffset(_in Real horizontal, _in Real vertical)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback(horizontal, vertical);
					}
					else
						return this->CCommonSceneCamera::setFrustumOffset(horizontal, vertical);
				}
				virtual void setFrustumOffset(_in Real horizontal)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback(horizontal);
					}
					else
						return this->CCommonSceneCamera::setFrustumOffset(horizontal);
				}
				virtual void setFrustumOffset()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback();
					}
					else
						return this->CCommonSceneCamera::setFrustumOffset();
				}
				virtual const EarthView::World::Spatial::Math::CVector2& getFrustumOffset() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CVector2& returnValue = *(EarthView::World::Spatial::Math::CVector2*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getFrustumOffset();
				}
				virtual void setFocalLength(_in Real focalLength)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback(focalLength);
					}
					else
						return this->CCommonSceneCamera::setFocalLength(focalLength);
				}
				virtual void setFocalLength()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback();
					}
					else
						return this->CCommonSceneCamera::setFocalLength();
				}
				virtual Real getFocalLength() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getFocalLength();
				}
				virtual void setFrustumExtents(_in Real left, _in Real right, _in Real top, _in Real bottom)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback(left, right, top, bottom);
					}
					else
						return this->CCommonSceneCamera::setFrustumExtents(left, right, top, bottom);
				}
				virtual void resetFrustumExtents()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback();
					}
					else
						return this->CCommonSceneCamera::resetFrustumExtents();
				}
				virtual void getFrustumExtents(_inout Real& outleft, _inout Real& outright, _inout Real& outtop, _inout Real& outbottom) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback(outleft, outright, outtop, outbottom);
					}
					else
						return this->CCommonSceneCamera::getFrustumExtents(outleft, outright, outtop, outbottom);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixRS() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getProjectionMatrixRS();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrixWithRSDepth() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getProjectionMatrixWithRSDepth();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getProjectionMatrix();
				}
				virtual void calcViewMatrixRelative(_in const EarthView::World::Spatial::Math::CVector3& relPos, _inout EarthView::World::Spatial::Math::CMatrix4& matToUpdate) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback(&relPos, &matToUpdate);
					}
					else
						return this->CCommonSceneCamera::calcViewMatrixRelative(relPos, matToUpdate);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback(enable, &viewMatrix);
					}
					else
						return this->CCommonSceneCamera::setCustomViewMatrix(enable, viewMatrix);
				}
				virtual void setCustomViewMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CCommonSceneCamera::setCustomViewMatrix(enable);
				}
				virtual ev_bool isCustomViewMatrixEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isCustomViewMatrixEnabled();
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CMatrix4& projectionMatrix)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback(enable, &projectionMatrix);
					}
					else
						return this->CCommonSceneCamera::setCustomProjectionMatrix(enable, projectionMatrix);
				}
				virtual void setCustomProjectionMatrix(_in ev_bool enable)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback(enable);
					}
					else
						return this->CCommonSceneCamera::setCustomProjectionMatrix(enable);
				}
				virtual ev_bool isCustomProjectionMatrixEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isCustomProjectionMatrixEnabled();
				}
				virtual const EarthView::World::Spatial::Math::CPlane* getFrustumPlanes() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getFrustumPlanes();
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getTypeFlags();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getBoundingBox();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CCommonSceneCamera::_updateRenderQueue(queue);
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CCommonSceneCamera::_notifyCurrentCamera(cam);
				}
				virtual void setProjectionType(_in EarthView::World::Graphic::ProjectionType pt)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback((int)pt);
					}
					else
						return this->CCommonSceneCamera::setProjectionType(pt);
				}
				virtual EarthView::World::Graphic::ProjectionType getProjectionType() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ProjectionType returnValue = (EarthView::World::Graphic::ProjectionType)m_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getProjectionType();
				}
				virtual void setOrthoWindow(_in Real w, _in Real h)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback(w, h);
					}
					else
						return this->CCommonSceneCamera::setOrthoWindow(w, h);
				}
				virtual void setOrthoWindowHeight(_in Real h)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback(h);
					}
					else
						return this->CCommonSceneCamera::setOrthoWindowHeight(h);
				}
				virtual void setOrthoWindowWidth(_in Real w)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback(w);
					}
					else
						return this->CCommonSceneCamera::setOrthoWindowWidth(w);
				}
				virtual Real getOrthoWindowHeight() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getOrthoWindowHeight();
				}
				virtual Real getOrthoWindowWidth() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getOrthoWindowWidth();
				}
				virtual void enableReflection(_in const EarthView::World::Spatial::Math::CPlane& p)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback(&p);
					}
					else
						return this->CCommonSceneCamera::enableReflection(p);
				}
				virtual void enableReflection(_in const EarthView::World::Graphic::CMovablePlane* p)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback(p);
					}
					else
						return this->CCommonSceneCamera::enableReflection(p);
				}
				virtual void disableReflection()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback();
					}
					else
						return this->CCommonSceneCamera::disableReflection();
				}
				virtual ev_bool isReflected() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isReflected();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getReflectionMatrix() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getReflectionMatrix();
				}
				virtual const EarthView::World::Spatial::Math::CPlane& getReflectionPlane() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CPlane& returnValue = *(EarthView::World::Spatial::Math::CPlane*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getReflectionPlane();
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Graphic::CMovablePlane* plane)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback(plane);
					}
					else
						return this->CCommonSceneCamera::enableCustomNearClipPlane(plane);
				}
				virtual void enableCustomNearClipPlane(_in const EarthView::World::Spatial::Math::CPlane& plane)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback(&plane);
					}
					else
						return this->CCommonSceneCamera::enableCustomNearClipPlane(plane);
				}
				virtual void disableCustomNearClipPlane()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback();
					}
					else
						return this->CCommonSceneCamera::disableCustomNearClipPlane();
				}
				virtual ev_bool isCustomNearClipPlaneEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isCustomNearClipPlaneEnabled();
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CCommonSceneCamera::visitRenderables(visitor, debugRenderables);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CCommonSceneCamera::visitRenderables(visitor);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CCommonSceneCamera::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CCommonSceneCamera::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CCommonSceneCamera::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CCommonSceneCamera::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback();
					}
					else
						return this->CCommonSceneCamera::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback();
					}
					else
						return this->CCommonSceneCamera::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CCommonSceneCamera::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CCommonSceneCamera::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CCommonSceneCamera::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CCommonSceneCamera::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CCommonSceneCamera::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CCommonSceneCamera::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CCommonSceneCamera::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getRenderingMinPixelSize();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CCommonSceneCamera::setSelectionColour(colour);
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getSelected();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback();
					}
					else
						return this->CCommonSceneCamera::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback();
					}
					else
						return this->CCommonSceneCamera::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback();
					}
					else
						return this->CCommonSceneCamera::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CCommonSceneCamera::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CCommonSceneCamera::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCommonSceneCamera::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCommonSceneCamera::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCommonSceneCamera::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCommonSceneCamera::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCommonSceneCamera::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CCommonSceneCamera::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getVisibilityFlags();
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CCommonSceneCamera::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CCommonSceneCamera::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::getPointExtrusionDistance(l);
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CCommonSceneCamera::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCommonSceneCamera::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CCommonSceneCamera::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CCommonSceneCamera::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CCommonSceneCamera::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CCommonSceneCameraProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_initialize_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->initialize();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeAngles_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->computeAngles();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setRotationParam_void_CVector3_CRadian(void *pObjectXXXX, _in const void* axisofRotation, _in const void* degreePerFrame )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setRotationParam(*(EarthView::World::Spatial::Math::CVector3*)axisofRotation, *(EarthView::World::Spatial::Math::CRadian*)degreePerFrame);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_OperatorEquals_ev_bool_CCommonSceneCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera& objXXXX = *(EarthView::World::Spatial3D::CCommonSceneCamera*) pObjXXXX;
				const EarthView::World::Spatial3D::CCommonSceneCamera& objXXXX1 = *(EarthView::World::Spatial3D::CCommonSceneCamera*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_OperatorNotEquals_ev_bool_CCommonSceneCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera& objXXXX = *(EarthView::World::Spatial3D::CCommonSceneCamera*) pObjXXXX;
				const EarthView::World::Spatial3D::CCommonSceneCamera& objXXXX1 = *(EarthView::World::Spatial3D::CCommonSceneCamera*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_OperatorAssign_void_CCommonSceneCamera(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera& objXXXX = *((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial3D::CCommonSceneCamera*)rhs;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setHeading_void_CDegree(void *pObjectXXXX, _in const void* heading )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setHeading(*(EarthView::World::Spatial::Math::CDegree*)heading);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				if (dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CCommonSceneCamera::getHeading();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getHeading_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CCommonSceneCamera::getHeading();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setTilt_void_CDegree(void *pObjectXXXX, _in const void* tilt )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setTilt(*(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				if (dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CCommonSceneCamera::getTilt();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getTilt_CDegree_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CCommonSceneCamera::getTilt();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setObserver_void_CVector3(void *pObjectXXXX, _in const void* observer )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setObserver(*(EarthView::World::Spatial::Math::CVector3*)observer);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getObserver_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getObserver();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setTarget_void_CVector3(void *pObjectXXXX, _in const void* target )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setTarget(*(EarthView::World::Spatial::Math::CVector3*)target);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getTarget_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getTarget();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setUpVector_void_CVector3(void *pObjectXXXX, _in const void* upVector )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setUpVector(*(EarthView::World::Spatial::Math::CVector3*)upVector);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getUpVector_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getUpVector();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setLookVector_void_CVector3(void *pObjectXXXX, _in const void* lookVector )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setLookVector(*(EarthView::World::Spatial::Math::CVector3*)lookVector);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getLookVector_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getLookVector();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setRightVector_void_CVector3(void *pObjectXXXX, _in const void* rightVector )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setRightVector(*(EarthView::World::Spatial::Math::CVector3*)rightVector);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getRightVector_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getRightVector();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getAlititude_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const ev_real64 objXXXX = ptrNativeObject->getAlititude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getDistance_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const ev_real64 objXXXX = ptrNativeObject->getDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getMinTilt_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getMinTilt();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getMaxTilt_CDegree(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CDegree& objXXXX = ptrNativeObject->getMaxTilt();
				const EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setMouseEvent_void_ev_bool(void *pObjectXXXX, _in const ev_bool mouseEvent )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setMouseEvent(mouseEvent);
			}
			extern "C" EV_DLL_EXPORT  const ev_bool  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getMouseEvent_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const ev_bool objXXXX = ptrNativeObject->getMouseEvent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setWheelEvent_void_ev_bool(void *pObjectXXXX, _in const ev_bool wheelEvent )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setWheelEvent(wheelEvent);
			}
			extern "C" EV_DLL_EXPORT  const ev_bool  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_getWheelEvent_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				const ev_bool objXXXX = ptrNativeObject->getWheelEvent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeAlitude_void_CVector3_CPlane(void *pObjectXXXX, _in const void* position, _in const void* plane )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->computeAlitude(*(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CPlane*)plane);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeDistance_void_CVector3_CVector3(void *pObjectXXXX, _in const void* point1, _in const void* point2 )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->computeDistance(*(EarthView::World::Spatial::Math::CVector3*)point1, *(EarthView::World::Spatial::Math::CVector3*)point2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setCameraState_void_CVector3_CDegree_CDegree(void *pObjectXXXX, _in const void* position, _in const void* heading, _in const void* tilt )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setCameraState(*(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeCameraTilt_ev_real64_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* target, _in const void* observer, _in const void* upVector )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->computeCameraTilt(*(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)upVector);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeCameraHeading_ev_real64_CVector3_CVector3_ev_real64_CVector3(void *pObjectXXXX, _in const void* up, _in const void* look, _in ev_real64 tiltRadious, _in const void* target )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->computeCameraHeading(*(EarthView::World::Spatial::Math::CVector3*)up, *(EarthView::World::Spatial::Math::CVector3*)look, tiltRadious, *(EarthView::World::Spatial::Math::CVector3*)target);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeAxisMatrix_CMatrix3_CVector3(void *pObjectXXXX, _in void* position )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix3 objXXXX = ptrNativeObject->computeAxisMatrix(*(EarthView::World::Spatial::Math::CVector3*)position);
				EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->computeViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_computeProjectMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->computeProjectMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setViewMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* viewMatrix )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setViewMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)viewMatrix);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setViewMatrix_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _in const void* observer, _in const void* target, _in const void* upVector )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setViewMatrix(*(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)upVector);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_setInitViewMatrix_void_CVector3_CVector3_CVector3(void *pObjectXXXX, _inout void* Position, _inout void* target, _inout void* upVector )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ptrNativeObject->setInitViewMatrix(*(EarthView::World::Spatial::Math::CVector3*)Position, *(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)upVector);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCommonSceneCamera_screenToScene_CRay_ev_real32_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 y, _in ev_real64 top, _in ev_real64 left, _in ev_real64 width, _in ev_real64 height )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRay objXXXX = ptrNativeObject->screenToScene(x, y, top, left, width, height);
				EarthView::World::Spatial::Math::CRay *pXXXX = new EarthView::World::Spatial::Math::CRay(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mHeading( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mHeading;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mHeading( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mHeading = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mTilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mTilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mTilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mMinTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mMinTilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mMinTilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mMinTilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mMaxTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mMaxTilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mMaxTilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mMaxTilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mAltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mAltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mAltitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mAltitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mDistance = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mTarget( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mTarget;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mTarget( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mTarget = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mObserver( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mObserver;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mObserver( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mObserver = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mUpVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mUpVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mUpVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mUpVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mLookVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mLookVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mLookVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mLookVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mRightVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mRightVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mRightVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mRightVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_misCameraInitialized( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->misCameraInitialized;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_misCameraInitialized( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->misCameraInitialized = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_minitUpVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->minitUpVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_minitUpVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->minitUpVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mInitialLookVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mInitialLookVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mInitialLookVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mInitialLookVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mCameraInitialPosition( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mCameraInitialPosition;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mCameraInitialPosition( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mCameraInitialPosition = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CCommonSceneManager*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mCommonSceneManager( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial3D::CCommonSceneManager* objXXXX = ptrNativeObject->mCommonSceneManager;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mCommonSceneManager( void *pObjectXXXX, EarthView::World::Spatial3D::CCommonSceneManager*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mCommonSceneManager = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mlastRightVector( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mlastRightVector;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mlastRightVector( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mlastRightVector = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mAngleX( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian &objXXXX = ptrNativeObject->mAngleX;
				EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mAngleX( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mAngleX = *(EarthView::World::Spatial::Math::CRadian*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mAngleY( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian &objXXXX = ptrNativeObject->mAngleY;
				EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mAngleY( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mAngleY = *(EarthView::World::Spatial::Math::CRadian*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mAxisofRotation( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mAxisofRotation;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mAxisofRotation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mAxisofRotation = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mDegreePerFrame( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian &objXXXX = ptrNativeObject->mDegreePerFrame;
				EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mDegreePerFrame( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mDegreePerFrame = *(EarthView::World::Spatial::Math::CRadian*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mMouseEvent( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mMouseEvent;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mMouseEvent( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mMouseEvent = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CCommonSceneCamera_mWheelEvent( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCommonSceneCamera* ptrNativeObject = (EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mWheelEvent;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCommonSceneCamera_mWheelEvent( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CCommonSceneCamera*)pObjectXXXX)->mWheelEvent = value;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraRenderablePtr_CCameraInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setWindowImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRayForwardIntersect_Vector4List_CVector3_CVector3_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CCameraListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAbsoluteProjectMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isLockingToTarget_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLockTarget_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isSlaveCamera_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLodCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLodCamera_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setWindow_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_resetWindow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isWindowSet_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_forwardIntersect_void_CPlane_Vector4List(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setUseRenderingDistance_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getUseRenderingDistance_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_synchroniseBaseSettingsWith_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_clone_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLatitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLongitude_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitude_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isUnderGround_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCameraDistanceOfGround_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAltitudeUnderCamera_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getGlobeViewport_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_hasChanged_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumRenderablePtr_CFrustumInternalRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_calcProjectionParameters_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateViewImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanes_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateFrustumPlanesImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCorners_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateWorldSpaceCornersImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateVertexData_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isViewOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isFrustumOutOfDate_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateFrustum_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_invalidateView_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFOVy_void_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFOVy_CRadian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setNearClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getNearClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFarClipDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFarClipDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setAspectRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAspectRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumOffset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumOffset_CVector2(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFocalLength_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFocalLength_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_resetFrustumExtents_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumExtents_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixRS_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrixWithRSDepth_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getViewMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_calcViewMatrixRelative_void_CVector3_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomViewMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomViewMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCustomProjectionMatrix_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomProjectionMatrixEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlanes_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getFrustumPlane_CPlane_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_FrustumPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setProjectionType_void_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getProjectionType_ProjectionType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindow_void_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowHeight_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setOrthoWindowWidth_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowHeight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrthoWindowWidth_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableReflection_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_disableReflection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isReflected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReflectionPlane_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_projectSphere_ev_bool_CSphere_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CMovablePlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_enableCustomNearClipPlane_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_disableCustomNearClipPlane_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isCustomNearClipPlaneEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getPositionForViewUpdate_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getOrientationForViewUpdate_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CCommonSceneCameraProxy* ptr = dynamic_cast<CCommonSceneCameraProxy*>((EarthView::World::Spatial3D::CCommonSceneCamera*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CCommonSceneCamera_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
		}
	}
}
