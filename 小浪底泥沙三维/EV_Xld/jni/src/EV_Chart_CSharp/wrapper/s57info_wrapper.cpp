/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/s57info.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getChartFieldType_EVChartDataType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVChartDataType objXXXX = ptrNativeObject->getChartFieldType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getClassCode_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getClassCode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getAcronym_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getAcronym();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getDescribe_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getDescribe();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getAttributeNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getAttributeNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getAttributeName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getAttributeName(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getAttributeFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getAttributeFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_GeoDataset_CChartClassInfo_getAttributeFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getAttributeFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartAttributeInfo_getCode_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartAttributeInfo_getAcronym_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getAcronym();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartAttributeInfo_getDescribe_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getDescribe();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartAttributeInfo_getType_EVChartAttributeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVChartAttributeType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CChartAttributeInfo_createField_IField(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->createField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CS57Info*  _stdcall EarthView_World_Spatial_GeoDataset_CS57Info_getStaticInstance_CS57Info( )
				{
					EarthView::World::Spatial::GeoDataset::CS57Info* objXXXX = EarthView::World::Spatial::GeoDataset::CS57Info::getStaticInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CS57Info_getChartAttributeInfo_CChartAttributeInfo_ev_int32(void *pObjectXXXX, _in ev_int32 code )
				{
					EarthView::World::Spatial::GeoDataset::CS57Info* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* objXXXX = ptrNativeObject->getChartAttributeInfo(code);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CS57Info_getChartAttributeInfo_CChartAttributeInfo_ev_char(void *pObjectXXXX, _in const ev_char* name )
				{
					EarthView::World::Spatial::GeoDataset::CS57Info* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* objXXXX = ptrNativeObject->getChartAttributeInfo(name);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::CChartClassInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CS57Info_getChartClassInfo_CChartClassInfo_ev_int32(void *pObjectXXXX, _in ev_int32 code )
				{
					EarthView::World::Spatial::GeoDataset::CS57Info* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* objXXXX = ptrNativeObject->getChartClassInfo(code);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::CChartClassInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CS57Info_getChartClassInfo_CChartClassInfo_ev_char(void *pObjectXXXX, _in const ev_char* name )
				{
					EarthView::World::Spatial::GeoDataset::CS57Info* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* objXXXX = ptrNativeObject->getChartClassInfo(name);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_GeoDataset_CS57Info_getClassName_ev_char_ev_int32(void *pObjectXXXX, _in ev_int32 code )
				{
					EarthView::World::Spatial::GeoDataset::CS57Info* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getClassName(code);
					return objXXXX;
				}
			}
		}
	}
}
