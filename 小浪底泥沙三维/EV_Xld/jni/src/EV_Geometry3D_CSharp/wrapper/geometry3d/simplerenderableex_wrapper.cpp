/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3d/simplerenderableex.h"
namespace carve
{
	namespace poly
	{
	}
	namespace geom
	{
	}
	namespace geom3d
	{
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
			namespace Display
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
		namespace Geometry3D
		{
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Geometry3D_CFaceWithSimpleRenderableEx_FaceType( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Geometry3D::EVFaceWithinType objXXXX = ptrNativeObject->FaceType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CFaceWithSimpleRenderableEx_FaceType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*)pObjectXXXX)->FaceType = (EarthView::World::Geometry3D::EVFaceWithinType)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall Get_EarthView_World_Geometry3D_CFaceWithSimpleRenderableEx_Polyhedron( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->Polyhedron;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CFaceWithSimpleRenderableEx_Polyhedron( void *pObjectXXXX, EarthView::World::Geometry3D::CSimpleRenderableEx*  value )
			{
				((EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*)pObjectXXXX)->Polyhedron = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_push_back_void_CFaceWithSimpleRenderableEx(void *pObjectXXXX, _in EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*& t )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_front_CFaceWithSimpleRenderableEx(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_back_CFaceWithSimpleRenderableEx(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_insert_void_ev_uint32_CFaceWithSimpleRenderableEx(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*& t )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_insert_void_ev_uint32_CFaceWithSimpleRenderableExSet(void *pObjectXXXX, _in ev_uint32 pos, _in void* other )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)other);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_OperatorIndex_CFaceWithSimpleRenderableEx_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& objYYYY = *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjXXXX;
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_at_CFaceWithSimpleRenderableEx_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CFaceWithSimpleRenderableExSet_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet* ptrNativeObject = (EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef EarthView::World::Geometry3D::CSimpleRenderableEx*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset);
			typedef bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another);
			typedef bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback)(_in EarthView::World::Spatial::Geometry::CCurve* curve);
			typedef int  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback)(_in const void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* faceMap, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback)(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* sliceA, _inout void* sliceB, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback)();
			typedef EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback)(_in const void* rend);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback)();
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback)();
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CSimpleRenderableExProxy : public EarthView::World::Geometry3D::CSimpleRenderableEx
			{
			private:
				EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CSimpleRenderableExProxy(EarthView::World::Core::CNameValuePairList *pList) : CSimpleRenderableEx(pList)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx(EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve(EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint(EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void(EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal(EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr(EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation(EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation(EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4(EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList(EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera(EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8(EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory(EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory(EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager(EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager(EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString(EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString(EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode(EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode(EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode(EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void(EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void(EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList(EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener(EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera(EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox(EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere(EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue(EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue(EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector(EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector(EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void(EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void(EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void(EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox(EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8(EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8(EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4(EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener(EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener(EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener(EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList(EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList(EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor(EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData(EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox(EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight(EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getSquaredViewDepth(cam);
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getBoundingRadius();
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CSimpleRenderableEx::getWorldTransforms(xform);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* unions(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::unions(another, pNewColor, offset);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* intersect(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::intersect(another, pNewColor, offset);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* minus(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::minus(another, pNewColor, offset);
				}
				virtual EarthView::World::Geometry3D::CSimpleRenderableEx* difference(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout EarthView::World::Spatial::Math::CVector3& offset)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::CSimpleRenderableEx* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback(another, pNewColor, &offset);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::difference(another, pNewColor, offset);
				}
				virtual bool isIntersected(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback(another);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::isIntersected(another);
				}
				virtual bool isIntersected(_in EarthView::World::Spatial::Geometry::CCurve* curve)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback(curve);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::isIntersected(curve);
				}
				virtual EarthView::World::Geometry3D::EVPointWithinType contains(_in const EarthView::World::Spatial::Geometry::CPoint& point)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Geometry3D::EVPointWithinType returnValue = (EarthView::World::Geometry3D::EVPointWithinType)m_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback(&point);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::contains(point);
				}
				virtual ev_bool sliceAndClassify(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& faceMap, _inout EarthView::World::Spatial::Geometry::CCoordinateSequence& sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback(another, &faceMap, &sharedEdges, pNewColor);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::sliceAndClassify(another, faceMap, sharedEdges, pNewColor);
				}
				virtual ev_bool slice(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& sliceA, _inout EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& sliceB, _inout EarthView::World::Spatial::Geometry::CCoordinateSequence& sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback(another, &sliceA, &sliceB, &sharedEdges, pNewColor);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::slice(another, sliceA, sliceB, sharedEdges, pNewColor);
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CSimpleRenderableEx::setSelectionColour(colour);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback();
					}
					else
						return this->CSimpleRenderableEx::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback();
					}
					else
						return this->CSimpleRenderableEx::clearSelection();
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::setSelected(objIndics);
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback();
					}
					else
						return this->CSimpleRenderableEx::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual void flash(_in const EarthView::World::Graphic::CColourValue& color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback(&color, hightLight_ms, normally_ms, flashCount);
					}
					else
						return this->CSimpleRenderableEx::flash(color, hightLight_ms, normally_ms, flashCount);
				}
				virtual void endFlash()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback();
					}
					else
						return this->CSimpleRenderableEx::endFlash();
				}
				virtual EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal* getRenderable() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSimpleRenderable::CSimpleRenderableInternal* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getRenderable();
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getMaterial();
				}
				virtual void setRenderOperation(_in const EarthView::World::Graphic::CRenderOperation& rend)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback(&rend);
					}
					else
						return this->CSimpleRenderableEx::setRenderOperation(rend);
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CSimpleRenderableEx::getRenderOperation(op);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getLights();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getBoundingBox();
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getMovableType();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getCastsShadows();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CSimpleRenderableEx::_notifyCurrentCamera(cam);
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CSimpleRenderableEx::_updateRenderQueue(queue);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CSimpleRenderableEx::visitRenderables(visitor);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CSimpleRenderableEx::visitRenderables(visitor, debugRenderables);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CSimpleRenderableEx::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CSimpleRenderableEx::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::isParentTagPoint();
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CSimpleRenderableEx::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback(ref_parent);
					}
					else
						return this->CSimpleRenderableEx::_notifyAttached(ref_parent);
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback();
					}
					else
						return this->CSimpleRenderableEx::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback();
					}
					else
						return this->CSimpleRenderableEx::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CSimpleRenderableEx::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CSimpleRenderableEx::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CSimpleRenderableEx::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CSimpleRenderableEx::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getVisible();
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::isVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CSimpleRenderableEx::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CSimpleRenderableEx::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CSimpleRenderableEx::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getRenderingMinPixelSize();
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getSelected();
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CSimpleRenderableEx::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CSimpleRenderableEx::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CSimpleRenderableEx::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CSimpleRenderableEx::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CSimpleRenderableEx::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CSimpleRenderableEx::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CSimpleRenderableEx::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CSimpleRenderableEx::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CSimpleRenderableEx::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CSimpleRenderableEx::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getListener(index);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::queryLights();
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CSimpleRenderableEx::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CSimpleRenderableEx::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getCastShadows();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getReceivesShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getPointExtrusionDistance(l);
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::getTypeFlags();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CSimpleRenderableEx::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSimpleRenderableEx::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CSimpleRenderableEx::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CSimpleRenderableEx::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CSimpleRenderableEx::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CSimpleRenderableExProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_OperatorAssign_CSimpleRenderableEx_CSimpleRenderableEx(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx& objXXXX = *((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjXXXX);
				objXXXX = *(EarthView::World::Geometry3D::CSimpleRenderableEx*)other;
				EarthView::World::Geometry3D::CSimpleRenderableEx *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_appendVertexElement_void_VertexElementType_VertexElementSemantic(void *pObjectXXXX, _in int theType, _in int semantic )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->appendVertexElement((EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_insertVertexElement_void_ev_int16_VertexElementType_VertexElementSemantic(void *pObjectXXXX, _in ev_int16 atPosition, _in int theType, _in int semantic )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->insertVertexElement(atPosition, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_removeVertexElement_void_ev_int16(void *pObjectXXXX, _in ev_int16 elem_index )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->removeVertexElement(elem_index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_removeVertexElement_void_VertexElementSemantic(void *pObjectXXXX, _in int semantic )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->removeVertexElement((EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_removeAllVertexElements_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->removeAllVertexElements();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_updateVertexElement_void_ev_int16_VertexElementType_VertexElementSemantic(void *pObjectXXXX, _in ev_int16 elem_index, _in int theType, _in int semantic )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->updateVertexElement(elem_index, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexElement*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_findVertexElementBySemantic_CVertexElement_VertexElementSemantic(void *pObjectXXXX, _in int sem )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->findVertexElementBySemantic((EarthView::World::Graphic::VertexElementSemantic)sem);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getVertexElementCount_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getVertexElementCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_sortVertexElements_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->sortVertexElements();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_closeGapsInSource_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->closeGapsInSource();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setOperationType_void_OperationType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->setOperationType((EarthView::World::Graphic::CRenderOperation::OperationType)type);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getOperationType_OperationType(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation::OperationType objXXXX = ptrNativeObject->getOperationType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_indexesUsed_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->indexesUsed();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_useIndexes_void_ev_bool(void *pObjectXXXX, _in ev_bool bUse )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->useIndexes(bUse);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_createVertexBuffer_void_ev_int32_Usage(void *pObjectXXXX, _in ev_int32 count, _in int usage )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->createVertexBuffer(count, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setIncreaseVertexBuffer_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->setIncreaseVertexBuffer(count);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_lockVertexBuffer_void_LockOptions(void *pObjectXXXX, _in int lockOptions )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->lockVertexBuffer((EarthView::World::Graphic::CHardwareBuffer::LockOptions)lockOptions);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_lockVertexBuffer_void_LockOptions_ev_size_t_ev_bool(void *pObjectXXXX, _in int lockOptions, _in ev_uint64  offset, _in ev_bool autoCalcDeclaration )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->lockVertexBuffer((EarthView::World::Graphic::CHardwareBuffer::LockOptions)lockOptions, offset, autoCalcDeclaration);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexDataPosition_void_CVector3(void *pObjectXXXX, _in const void* position )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexDataPosition(*(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexDataNormal_void_CVector3(void *pObjectXXXX, _in const void* normal )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexDataNormal(*(EarthView::World::Spatial::Math::CVector3*)normal);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexDataTangle_void_CVector3(void *pObjectXXXX, _in const void* tangent )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexDataTangle(*(EarthView::World::Spatial::Math::CVector3*)tangent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexDataTexCoord_void_CVector4(void *pObjectXXXX, _in const void* texCoord )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexDataTexCoord(*(EarthView::World::Spatial::Math::CVector4*)texCoord);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexDataColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexDataColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexData_void_CVertex(void *pObjectXXXX, _in const void* vertex )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexData(*(EarthView::World::Geometry3D::CVertex*)vertex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexDataBuffer_void_CVertexVector(void *pObjectXXXX, _in const void* vertexBuffer )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexDataBuffer(*(EarthView::World::Geometry3D::CVertexVector*)vertexBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeVertexDataBuffer_void_ev_byte_ev_uint32(void *pObjectXXXX, _in ev_byte* vertexBuffer, _in ev_uint32 count )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeVertexDataBuffer(vertexBuffer, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_readVertexBuffer_void_ev_uint32_ev_uint32_CVertexVector(void *pObjectXXXX, _in ev_uint32 start, _in ev_uint32 count, _out void* vertexBuffer )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->readVertexBuffer(start, count, *(EarthView::World::Geometry3D::CVertexVector*)vertexBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_readVertexBufferToEnd_void_ev_uint32_CVertexVector(void *pObjectXXXX, _in ev_uint32 start, _out void* vertexBuffer )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->readVertexBufferToEnd(start, *(EarthView::World::Geometry3D::CVertexVector*)vertexBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_unlockVertexBuffer_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->unlockVertexBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_seekVertexBuffer_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->seekVertexBuffer(offset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_tellVertexBuffer_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->tellVertexBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getVertexBufferLocked_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVertexBufferLocked();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_createIndexBuffer_void_IndexType_ev_uint32_Usage(void *pObjectXXXX, _in int itype, _in ev_uint32 count, _in int usage )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, count, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setIncreaseIndexBuffer_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->setIncreaseIndexBuffer(count);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_lockIndexBuffer_void_LockOptions(void *pObjectXXXX, _in int lockOptions )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->lockIndexBuffer((EarthView::World::Graphic::CHardwareBuffer::LockOptions)lockOptions);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_lockIndexBuffer_void_LockOptions_ev_size_t(void *pObjectXXXX, _in int lockOptions, _in ev_uint64  offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->lockIndexBuffer((EarthView::World::Graphic::CHardwareBuffer::LockOptions)lockOptions, offset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeIndexData_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeIndexData(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeIndexData_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeIndexData(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeIndexDataBuffer_void_CIndexVector(void *pObjectXXXX, _in const void* indexBuffer )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeIndexDataBuffer(*(EarthView::World::Geometry3D::CIndexVector*)indexBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_writeIndexDataBuffer_void_ev_byte_ev_uint32(void *pObjectXXXX, _in ev_byte* indexBuffer, _in ev_uint32 count )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->writeIndexDataBuffer(indexBuffer, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_readIndexBuffer_void_ev_uint32_ev_uint32_CIndexVector(void *pObjectXXXX, _in ev_uint32 start, _in ev_uint32 count, _out void* indexBuffer )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->readIndexBuffer(start, count, *(EarthView::World::Geometry3D::CIndexVector*)indexBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_readIndexBufferToEnd_void_ev_uint32_CIndexVector(void *pObjectXXXX, _in ev_uint32 start, _out void* indexBuffer )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->readIndexBufferToEnd(start, *(EarthView::World::Geometry3D::CIndexVector*)indexBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_unlockIndexBuffer_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->unlockIndexBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_seekIndexBuffer_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->seekIndexBuffer(offset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_tellIndexBuffer_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->tellIndexBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getIndexBufferLocked_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIndexBufferLocked();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getWorldTransforms(xform);
				else
					ptrNativeObject->getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldTransforms_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* xform )
			{
				const EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getWorldTransforms(xform);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::unions(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->unions(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_unions_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::unions(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::intersect(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->intersect(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_intersect_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::intersect(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::minus(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->minus(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_minus_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::minus(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::difference(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->difference(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CSimpleRenderableEx*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_difference_CSimpleRenderableEx_CSimpleRenderableEx_IColor_CVector3_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _in EarthView::World::Spatial::Display::IColor* pNewColor, _inout void* offset )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Geometry3D::CSimpleRenderableEx* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::difference(another, pNewColor, *(EarthView::World::Spatial::Math::CVector3*)offset);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::isIntersected(another);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->isIntersected(another);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CSimpleRenderableEx_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::isIntersected(another);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CCurve* curve )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::isIntersected(curve);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->isIntersected(curve);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_isIntersected_bool_CCurve_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CCurve* curve )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::isIntersected(curve);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint(void *pObjectXXXX, _in const void* point )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Geometry3D::EVPointWithinType objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::contains(*(EarthView::World::Spatial::Geometry::CPoint*)point);
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Geometry3D::EVPointWithinType objXXXX = ptrNativeObject->contains(*(EarthView::World::Spatial::Geometry::CPoint*)point);
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_contains_EVPointWithinType_CPoint_NoVirtual(void *pObjectXXXX, _in const void* point )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Geometry3D::EVPointWithinType objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::contains(*(EarthView::World::Spatial::Geometry::CPoint*)point);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* faceMap, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::sliceAndClassify(another, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)faceMap, *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)sharedEdges, pNewColor);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->sliceAndClassify(another, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)faceMap, *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)sharedEdges, pNewColor);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_sliceAndClassify_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* faceMap, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::sliceAndClassify(another, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)faceMap, *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)sharedEdges, pNewColor);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* sliceA, _inout void* sliceB, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::slice(another, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)sliceA, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)sliceB, *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)sharedEdges, pNewColor);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->slice(another, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)sliceA, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)sliceB, *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)sharedEdges, pNewColor);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_slice_ev_bool_CSimpleRenderableEx_CFaceWithSimpleRenderableExSet_CFaceWithSimpleRenderableExSet_CCoordinateSequence_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Geometry3D::CSimpleRenderableEx* another, _inout void* sliceA, _inout void* sliceB, _inout void* sharedEdges, _in EarthView::World::Spatial::Display::IColor* pNewColor )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::slice(another, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)sliceA, *(EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet*)sliceB, *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)sharedEdges, pNewColor);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
				else
					ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectionColour_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::renderSelection();
				else
					ptrNativeObject->renderSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_renderSelection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::renderSelection();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::clearSelection();
				else
					ptrNativeObject->clearSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_clearSelection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::clearSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector(void *pObjectXXXX, _in const void* objIndics )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::setSelected(*(EarthView::World::Core::IntVector*)objIndics);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setSelected(*(EarthView::World::Core::IntVector*)objIndics);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelected_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* objIndics )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::setSelected(*(EarthView::World::Core::IntVector*)objIndics);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::startEditing(objectIndex);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(objectIndex);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_startEditing_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::startEditing(objectIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::endEditing();
				else
					ptrNativeObject->endEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_endEditing_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::endEditing();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getEditBoundingBox();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->getEditBoundingBox();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getEditBoundingBox_CEditBoundingBox_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getEditBoundingBox();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _inout void* matrix )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _inout void* matrix )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::flash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms, flashCount);
				else
					ptrNativeObject->flash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms, flashCount);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_flash_void_CColourValue_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms, _in ev_uint32 flashCount )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::flash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms, flashCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				if (dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::endFlash();
				else
					ptrNativeObject->endFlash();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CSimpleRenderableEx_endFlash_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CSimpleRenderableEx* ptrNativeObject = (EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CSimpleRenderableEx::endFlash();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderable_CSimpleRenderableInternal(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CSimpleRenderableExProxy* ptr = dynamic_cast<CSimpleRenderableExProxy*>((EarthView::World::Geometry3D::CSimpleRenderableEx*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CSimpleRenderableEx_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
		}
	}
}
