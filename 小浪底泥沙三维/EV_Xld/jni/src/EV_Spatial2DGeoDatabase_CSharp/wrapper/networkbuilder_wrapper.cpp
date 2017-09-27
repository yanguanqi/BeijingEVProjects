/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dgeodatabase/networkbuilder.h"
namespace EarthView
{
	namespace World
	{
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
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_srcName( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->srcName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_srcName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjectXXXX)->srcName = value1;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_direction( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVDirectionType objXXXX = ptrNativeObject->direction;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_direction( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjectXXXX)->direction = (EarthView::World::Spatial2D::GeoDataset::EVDirectionType)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_fieldName( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::ElevationSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::ElevationSetting*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->fieldName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_ElevationSetting_fieldName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)pObjectXXXX)->fieldName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_sourceName( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->m_sourceName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_sourceName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjectXXXX)->m_sourceName = value1;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_direction( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVDirectionType objXXXX = ptrNativeObject->m_direction;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_direction( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjectXXXX)->m_direction = (EarthView::World::Spatial2D::GeoDataset::EVDirectionType)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_element( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVElementType objXXXX = ptrNativeObject->m_element;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_element( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjectXXXX)->m_element = (EarthView::World::Spatial2D::GeoDataset::EVElementType)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_type( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVDataValueType objXXXX = ptrNativeObject->m_type;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_type( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjectXXXX)->m_type = (EarthView::World::Spatial2D::GeoDataset::EVDataValueType)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_value( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->m_value;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoDataset_CNAAttributeSetting_m_value( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)pObjectXXXX)->m_value = value1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ptrNativeObject->SetName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->GetName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetDataType_void_EVDataType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ptrNativeObject->SetDataType((EarthView::World::Core::CVariant::EVDataType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetDataType_EVDataType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					EarthView::World::Core::CVariant::EVDataType objXXXX = ptrNativeObject->GetDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetUsage_void_EVUsageType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ptrNativeObject->SetUsage((EarthView::World::Spatial2D::GeoDataset::EVUsageType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetUsage_EVUsageType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVUsageType objXXXX = ptrNativeObject->GetUsage();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetUnit_void_EVUnitType(void *pObjectXXXX, _in int unit )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ptrNativeObject->SetUnit((EarthView::World::Spatial2D::GeoDataset::EVUnitType)unit);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetUnit_EVUnitType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::EVUnitType objXXXX = ptrNativeObject->GetUnit();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_SetDefault_void_ev_bool(void *pObjectXXXX, _in ev_bool isDefault )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ptrNativeObject->SetDefault(isDefault);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_IsDefault_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->IsDefault();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetSettingCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->GetSettingCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_ClearSetting_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ptrNativeObject->ClearSetting();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_AddSetting_void_CNAAttributeSetting(void *pObjectXXXX, _in const void* setting )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					ptrNativeObject->AddSetting(*(EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*)setting);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNAAttribute_GetSettingRef_CNAAttributeSetting_ev_uint32(void *pObjectXXXX, _in ev_uint32 idx )
				{
					EarthView::World::Spatial2D::GeoDataset::CNAAttribute* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNAAttribute*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting* objXXXX = ptrNativeObject->GetSettingRef(idx);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_build_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->build();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_buildWithEndPointConnectivityPolicy_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->buildWithEndPointConnectivityPolicy();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_buildWithVertexConnectivityPolicy_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->buildWithVertexConnectivityPolicy();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setSourceFeatureClass_void_IFeatureClass(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->setSourceFeatureClass(fc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addSourceFeatureClass_void_IFeatureClass(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->addSourceFeatureClass(fc);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addConnectivityPolicy_void_EVString_EVConnectivityPolicy(void *pObjectXXXX, _in const char* srcName, _in const int& policy )
				{
					EarthView::World::Core::ev_string srcName1 = srcName;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->addConnectivityPolicy(srcName1, (EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy&)policy);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addElevationSetting_void_ElevationSetting(void *pObjectXXXX, _in const void* elevation )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->addElevationSetting(*(EarthView::World::Spatial2D::GeoDataset::ElevationSetting*)elevation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addTurnSource_void_EVString(void *pObjectXXXX, _in const char* turn )
				{
					EarthView::World::Core::ev_string turn1 = turn;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->addTurnSource(turn1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_addAttribute_void_CNAAttribute(void *pObjectXXXX, _in const void* attr )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->addAttribute(*(EarthView::World::Spatial2D::GeoDataset::CNAAttribute*)attr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_setTolerance_void_ev_real64(void *pObjectXXXX, _in const ev_real64& tolerance )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ptrNativeObject->setTolerance(tolerance);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_getTolerance_ev_real64( )
				{
					ev_real64 objXXXX = EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder::getTolerance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDatasetBuilder_getFinishPercent_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFinishPercent();
					return objXXXX;
				}
			}
		}
	}
}
