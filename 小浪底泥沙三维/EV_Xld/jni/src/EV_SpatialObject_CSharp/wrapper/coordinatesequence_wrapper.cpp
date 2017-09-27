/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/coordinatesequence.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_OperatorAssign_CCoordinateSequence_CCoordinateSequence(void *pObjXXXX, _in const void* obj )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence& objXXXX = *((EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Geometry::CCoordinateSequence*)obj;
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getCoordinate_CCoordinate_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate objXXXX = ptrNativeObject->getCoordinate(index);
					EarthView::World::Spatial::Geometry::CCoordinate *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinate(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMaxX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMinX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMaxY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMinY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMaxZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMinZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMaxM_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_getMinM_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_add_ev_uint32_CCoordinate_ev_int32(void *pObjectXXXX, _in const void* coords, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCoordinate*)coords, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_add_ev_uint32_CCoordinateSequence_ev_int32(void *pObjectXXXX, _in const void* coords, _in ev_int32 index )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->add(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_append_ev_uint32_CCoordinate(void *pObjectXXXX, _in const void* coords )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->append(*(EarthView::World::Spatial::Geometry::CCoordinate*)coords);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_append_ev_uint32_CCoordinateSequence(void *pObjectXXXX, _in const void* coords )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->append(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_insert_ev_uint32_CCoordinate_ev_uint32(void *pObjectXXXX, _in const void* coords, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->insert(*(EarthView::World::Spatial::Geometry::CCoordinate*)coords, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_insert_ev_uint32_CCoordinateSequence_ev_uint32(void *pObjectXXXX, _in const void* coords, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->insert(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_replace_ev_uint32_CCoordinate_ev_uint32(void *pObjectXXXX, _in const void* coord, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->replace(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_replace_ev_uint32_CCoordinateSequence_ev_uint32(void *pObjectXXXX, _in const void* coords, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->replace(*(EarthView::World::Spatial::Geometry::CCoordinateSequence*)coords, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_remove_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index, _in ev_uint32 size )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->remove(index, size);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_reserve_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->reserve();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_reverse_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->reverse();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_queryCoordinate_ev_int32_CCoordinate_ev_real64(void *pObjectXXXX, _in const void* coord, _in ev_real64 tolerance )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->queryCoordinate(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord, tolerance);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_isDirty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDirty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_recalculateBoundingbox_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->recalculateBoundingbox();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCoordinateSequence*  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_clone_CCoordinateSequence(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_clone2_CCoordinateSequence(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence objXXXX = ptrNativeObject->clone2();
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinateSequence(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_toString_EVString_EVCoordinateType(void *pObjectXXXX, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toString((EarthView::World::Spatial::Geometry::EVCoordinateType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_toStream_void_CDataStream_EVCoordinateType(void *pObjectXXXX, _inout void* stream, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream, (EarthView::World::Spatial::Geometry::EVCoordinateType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_offset_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->offset(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_rotate_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 xAngle, _in ev_real64 yAngle, _in ev_real64 zAngle )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_scale_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 xRef, _in ev_real64 yRef, _in ev_real64 zRef, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					ptrNativeObject->scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CCoordinateSequence*  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_mirror_CCoordinateSequence_CCoordinate_CCoordinate(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord1, _in const EarthView::World::Spatial::Geometry::CCoordinate* coord2 )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence* objXXXX = ptrNativeObject->mirror(coord1, coord2);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Geometry_CCoordinateSequence_mirror2_CCoordinateSequence_CCoordinate_CCoordinate(void *pObjectXXXX, _in const void* coord1, _in const void* coord2 )
				{
					const EarthView::World::Spatial::Geometry::CCoordinateSequence* ptrNativeObject = (EarthView::World::Spatial::Geometry::CCoordinateSequence*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CCoordinateSequence objXXXX = ptrNativeObject->mirror2(*(EarthView::World::Spatial::Geometry::CCoordinate*)coord1, *(EarthView::World::Spatial::Geometry::CCoordinate*)coord2);
					EarthView::World::Spatial::Geometry::CCoordinateSequence *pXXXX = new EarthView::World::Spatial::Geometry::CCoordinateSequence(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
