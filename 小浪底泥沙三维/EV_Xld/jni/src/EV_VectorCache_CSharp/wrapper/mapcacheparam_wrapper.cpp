/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/mapcacheparam.h"
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
		namespace Spatial
		{
			namespace MapCache
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace MapCache
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setClipMap_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setClipMap(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getClipMap_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getClipMap();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setClipRect_void_IEnvelope(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IEnvelope* rect )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setClipRect(rect);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getClipRect_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getClipRect();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setMinRange_void_ev_int16(void *pObjectXXXX, _in ev_int16 minRange )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setMinRange(minRange);
				}
				extern "C" EV_DLL_EXPORT  ev_int16  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getMinRange_ev_int16(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_int16 objXXXX = ptrNativeObject->getMinRange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setMaxRange_void_ev_int16(void *pObjectXXXX, _in ev_int16 maxRange )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setMaxRange(maxRange);
				}
				extern "C" EV_DLL_EXPORT  ev_int16  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getMaxRange_ev_int16(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_int16 objXXXX = ptrNativeObject->getMaxRange();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setMode_void_EVMapCacheMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setMode((EarthView::World::Spatial::MapCache::EVMapCacheMode)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getMode_EVMapCacheMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EarthView::World::Spatial::MapCache::EVMapCacheMode objXXXX = ptrNativeObject->getMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setNodeCount_void_ev_int16(void *pObjectXXXX, _in ev_int16 nodeCount )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setNodeCount(nodeCount);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getNodeCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getNodeCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setXMLFolderPath_void_EVString(void *pObjectXXXX, _in char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setXMLFolderPath(path1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getXMLFolderPath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getXMLFolderPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setCacheType_void_EVMapCacheDataFormat(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setCacheType((EarthView::World::Spatial::MapCache::EVMapCacheDataFormat)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getMapCacheType_EVMapCacheDataFormat(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EarthView::World::Spatial::MapCache::EVMapCacheDataFormat objXXXX = ptrNativeObject->getMapCacheType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setTilePrecision_void_ev_real64(void *pObjectXXXX, _in ev_real64 precision )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setTilePrecision(precision);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getTilePrecision_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getTilePrecision();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setClipTime_void_EVString(void *pObjectXXXX, _in const char* time )
				{
					EarthView::World::Core::ev_string time1 = time;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setClipTime(time1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getClipTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getClipTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setFirstFolderName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setFirstFolderName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getFirstFolderName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFirstFolderName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setSecondFolderName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setSecondFolderName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getSecondFolderName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSecondFolderName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setTargetCatalogue_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setTargetCatalogue(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getTargetCatalogue_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getTargetCatalogue();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setRemarkText_void_EVString(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setRemarkText(text1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_getRemarkText_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getRemarkText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_isUpdate_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isUpdate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setIsUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setIsUpdate(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_setIsCreateETM_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ptrNativeObject->setIsCreateETM(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_isCreateETM_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isCreateETM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::MapCache::CMapCacheParam*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_clone_CMapCacheParam(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EarthView::World::Spatial::MapCache::CMapCacheParam* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_readEtm_ev_bool_EVString(void *pObjectXXXX, _in const char* etmpath )
				{
					EarthView::World::Core::ev_string etmpath1 = etmpath;
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readEtm(etmpath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_fromXmlElement_ev_bool_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheParam_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					EarthView::World::Spatial::MapCache::CMapCacheParam* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheParam*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
