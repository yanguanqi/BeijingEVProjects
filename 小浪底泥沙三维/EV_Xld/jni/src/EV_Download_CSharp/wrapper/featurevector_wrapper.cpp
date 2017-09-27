/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/featurevector.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Download_ModelFeature_addValue_ev_uint32_EVString(void *pObjectXXXX, _in const char* fieldvalue )
				{
					EarthView::World::Core::ev_string fieldvalue1 = fieldvalue;
					EarthView::World::Spatial::Download::ModelFeature* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeature*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->addValue(fieldvalue1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_ModelFeature_getValue_EVString_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Download::ModelFeature* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeature*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getValue(name1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeature_setFields_void_IFields(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFields* ref_fields )
				{
					EarthView::World::Spatial::Download::ModelFeature* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeature*) pObjectXXXX;
					ptrNativeObject->setFields(ref_fields);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_Download_ModelFeature_getFields_IFields(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ModelFeature* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeature*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFields();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_push_back_void_ModelFeature(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Download::ModelFeature*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_front_ModelFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::ModelFeature& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Download::ModelFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_back_ModelFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::ModelFeature& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Download::ModelFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_insert_void_ev_uint32_ModelFeature(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Download::ModelFeature*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_OperatorIndex_ModelFeature_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector& objYYYY = *(EarthView::World::Spatial::Download::ModelFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::ModelFeature& objXXXX = objYYYY[n];
					EarthView::World::Spatial::Download::ModelFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_at_ModelFeature_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::ModelFeature& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial::Download::ModelFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ModelFeatureVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ModelFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::ModelFeatureVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_EVlasFeature_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::EVlasFeature* ptrNativeObject = (EarthView::World::Spatial::Download::EVlasFeature*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_EVlasFeature_getValue_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::EVlasFeature* ptrNativeObject = (EarthView::World::Spatial::Download::EVlasFeature*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getValue();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVlasFeature_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Download::EVlasFeature* ptrNativeObject = (EarthView::World::Spatial::Download::EVlasFeature*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVlasFeature_setValue_void_EVString(void *pObjectXXXX, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::Download::EVlasFeature* ptrNativeObject = (EarthView::World::Spatial::Download::EVlasFeature*) pObjectXXXX;
					ptrNativeObject->setValue(value1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_push_back_void_EVlasFeature(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Download::EVlasFeature*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_front_EVlasFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::EVlasFeature& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Download::EVlasFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_back_EVlasFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::EVlasFeature& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Download::EVlasFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_insert_void_ev_uint32_EVlasFeature(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Download::EVlasFeature*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_OperatorIndex_EVlasFeature_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector& objYYYY = *(EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjXXXX;
					EarthView::World::Spatial::Download::EVlasFeature& objXXXX = objYYYY[n];
					EarthView::World::Spatial::Download::EVlasFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_at_EVlasFeature_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::EVlasFeature& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial::Download::EVlasFeature *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_EVLasFeatureVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::EVLasFeatureVector* ptrNativeObject = (EarthView::World::Spatial::Download::EVLasFeatureVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
