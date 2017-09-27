/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/terraincolorinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_Altitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->Altitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_Altitude( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjectXXXX)->Altitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_G( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->G;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_G( void *pObjectXXXX, ev_uint8  value )
			{
				((EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjectXXXX)->G = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_B( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->B;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_B( void *pObjectXXXX, ev_uint8  value )
			{
				((EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjectXXXX)->B = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_R( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->R;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_R( void *pObjectXXXX, ev_uint8  value )
			{
				((EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjectXXXX)->R = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_PixelY( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->PixelY;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_PixelY( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)pObjectXXXX)->PixelY = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_OperatorLessThan_ev_bool_TerrainColorUnit(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX1 = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)rhs;
				return objXXXX < objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_OperatorGreaterThan_ev_bool_TerrainColorUnit(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX1 = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)rhs;
				return objXXXX > objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_OperatorEquals_ev_bool_TerrainColorUnit(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX1 = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_TerrainColorUnit_OperatorNotEquals_ev_bool_TerrainColorUnit(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit& objXXXX1 = *(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_int16  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_getColorImageHeight_ev_int16(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_int16 objXXXX = ptrNativeObject->getColorImageHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_getMax_TerrainColorUnit(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit objXXXX = ptrNativeObject->getMax();
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pXXXX = new EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_setMax_void_ev_int32_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _in ev_int32 altitude, _in ev_uint8 r, _in ev_uint8 g, _in ev_uint8 b )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ptrNativeObject->setMax(altitude, r, g, b);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_getMin_TerrainColorUnit(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit objXXXX = ptrNativeObject->getMin();
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pXXXX = new EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_setMin_void_ev_int32_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _in ev_int32 altitude, _in ev_uint8 r, _in ev_uint8 g, _in ev_uint8 b )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ptrNativeObject->setMin(altitude, r, g, b);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_insertUnit_ev_bool_TerrainColorUnit(void *pObjectXXXX, _in void* unit )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->insertUnit(*(EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit*)unit);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_existUnit_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 altitude )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existUnit(altitude);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_removeUnit_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 altitude )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeUnit(altitude);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_clearUnits_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ptrNativeObject->clearUnits();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_getUnitCount_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getUnitCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_getUnit_TerrainColorUnit_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit objXXXX = ptrNativeObject->getUnit(index);
				EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit *pXXXX = new EarthView::World::Spatial3D::CTerrainColorInfo::TerrainColorUnit(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_getExtent_ev_bool_ev_int32_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_int32 altitude, _out ev_uint16& minPixel, _out ev_uint16& maxPixel )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getExtent(altitude, minPixel, maxPixel);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_toXml_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->toXml();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_fromXml_ev_bool_CXmlElement(void *pObjectXXXX, _inout void* xmlElement )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->fromXml(*(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_locate_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 altitude )
			{
				const EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->locate(altitude);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_render_MemoryDataStreamPtr_EVString(void *pObjectXXXX, _in const char* imageType )
			{
				EarthView::World::Core::ev_string imageType1 = imageType;
				const EarthView::World::Spatial3D::CTerrainColorInfo* ptrNativeObject = (EarthView::World::Spatial3D::CTerrainColorInfo*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->render(imageType1);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_drawGrid_MemoryDataStreamPtr_EVString_ev_uint32_ev_uint32(_in const char* imageType, _in ev_uint32 width, _in ev_uint32 height )
			{
				EarthView::World::Core::ev_string imageType1 = imageType;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::CTerrainColorInfo::drawGrid(imageType1, width, height);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_OperatorEquals_ev_bool_CTerrainColorInfo(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo& objXXXX = *(EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo& objXXXX1 = *(EarthView::World::Spatial3D::CTerrainColorInfo*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTerrainColorInfo_OperatorNotEquals_ev_bool_CTerrainColorInfo(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CTerrainColorInfo& objXXXX = *(EarthView::World::Spatial3D::CTerrainColorInfo*) pObjXXXX;
				const EarthView::World::Spatial3D::CTerrainColorInfo& objXXXX1 = *(EarthView::World::Spatial3D::CTerrainColorInfo*)rhs;
				return objXXXX != objXXXX1;
			}
		}
	}
}
