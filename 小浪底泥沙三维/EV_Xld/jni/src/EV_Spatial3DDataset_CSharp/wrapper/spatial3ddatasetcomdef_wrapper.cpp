/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_Dataset_TextureStreamItem_mIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Dataset_TextureStreamItem_mIndex( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjectXXXX)->mIndex = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Dataset_TextureStreamItem_mStream( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->mStream;
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Dataset_TextureStreamItem_mStream( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjectXXXX)->mStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Dataset_TextureStreamItem_filenmae( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamItem* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->filenmae;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Dataset_TextureStreamItem_filenmae( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Dataset::TextureStreamItem*)pObjectXXXX)->filenmae = value1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_push_back_void_TextureStreamItem(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::TextureStreamItem*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_front_TextureStreamItem(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_back_TextureStreamItem(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_at_TextureStreamItem_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::TextureStreamItem& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial3D::Dataset::TextureStreamItem *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_insert_void_ev_uint32_TextureStreamItem(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::TextureStreamItem*)t);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_TextureStreamVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::TextureStreamVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::TextureStreamVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_push_back_void_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature*& t )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_front_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_back_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_at_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->at(pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_insert_void_ev_uint32_IFeature(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial::GeoDataset::IFeature*& t )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_FeatureVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::FeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::FeatureVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_push_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in const ev_int32& key, _in ev_int32& val )
				{
					EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key, val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_exist_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
				{
					EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32&  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_OperatorIndex_ev_int32_ev_int32(void *pObjXXXX, _in const ev_int32& key )
				{
					EarthView::World::Spatial3D::Dataset::IntMap& objYYYY = *(EarthView::World::Spatial3D::Dataset::IntMap*) pObjXXXX;
					ev_int32& objXXXX = objYYYY[key];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32&  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_get_ev_int32_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
				{
					EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					ev_int32& objXXXX = ptrNativeObject->get(key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_erase_void_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
				{
					EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					ptrNativeObject->erase(key);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_IntMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_IntMap_getKeys_IntVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::IntMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::IntMap*) pObjectXXXX;
					EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_getEffectID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_setEffectID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					ptrNativeObject->setEffectID(val);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_setName_void_EVString(void *pObjectXXXX, _in char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					ptrNativeObject->setName(val1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_getType_EffectType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::EffectType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_setType_void_EffectType(void *pObjectXXXX, _in int val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Spatial3D::Dataset::EffectType)val);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_getUserType_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getUserType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_setUserType_void_EVString(void *pObjectXXXX, _in char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					ptrNativeObject->setUserType(val1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_getContext_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getContext();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfo_setContext_void_EVString(void *pObjectXXXX, _in char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::Dataset::CEffectInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfo*) pObjectXXXX;
					ptrNativeObject->setContext(val1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_push_back_void_CEffectInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::CEffectInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_front_CEffectInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_back_CEffectInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_insert_void_ev_uint32_CEffectInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::CEffectInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_OperatorIndex_CEffectInfo_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector& objYYYY = *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_at_CEffectInfo_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInfoVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInfoVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_push_back_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset*& t )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_front_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_back_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_at_IDataset_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->at(pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_insert_void_ev_uint32_IDataset(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial::GeoDataset::IDataset*& t )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_DataSetVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::DataSetVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::DataSetVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
			}
		}
	}
}
