/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/vectorcacheinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorCache
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_setFirstFolderName_ev_bool_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setFirstFolderName(value1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_setSecondFolderName_ev_bool_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setSecondFolderName(value1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_setResultName_ev_bool_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setResultName(value1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_setSavePath_ev_bool_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setSavePath(value1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_setCacheType_ev_bool_EVVectorCacheDataFormat(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setCacheType((EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_setTemplateMode_ev_bool_EVVectorCacheTemplateMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setTemplateMode((EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode)mode);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_getFirstFolderName_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getFirstFolderName();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_getSecondFolderName_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getSecondFolderName();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_getResultName_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getResultName();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_getSavePath_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getSavePath();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_getCacheType_EVVectorCacheDataFormat(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat objXXXX = ptrNativeObject->getCacheType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheBasicParam_getTemplateMode_EVVectorCacheTemplateMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode objXXXX = ptrNativeObject->getTemplateMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_VectorCache_CCacheFieldInfo_strFieldName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->strFieldName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CCacheFieldInfo_strFieldName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjectXXXX)->strFieldName = value1;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_VectorCache_CCacheFieldInfo_nValueType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheFieldType objXXXX = ptrNativeObject->nValueType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CCacheFieldInfo_nValueType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjectXXXX)->nValueType = (EarthView::World::Spatial::VectorCache::EVVectorCacheFieldType)value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_VectorCache_CCacheFieldInfo_nSize( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheFieldInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->nSize;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CCacheFieldInfo_nSize( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::VectorCache::CCacheFieldInfo*)pObjectXXXX)->nSize = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getTemplateMode_EVVectorCacheTemplateType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateType objXXXX = ptrNativeObject->getTemplateMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getDivisionLevel_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getDivisionLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorCache::DivisionInfo*  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getDivesionInfoRef_DivisionInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::DivisionInfo* objXXXX = ptrNativeObject->getDivesionInfoRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getOrientPosition_EVVectorCacheOrientPosition(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheOrientPosition objXXXX = ptrNativeObject->getOrientPosition();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getFirstTileSize_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFirstTileSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getTileSizeType_EVVectorCacheUnitType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheUnitType objXXXX = ptrNativeObject->getTileSizeType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorCache::GeoRect*  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getTemplateClipRect_GeoRect(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::GeoRect* objXXXX = ptrNativeObject->getTemplateClipRect();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getFirstLevel_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getFirstLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getEndLevel_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getEndLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getSubTileNum_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSubTileNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getDefaultTemplate_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDefaultTemplate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_getStartTileNumber_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getStartTileNumber();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorCache::CCacheTemplate*  _stdcall EarthView_World_Spatial_VectorCache_CCacheTemplate_clone_CCacheTemplate(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheTemplate* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheTemplate*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::CCacheTemplate* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nDone( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->nDone;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nDone( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjectXXXX)->nDone = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nTotal( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->nTotal;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nTotal( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjectXXXX)->nTotal = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nCurrentDatasetIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->nCurrentDatasetIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nCurrentDatasetIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjectXXXX)->nCurrentDatasetIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nTotalDatasetNum( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->nTotalDatasetNum;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nTotalDatasetNum( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjectXXXX)->nTotalDatasetNum = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nProcess( void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheProcess objXXXX = ptrNativeObject->nProcess;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_nProcess( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*)pObjectXXXX)->nProcess = (EarthView::World::Spatial::VectorCache::EVVectorCacheProcess)value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheProcessMessage_setSavedProcessNum_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*) pObjectXXXX;
					ptrNativeObject->setSavedProcessNum();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorCache::CCacheProcessInfo*  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_clone_CCacheProcessInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getTotalProcessNum_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getTotalProcessNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setPrecession_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setPrecession(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getPrecession_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getPrecession();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getRemarkInfo_ev_char(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getRemarkInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setRemartkInfo_ev_bool_ev_char(void *pObjectXXXX, _in const ev_char* value )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setRemartkInfo(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setOutAttribute_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setOutAttribute(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getOutAttribute_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOutAttribute();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setAttributeMinLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setAttributeMinLevel(level);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setAttributeMaxLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setAttributeMaxLevel(level);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getAttributeMinLevel_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getAttributeMinLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getAttributeMaxLevel_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getAttributeMaxLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_addFieldInfo_void_CCacheFieldInfo(void *pObjectXXXX, _in EarthView::World::Spatial::VectorCache::CCacheFieldInfo* info )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->addFieldInfo(info);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setClipAttriIndex_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32* index, _in ev_uint32 count )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setClipAttriIndex(index, count);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorCache::CCacheFieldInfo*  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getFieldInfo_CCacheFieldInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* objXXXX = ptrNativeObject->getFieldInfo(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getClipFieldNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getClipFieldNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getClipAttributeIndex_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getClipAttributeIndex(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getTotalFieldNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTotalFieldNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setDataTime_ev_bool_ev_char(void *pObjectXXXX, _in const ev_char* szValue )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setDataTime(szValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getDataTime_ev_char(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getDataTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setDatasetName_ev_bool_ev_char(void *pObjectXXXX, _in const ev_char* szValue )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setDatasetName(szValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getDatasetName_ev_char(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					const ev_char* objXXXX = ptrNativeObject->getDatasetName();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_clearFieldInfos_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->clearFieldInfos();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_clearClipAttriIndex_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->clearClipAttriIndex();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setMinRange_void_ev_int32(void *pObjectXXXX, _in ev_int32 nStartLevel )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setMinRange(nStartLevel);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setMaxRange_void_ev_int32(void *pObjectXXXX, _in ev_int32 nEndLevel )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setMaxRange(nEndLevel);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getMinRange_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMinRange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getMaxRange_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMaxRange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_setCacheRect_void_GeoRect(void *pObjectXXXX, _in EarthView::World::Spatial::VectorCache::GeoRect& rect )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					ptrNativeObject->setCacheRect(rect);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorCache::GeoRect*  _stdcall EarthView_World_Spatial_VectorCache_CCacheProcessInfo_getCacheRect_GeoRect(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CCacheProcessInfo* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CCacheProcessInfo*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::GeoRect* objXXXX = ptrNativeObject->getCacheRect();
					return objXXXX;
				}
			}
		}
	}
}
