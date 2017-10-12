/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/vectorcachecreator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorCache
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_setBasicParam_ev_bool_CVectorCacheBasicParam(void *pObjectXXXX, _in const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* param )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setBasicParam(param);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_nameSwitch_EVString_EVString(void *pObjectXXXX, _inout char*& beforeName )
				{
					EarthView::World::Core::ev_string beforeName1 = beforeName;
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->nameSwitch(beforeName1);
					beforeName=beforeName1.makeBuffer();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam*  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_getBasicParamRef_CVectorCacheBasicParam(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CVectorCacheCreator* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjectXXXX;
					const EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam* objXXXX = ptrNativeObject->getBasicParamRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_addCreateDatasetInfo_ev_bool_IDataset_CCacheProcessInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset, _in const EarthView::World::Spatial::VectorCache::CCacheProcessInfo* info )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addCreateDatasetInfo(ref_dataset, info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_makeCache_EVVectorCacheProcessResult(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjectXXXX;
					EarthView::World::Spatial::VectorCache::EVVectorCacheProcessResult objXXXX = ptrNativeObject->makeCache();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage*  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_getProcessMessageRef_CVectorCacheProcessMessage(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorCache::CVectorCacheCreator* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjectXXXX;
					const EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage* objXXXX = ptrNativeObject->getProcessMessageRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_stopProcess_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorCache::CVectorCacheCreator* ptrNativeObject = (EarthView::World::Spatial::VectorCache::CVectorCacheCreator*) pObjectXXXX;
					ptrNativeObject->stopProcess();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorCache_CVectorCacheCreator_checkValidTableName_ev_bool_StringVector_StringVector(_in void* tableNameList, _out void* errorNameList )
				{
					ev_bool objXXXX = EarthView::World::Spatial::VectorCache::CVectorCacheCreator::checkValidTableName(*(EarthView::World::Core::StringVector*)tableNameList, *(EarthView::World::Core::StringVector*)errorNameList);
					return objXXXX;
				}
			}
		}
	}
}
