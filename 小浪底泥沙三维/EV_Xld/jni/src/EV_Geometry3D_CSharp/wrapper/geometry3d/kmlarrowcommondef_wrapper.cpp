/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/kmlarrowcommondef.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_OperatorAssign_CArrowBaseInfo_CArrowBaseInfo(void *pObjXXXX, _in const void* arrowInfo )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo& objXXXX = *((EarthView::World::Geometry3D::CArrowBaseInfo*) pObjXXXX);
				objXXXX = *(EarthView::World::Geometry3D::CArrowBaseInfo*)arrowInfo;
				EarthView::World::Geometry3D::CArrowBaseInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_isEqual_ev_bool_CArrowBaseInfo(void *pObjectXXXX, _in const void* arrowInfo )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEqual(*(EarthView::World::Geometry3D::CArrowBaseInfo*)arrowInfo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_setColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ptrNativeObject->setColor(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_setArrowType_void_ArrowType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ptrNativeObject->setArrowType((EarthView::World::Spatial::Kml::ArrowType)type);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_setStartAltitude_void_ev_real32(void *pObjectXXXX, _in ev_real32 atitudeValue )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ptrNativeObject->setStartAltitude(atitudeValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_setEndAltitude_void_ev_real32(void *pObjectXXXX, _in ev_real32 atitudeValue )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ptrNativeObject->setEndAltitude(atitudeValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_addKeyPoint_void_CVector3(void *pObjectXXXX, _in const void* t )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ptrNativeObject->addKeyPoint(*(EarthView::World::Spatial::Math::CVector3*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_reMoveAllPoints_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ptrNativeObject->reMoveAllPoints();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_getColor_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getColor();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_getType_ArrowType(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				EarthView::World::Spatial::Kml::ArrowType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_getStartAltitude_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getStartAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_getEndAltitude_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getEndAltitude();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_getKeyPoints_VertexList(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				EarthView::World::Spatial::Math::VertexList objXXXX = ptrNativeObject->getKeyPoints();
				EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CArrowBaseInfo_getKeyPointByIndex_CVector3_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Geometry3D::CArrowBaseInfo* ptrNativeObject = (EarthView::World::Geometry3D::CArrowBaseInfo*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getKeyPointByIndex(index);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CArrowMathEngine_createGroundArrowPoints_VertexList_VertexList(_in const void* mKeyPoints )
			{
				EarthView::World::Spatial::Math::VertexList objXXXX = EarthView::World::Geometry3D::CArrowMathEngine::createGroundArrowPoints(*(EarthView::World::Spatial::Math::VertexList*)mKeyPoints);
				EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CArrowMathEngine_createThreeDArrowPoints_VertexList_VertexList_VertexList_CVector3(_in const void* mKeyPoints, _inout void* drawPointsT, _inout void* endPointT )
			{
				EarthView::World::Spatial::Math::VertexList objXXXX = EarthView::World::Geometry3D::CArrowMathEngine::createThreeDArrowPoints(*(EarthView::World::Spatial::Math::VertexList*)mKeyPoints, *(EarthView::World::Spatial::Math::VertexList*)drawPointsT, *(EarthView::World::Spatial::Math::CVector3*)endPointT);
				EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another);
			typedef bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback)(_in EarthView::World::Spatial::Geometry::CCurve* curve);
			typedef int  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback)(_in const void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* faceMap, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* sliceA, _inout void* sliceB, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback)();
			typedef EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback)(_in const void* rend);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback)();
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CKmlArrow3DMovableProxy : public EarthView::World::Geometry3D::CKmlArrow3DMovable
			{
			private:
				EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CKmlArrow3DMovableProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlArrow3DMovable(pList)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx(EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve(EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint(EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void(EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal(EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr(EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation(EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation(EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4(EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList(EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera(EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8(EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory(EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory(EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager(EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager(EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString(EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString(EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode(EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode(EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode(EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void(EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void(EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList(EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener(EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera(EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox(EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere(EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue(EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue(EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector(EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector(EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void(EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void(EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void(EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox(EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8(EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8(EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4(EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener(EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener(EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener(EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList(EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList(EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor(EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData(EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox(EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight(EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getSquaredViewDepth(cam);
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getBoundingRadius();
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CKmlArrow3DMovable::getWorldTransforms(xform);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* unions(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::unions(another, pNewColor, offset);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* intersect(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::intersect(another, pNewColor, offset);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* minus(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::minus(another, pNewColor, offset);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* difference(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::difference(another, pNewColor, offset);
				}
				virtual bool isIntersected(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback(another);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::isIntersected(another);
				}
				virtual bool isIntersected(_in EarthView::World::Spatial::Geometry::CCurve* curve)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback(curve);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::isIntersected(curve);
				}
				virtual EarthView::World::Geometry3D::EVPointWithinType contains(_in const EarthView::World::Spatial::Geometry::CPoint& point)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::EVPointWithinType returnValue = (EarthView::World::Geometry3D::EVPointWithinType)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback(&point);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::contains(point);
				}
				virtual ev_bool sliceAndClassify(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& faceMap, _inout EarthView::World::Spatial::Geometry::CCoordinateSequence& sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback(another, &faceMap, &sharedEdges, pNewColor);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::sliceAndClassify(another, faceMap, sharedEdges, pNewColor);
				}
				virtual ev_bool slice(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& sliceA, _inout EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& sliceB, _inout EarthView::World::Spatial::Geometry::CCoordinateSequence& sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback(another, &sliceA, &sliceB, &sharedEdges, pNewColor);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::slice(another, sliceA, sliceB, sharedEdges, pNewColor);
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CKmlArrow3DMovable::setSelectionColour(colour);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback();
					}
					else
						return this->CKmlArrow3DMovable::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback();
					}
					else
						return this->CKmlArrow3DMovable::clearSelection();
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::setSelected(objIndics);
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback();
					}
					else
						return this->CKmlArrow3DMovable::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void flash(_in const EarthView::World::Graphic::CColourValue& color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback(&color, hightLight_ms, normally_ms, flashCount);
					}
					else
						return this->CKmlArrow3DMovable::flash(color, hightLight_ms, normally_ms, flashCount);
				}
				virtual void endFlash()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback();
					}
					else
						return this->CKmlArrow3DMovable::endFlash();
				}
				virtual EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal* getRenderable() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getRenderable();
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getMaterial();
				}
				virtual void setRenderOperation(_in const EarthView::World::Graphic::CRenderOperation& rend)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback(&rend);
					}
					else
						return this->CKmlArrow3DMovable::setRenderOperation(rend);
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CKmlArrow3DMovable::getRenderOperation(op);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getLights();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getBoundingBox();
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getMovableType();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getCastsShadows();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CKmlArrow3DMovable::_notifyCurrentCamera(cam);
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CKmlArrow3DMovable::_updateRenderQueue(queue);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CKmlArrow3DMovable::visitRenderables(visitor);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CKmlArrow3DMovable::visitRenderables(visitor, debugRenderables);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CKmlArrow3DMovable::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CKmlArrow3DMovable::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CKmlArrow3DMovable::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CKmlArrow3DMovable::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback();
					}
					else
						return this->CKmlArrow3DMovable::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback();
					}
					else
						return this->CKmlArrow3DMovable::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CKmlArrow3DMovable::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CKmlArrow3DMovable::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CKmlArrow3DMovable::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CKmlArrow3DMovable::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getVisible();
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::isVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CKmlArrow3DMovable::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CKmlArrow3DMovable::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CKmlArrow3DMovable::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getRenderingMinPixelSize();
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getSelected();
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CKmlArrow3DMovable::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CKmlArrow3DMovable::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CKmlArrow3DMovable::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CKmlArrow3DMovable::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CKmlArrow3DMovable::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CKmlArrow3DMovable::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CKmlArrow3DMovable::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CKmlArrow3DMovable::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CKmlArrow3DMovable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CKmlArrow3DMovable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CKmlArrow3DMovable::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CKmlArrow3DMovable::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getPointExtrusionDistance(l);
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::getTypeFlags();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CKmlArrow3DMovable::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrow3DMovable::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CKmlArrow3DMovable::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CKmlArrow3DMovable::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CKmlArrow3DMovable::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlArrow3DMovableProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_create_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrow3DMovable* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX;
				ptrNativeObject->create();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlArrow3DMovable_getCenter_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CKmlArrow3DMovable* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCenter();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CSimpleRenderableEx(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isIntersected_bool_CCurve(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_contains_EVPointWithinType_CPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_endFlash_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderable_CSimpleRenderableInternal(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CKmlArrow3DMovableProxy* ptr = dynamic_cast<CKmlArrow3DMovableProxy*>((EarthView::World::Geometry3D::CKmlArrow3DMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrow3DMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback)(_in const void* info);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback)();
			typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
			class CKmlArrowObjectExProxy : public EarthView::World::Geometry3D::CKmlArrowObjectEx
			{
			private:
				EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
			public:
				CKmlArrowObjectExProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlArrowObjectEx(pList)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void(EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo(EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void(EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void(EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference(EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode(EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode(EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode(EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData(EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool(EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer(EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset(EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32(EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString(EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4(EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4(EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::getNode();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CKmlArrowObjectEx::setSelectable(selectable);
				}
				virtual ev_bool isLoaded()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::isLoaded();
				}
				virtual ev_bool update()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::update();
				}
				virtual ev_bool isAttached()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::isAttached();
				}
				virtual ev_bool load()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::load();
				}
				virtual ev_bool unload()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::unload();
				}
				virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback(n);
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::attachToNode(n);
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::detachFromNode();
				}
				virtual ev_bool attachToScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::attachToScene();
				}
				virtual ev_bool detachFromScene()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::detachFromScene();
				}
				virtual void build()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback();
					}
					else
						return this->CKmlArrowObjectEx::build();
				}
				virtual void updataByArrowInfo(_in const EarthView::World::Geometry3D::CArrowBaseInfo& info)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback(&info);
					}
					else
						return this->CKmlArrowObjectEx::updataByArrowInfo(info);
				}
				virtual ev_bool isRendering()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::isRendering();
				}
				virtual void render()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback();
					}
					else
						return this->CKmlArrowObjectEx::render();
				}
				virtual void derender()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback();
					}
					else
						return this->CKmlArrowObjectEx::derender();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback(pSpatialRef);
					}
					else
						return this->CKmlArrowObjectEx::setSpatialReference(pSpatialRef);
				}
				virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback(&userData);
					}
					else
						return this->CKmlArrowObjectEx::setUserData(userData);
				}
				virtual ev_bool getSelectable()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::getSelectable();
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::getLayer();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::getDataset();
				}
				virtual ev_uint32 getID()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::getID();
				}
				virtual EVString getName()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::getName();
				}
				virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CKmlArrowObjectEx::setMatrix(m);
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectEx::getMatrix();
				}
				virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlArrowObjectEx::setPosition(latitude, longitude, altitude, scale, qua);
				}
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
					}
					else
						return this->CKmlArrowObjectEx::getPosition(latitude, longitude, altitude, scale, qua);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlArrowObjectExProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::getNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::getNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::setSelectable(selectable);
				else
					ptrNativeObject->setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool selectable )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::setSelectable(selectable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::update();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->update();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_update_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::update();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::isAttached();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAttached();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::isAttached();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::load();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->load();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_load_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::load();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::unload();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->unload();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_unload_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::unload();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::attachToNode(n);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToNode(n);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::attachToNode(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::detachFromNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::attachToScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->attachToScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::attachToScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::detachFromScene();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->detachFromScene();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::detachFromScene();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getMaxnum_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getMaxnum();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getMinnum_CVector3(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getMinnum();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->setVisible(b);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getVisible_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getType_ArrowType(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				EarthView::World::Spatial::Kml::ArrowType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::build();
				else
					ptrNativeObject->build();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_build_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::build();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo(void *pObjectXXXX, _in const void* info )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::updataByArrowInfo(*(EarthView::World::Geometry3D::CArrowBaseInfo*)info);
				else
					ptrNativeObject->updataByArrowInfo(*(EarthView::World::Geometry3D::CArrowBaseInfo*)info);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_updataByArrowInfo_void_CArrowBaseInfo_NoVirtual(void *pObjectXXXX, _in const void* info )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::updataByArrowInfo(*(EarthView::World::Geometry3D::CArrowBaseInfo*)info);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::isRendering();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isRendering();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_isRendering_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::isRendering();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::render();
				else
					ptrNativeObject->render();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_render_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::render();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::derender();
				else
					ptrNativeObject->derender();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_derender_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::derender();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::setSpatialReference(pSpatialRef);
				else
					ptrNativeObject->setSpatialReference(pSpatialRef);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::setSpatialReference(pSpatialRef);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getKeyPoints_VertexList(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				EarthView::World::Spatial::Math::VertexList objXXXX = ptrNativeObject->getKeyPoints();
				EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_getKeyPointByIndex_CVector3_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getKeyPointByIndex(index);
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
				else
					ptrNativeObject->setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectEx_setUserData_void_CFeatureUserData_NoVirtual(void *pObjectXXXX, _inout void* userData )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectEx* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectEx::setUserData(*(EarthView::World::Spatial3D::CFeatureUserData*)userData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getLayer_IGlobeLayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
			{
				CKmlArrowObjectExProxy* ptr = dynamic_cast<CKmlArrowObjectExProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectEx_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
				}
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback)(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visitObj);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			typedef EarthView::World::Spatial::CGeoObject*  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index);
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback)(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj);
			class CKmlArrowObjectExFactoryProxy : public EarthView::World::Geometry3D::CKmlArrowObjectExFactory
			{
			private:
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback;
				EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback;
			public:
				CKmlArrowObjectExFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlArrowObjectExFactory(pList)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject(EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback = pCallback;
				}
				virtual ev_uint16 getFactoryType()
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CKmlArrowObjectExFactory::getFactoryType();
				}
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(_in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::VisibleObjects returnValue = *(EarthView::World::Geometry3D::VisibleObjects*)m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback(geoObj, scenemanager);
						return returnValue;
					}
					else
						return this->CKmlArrowObjectExFactory::createRenderable(geoObj, scenemanager);
				}
				virtual void destoryRenderable(_in EarthView::World::Geometry3D::CVisibleObject* visitObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback(visitObj);
					}
					else
						return this->CKmlArrowObjectExFactory::destoryRenderable(visitObj);
				}
				virtual ev_bool appendGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, ref_geoObject);
						return returnValue;
					}
					else
						return this->CKmlArrowObjectExFactory::appendGeoObject(visibleObj, ref_geoObject);
				}
				virtual ev_bool removeGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback(visibleObj, geoObject);
						return returnValue;
					}
					else
						return this->CKmlArrowObjectExFactory::removeGeoObject(visibleObj, geoObject);
				}
				virtual void removeAllGeoObjects(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj)
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback(visibleObj);
					}
					else
						return this->CKmlArrowObjectExFactory::removeAllGeoObjects(visibleObj);
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj, _in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::CGeoObject* returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback(visibleObj, index);
						return returnValue;
					}
					else
						return this->CKmlArrowObjectExFactory::getGeoObject(visibleObj, index);
				}
				virtual ev_uint64 getGeoObjectCount(_in EarthView::World::Geometry3D::CVisibleObject* visibleObj) const
				{
					if(m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback(visibleObj);
						return returnValue;
					}
					else
						return this->CKmlArrowObjectExFactory::getGeoObjectCount(visibleObj);
				}
			};
			REGISTER_FACTORY_CLASS(CKmlArrowObjectExFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectExFactory::getFactoryType();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getFactoryType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getFactoryType_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectExFactory::getFactoryType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectExFactory::createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->createRenderable(geoObj, scenemanager);
					EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_createRenderable_VisibleObjects_CGeoObjectExtension_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Graphic::CSceneManager* scenemanager )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX;
				EarthView::World::Geometry3D::VisibleObjects objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectExFactory::createRenderable(geoObj, scenemanager);
				EarthView::World::Geometry3D::VisibleObjects *pXXXX = new EarthView::World::Geometry3D::VisibleObjects(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX;
				if (dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectExFactory::destoryRenderable(visitObj);
				else
					ptrNativeObject->destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CKmlArrowObjectExFactory_destoryRenderable_void_CVisibleObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* visitObj )
			{
				EarthView::World::Geometry3D::CKmlArrowObjectExFactory* ptrNativeObject = (EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CKmlArrowObjectExFactory::destoryRenderable(visitObj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_appendGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeGeoObject_ev_bool_CVisibleObject_CGeoObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_removeAllGeoObjects_void_CVisibleObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObject_CGeoObject_CVisibleObject_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject( void *pObjectXXXX, EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject_Callback* pCallback )
			{
				CKmlArrowObjectExFactoryProxy* ptr = dynamic_cast<CKmlArrowObjectExFactoryProxy*>((EarthView::World::Geometry3D::CKmlArrowObjectExFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CKmlArrowObjectExFactory_getGeoObjectCount_ev_uint64_CVisibleObject(pCallback);
				}
			}
		}
	}
}
