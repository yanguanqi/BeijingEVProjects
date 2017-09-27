/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/spatial3denginecomdef.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Octree
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
			namespace ModelManager
			{
			}
			namespace EffectManager
			{
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_push_ev_bool_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* key, _in void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CMemoryDataStreamMap* ptrNativeObject = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Core::MemoryDataStreamPtr*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CMemoryDataStreamMap* ptrNativeObject = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_OperatorIndex_MemoryDataStreamPtr_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Spatial3D::CMemoryDataStreamMap& objYYYY = *(EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& objXXXX = objYYYY[key];
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_get_MemoryDataStreamPtr_EVString(void *pObjectXXXX, _in char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CMemoryDataStreamMap* ptrNativeObject = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& objXXXX = ptrNativeObject->get(key1);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CMemoryDataStreamMap* ptrNativeObject = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CMemoryDataStreamMap* ptrNativeObject = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMemoryDataStreamMap* ptrNativeObject = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CMemoryDataStreamMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CMemoryDataStreamMap* ptrNativeObject = (EarthView::World::Spatial3D::CMemoryDataStreamMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ExtOctNodeInfo_frameNumber( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo* ptrNativeObject = (EarthView::World::Spatial3D::ExtOctNodeInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->frameNumber;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ExtOctNodeInfo_frameNumber( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjectXXXX)->frameNumber = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ExtOctNodeInfo_camDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo* ptrNativeObject = (EarthView::World::Spatial3D::ExtOctNodeInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->camDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ExtOctNodeInfo_camDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjectXXXX)->camDistance = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ExtOctNodeInfo_box( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo* ptrNativeObject = (EarthView::World::Spatial3D::ExtOctNodeInfo*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->box;
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ExtOctNodeInfo_box( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjectXXXX)->box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ExtOctNodeInfo_id( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo* ptrNativeObject = (EarthView::World::Spatial3D::ExtOctNodeInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->id;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ExtOctNodeInfo_id( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjectXXXX)->id = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_ExtOctNodeInfo_code( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ExtOctNodeInfo* ptrNativeObject = (EarthView::World::Spatial3D::ExtOctNodeInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->code;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ExtOctNodeInfo_code( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::ExtOctNodeInfo*)pObjectXXXX)->code = value1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_OctNodeVector_push_back_void_ExtOctNodeInfo(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial3D::ExtOctNodeInfo*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_OctNodeVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_OctNodeVector_front_ExtOctNodeInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				EarthView::World::Spatial3D::ExtOctNodeInfo& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial3D::ExtOctNodeInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_OctNodeVector_back_ExtOctNodeInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				EarthView::World::Spatial3D::ExtOctNodeInfo& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial3D::ExtOctNodeInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_OctNodeVector_at_ExtOctNodeInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				EarthView::World::Spatial3D::ExtOctNodeInfo& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Spatial3D::ExtOctNodeInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_OctNodeVector_insert_void_ev_uint32_ExtOctNodeInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::ExtOctNodeInfo*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_OctNodeVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_OctNodeVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_OctNodeVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_OctNodeVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_OctNodeVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_OctNodeVector_swap_void_OctNodeVector(void *pObjectXXXX, _inout void* other )
			{
				EarthView::World::Spatial3D::OctNodeVector* ptrNativeObject = (EarthView::World::Spatial3D::OctNodeVector*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Spatial3D::OctNodeVector*)other);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_InternalObject_mpModel( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InternalObject* ptrNativeObject = (EarthView::World::Spatial3D::InternalObject*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObjectPtr &objXXXX = ptrNativeObject->mpModel;
				EarthView::World::Geometry3D::CVisibleObjectPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_InternalObject_mpModel( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::InternalObject*)pObjectXXXX)->mpModel = *(EarthView::World::Geometry3D::CVisibleObjectPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ExtOctNodeInfo*  _stdcall Get_EarthView_World_Spatial3D_InternalObject_mpExtInfo( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InternalObject* ptrNativeObject = (EarthView::World::Spatial3D::InternalObject*) pObjectXXXX;
				EarthView::World::Spatial3D::ExtOctNodeInfo* objXXXX = ptrNativeObject->mpExtInfo;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_InternalObject_mpExtInfo( void *pObjectXXXX, EarthView::World::Spatial3D::ExtOctNodeInfo*  value )
			{
				((EarthView::World::Spatial3D::InternalObject*)pObjectXXXX)->mpExtInfo = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ImageItem_mIndex( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ImageItem* ptrNativeObject = (EarthView::World::Spatial3D::ImageItem*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ImageItem_mIndex( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Spatial3D::ImageItem*)pObjectXXXX)->mIndex = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CImage*  _stdcall Get_EarthView_World_Spatial3D_ImageItem_mpImg( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ImageItem* ptrNativeObject = (EarthView::World::Spatial3D::ImageItem*) pObjectXXXX;
				EarthView::World::Graphic::CImage* objXXXX = ptrNativeObject->mpImg;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ImageItem_mpImg( void *pObjectXXXX, EarthView::World::Graphic::CImage*  value )
			{
				((EarthView::World::Spatial3D::ImageItem*)pObjectXXXX)->mpImg = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ImageItemVector_push_back_void_ImageItem(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial3D::ImageItem*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ImageItemVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ImageItemVector_front_ImageItem(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				EarthView::World::Spatial3D::ImageItem& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial3D::ImageItem *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ImageItemVector_back_ImageItem(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				EarthView::World::Spatial3D::ImageItem& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial3D::ImageItem *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ImageItemVector_at_ImageItem_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				EarthView::World::Spatial3D::ImageItem& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Spatial3D::ImageItem *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ImageItemVector_insert_void_ev_uint32_ImageItem(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::ImageItem*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ImageItemVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ImageItemVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ImageItemVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ImageItemVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ImageItemVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::ImageItemVector* ptrNativeObject = (EarthView::World::Spatial3D::ImageItemVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_push_back_void_CMaterialPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CMaterialPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_front_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_back_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_at_CMaterialPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_insert_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CMaterialPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_MaterialPtrVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_MaterialPtrVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::MaterialPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::MaterialPtrVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TexturePtrVector_push_back_void_CTexturePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CTexturePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TexturePtrVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_TexturePtrVector_front_CTexturePtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_TexturePtrVector_back_CTexturePtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_TexturePtrVector_at_CTexturePtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TexturePtrVector_insert_void_ev_uint32_CTexturePtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CTexturePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_TexturePtrVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_TexturePtrVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TexturePtrVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TexturePtrVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TexturePtrVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::TexturePtrVector* ptrNativeObject = (EarthView::World::Spatial3D::TexturePtrVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_GpuPtrVector_push_back_void_CGpuProgramPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CGpuProgramPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_GpuPtrVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_GpuPtrVector_front_CGpuProgramPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_GpuPtrVector_back_CGpuProgramPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_GpuPtrVector_at_CGpuProgramPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_GpuPtrVector_insert_void_ev_uint32_CGpuProgramPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CGpuProgramPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_GpuPtrVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_GpuPtrVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_GpuPtrVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_GpuPtrVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_GpuPtrVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::GpuPtrVector* ptrNativeObject = (EarthView::World::Spatial3D::GpuPtrVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_push_back_void_CInstanceManager(void *pObjectXXXX, _in EarthView::World::Graphic::CInstanceManager*& t )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceManager*  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_front_CInstanceManager(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceManager*  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_back_CInstanceManager(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceManager*  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_at_CInstanceManager_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_insert_void_ev_uint32_CInstanceManager(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstanceManager*& t )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_InstanceManagerVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstanceManagerVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::InstanceManagerVector* ptrNativeObject = (EarthView::World::Spatial3D::InstanceManagerVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_push_back_void_CInstancedEntity2(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedEntity2*& t )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity2*  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_front_CInstancedEntity2(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity2* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity2*  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_back_CInstancedEntity2(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity2* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity2*  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_at_CInstancedEntity2_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity2* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_insert_void_ev_uint32_CInstancedEntity2(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstancedEntity2*& t )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_InstancedEntityVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_InstancedEntityVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::InstancedEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::InstancedEntityVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mEntID( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mEntID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mEntID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mEntID = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mMeshName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mMeshName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mMeshName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mMeshName = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mMeshID( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mMeshID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mMeshID( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mMeshID = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mPos( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mPos;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mPos( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mPos = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mScale( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mScale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mScale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mScale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mQua( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->mQua;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mQua( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mQua = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mAltitudeMode( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->mAltitudeMode;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mAltitudeMode( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mAltitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mAltitudeValue( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mAltitudeValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mAltitudeValue( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mAltitudeValue = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mBox( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->mBox;
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mBox( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mBox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraLatitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mCameraLatitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraLatitude( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mCameraLatitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraLongitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mCameraLongitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraLongitude( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mCameraLongitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraHeading( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mCameraHeading;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraHeading( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mCameraHeading = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mCameraTilt;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraTilt( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mCameraTilt = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraAltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfo* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mCameraAltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CEntitySpatialInfo_mCameraAltitude( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CEntitySpatialInfo*)pObjectXXXX)->mCameraAltitude = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_push_back_void_CEntitySpatialInfo(void *pObjectXXXX, _in EarthView::World::Spatial3D::CEntitySpatialInfo*& t )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CEntitySpatialInfo*  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_front_CEntitySpatialInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				EarthView::World::Spatial3D::CEntitySpatialInfo* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CEntitySpatialInfo*  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_back_CEntitySpatialInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				EarthView::World::Spatial3D::CEntitySpatialInfo* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CEntitySpatialInfo*  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_at_CEntitySpatialInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				EarthView::World::Spatial3D::CEntitySpatialInfo* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_insert_void_ev_uint32_CEntitySpatialInfo(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::CEntitySpatialInfo*& t )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEntitySpatialInfos_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CEntitySpatialInfos* ptrNativeObject = (EarthView::World::Spatial3D::CEntitySpatialInfos*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setRefCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setRefCount(count);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getRefCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRefCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setResourceID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 resourceID )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setResourceID(resourceID);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getResourceID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getResourceID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setFilename_void_EVString(void *pObjectXXXX, _in char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setFilename(filename1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getFilename_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getFilename();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setDataSize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 size )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setDataSize(size);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getDataSize_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDataSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setResourceType_void_MaterialResourceType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setResourceType((EarthView::World::Spatial3D::Dataset::MaterialResourceType)type);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getResourceType_MaterialResourceType(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::MaterialResourceType objXXXX = ptrNativeObject->getResourceType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setSubMeshIndex_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setSubMeshIndex(index);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getSubMeshIndex_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSubMeshIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setChangeFromTemplate_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setChangeFromTemplate(flag);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getChangeFromTemplate_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getChangeFromTemplate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_setDataBufRef_void_ev_byte(void *pObjectXXXX, _in ev_byte* buf )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ptrNativeObject->setDataBufRef(buf);
			}
			extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial3D_CMaterialResourceInfo_getDataBufRef_ev_byte(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMaterialResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMaterialResourceInfo*) pObjectXXXX;
				ev_byte* objXXXX = ptrNativeObject->getDataBufRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setRefCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 refCount )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setRefCount(refCount);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getRefCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRefCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setMeshID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setMeshID(meshID);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getMeshID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMeshID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setTemplateID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 templateID )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setTemplateID(templateID);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getTemplateID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTemplateID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setInstanceNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 num )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setInstanceNum(num);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getInstanceNum_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getInstanceNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setVisibleDistance_void_double_double(void *pObjectXXXX, _in double minDistance, _in double maxDistance )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setVisibleDistance(minDistance, maxDistance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getVisibleDistance_void_double_double(void *pObjectXXXX, _inout double& minDistance, _inout double& maxDistance )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->getVisibleDistance(minDistance, maxDistance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setFileName_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setFileName(filename1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getFileName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getFileName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setDataBufRef_void_ev_byte(void *pObjectXXXX, _in ev_byte* buf )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setDataBufRef(buf);
			}
			extern "C" EV_DLL_EXPORT  ev_byte*  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getDataBufRef_ev_byte(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ev_byte* objXXXX = ptrNativeObject->getDataBufRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_setDataSize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 size )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->setDataSize(size);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getDataSize_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDataSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_addResourceRef_void_CMaterialResourceInfo(void *pObjectXXXX, _in EarthView::World::Spatial3D::CMaterialResourceInfo* resource )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->addResourceRef(resource);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CMaterialResourceInfo*  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getResourceRef_CMaterialResourceInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				EarthView::World::Spatial3D::CMaterialResourceInfo* objXXXX = ptrNativeObject->getResourceRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_getResourceNum_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getResourceNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CMeshDataInfo*  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_clone_CMeshDataInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				EarthView::World::Spatial3D::CMeshDataInfo* objXXXX = ptrNativeObject->clone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CMeshDataInfo_clearBuffer_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CMeshDataInfo* ptrNativeObject = (EarthView::World::Spatial3D::CMeshDataInfo*) pObjectXXXX;
				ptrNativeObject->clearBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponentVector_push_back_void_CComponent(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial3D::CComponent*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponentVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CComponentVector_front_CComponent(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CComponent& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial3D::CComponent *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CComponentVector_back_CComponent(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CComponent& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial3D::CComponent *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponentVector_insert_void_ev_uint32_CComponent(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::CComponent*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponentVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CComponentVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CComponentVector_OperatorIndex_CComponent_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CComponentVector& objYYYY = *(EarthView::World::Spatial3D::CComponentVector*) pObjXXXX;
				EarthView::World::Spatial3D::CComponent& objXXXX = objYYYY[n];
				EarthView::World::Spatial3D::CComponent *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CComponentVector_at_CComponent_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CComponent& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Spatial3D::CComponent *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CComponentVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponentVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponentVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponentVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponentVector* ptrNativeObject = (EarthView::World::Spatial3D::CComponentVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CSubEntityVector_push_back_void_CSubEntity(void *pObjectXXXX, _in EarthView::World::Graphic::CSubEntity*& t )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CSubEntityVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubEntity*  _stdcall EarthView_World_Spatial3D_CSubEntityVector_front_CSubEntity(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				EarthView::World::Graphic::CSubEntity* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubEntity*  _stdcall EarthView_World_Spatial3D_CSubEntityVector_back_CSubEntity(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				EarthView::World::Graphic::CSubEntity* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CSubEntityVector_insert_void_ev_uint32_CSubEntity(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CSubEntity*& t )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CSubEntityVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CSubEntityVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubEntity*  _stdcall EarthView_World_Spatial3D_CSubEntityVector_OperatorIndex_CSubEntity_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CSubEntityVector& objYYYY = *(EarthView::World::Spatial3D::CSubEntityVector*) pObjXXXX;
				EarthView::World::Graphic::CSubEntity* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubEntity*  _stdcall EarthView_World_Spatial3D_CSubEntityVector_at_CSubEntity_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				EarthView::World::Graphic::CSubEntity* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CSubEntityVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CSubEntityVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CSubEntityVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CSubEntityVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CSubEntityVector* ptrNativeObject = (EarthView::World::Spatial3D::CSubEntityVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ComponentUnits_push_back_void_ComponentUnit(void *pObjectXXXX, _in EarthView::World::Spatial3D::ComponentUnit& t )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ComponentUnits_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ComponentUnit&  _stdcall EarthView_World_Spatial3D_ComponentUnits_front_ComponentUnit(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				EarthView::World::Spatial3D::ComponentUnit& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ComponentUnit&  _stdcall EarthView_World_Spatial3D_ComponentUnits_back_ComponentUnit(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				EarthView::World::Spatial3D::ComponentUnit& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ComponentUnits_insert_void_ev_uint32_ComponentUnit(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::ComponentUnit& t )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ComponentUnits_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ComponentUnits_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ComponentUnit&  _stdcall EarthView_World_Spatial3D_ComponentUnits_OperatorIndex_ComponentUnit_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::ComponentUnits& objYYYY = *(EarthView::World::Spatial3D::ComponentUnits*) pObjXXXX;
				EarthView::World::Spatial3D::ComponentUnit& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ComponentUnit&  _stdcall EarthView_World_Spatial3D_ComponentUnits_at_ComponentUnit_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				EarthView::World::Spatial3D::ComponentUnit& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ComponentUnits_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ComponentUnits_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ComponentUnits_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ComponentUnits_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ComponentUnits* ptrNativeObject = (EarthView::World::Spatial3D::ComponentUnits*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_CComponent_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponent_setName_void_EVString(void *pObjectXXXX, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				ptrNativeObject->setName(val1);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CComponent_getSubComponents_CComponentVector(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				const EarthView::World::Spatial3D::CComponentVector& objXXXX = ptrNativeObject->getSubComponents();
				const EarthView::World::Spatial3D::CComponentVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CComponent_getComponentUnits_ComponentUnits(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				const EarthView::World::Spatial3D::ComponentUnits& objXXXX = ptrNativeObject->getComponentUnits();
				const EarthView::World::Spatial3D::ComponentUnits *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CComponent_getModelType_ModelType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelType objXXXX = ptrNativeObject->getModelType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponent_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CComponent_getOffsetMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getOffsetMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CComponent_setOffsetMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* offsetMatrix )
			{
				EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				ptrNativeObject->setOffsetMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)offsetMatrix);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_CComponent_getBounds_CAxisAlignedBox(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBounds();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CComponent_getID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CComponent* ptrNativeObject = (EarthView::World::Spatial3D::CComponent*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectVector_push_back_void_CEffect(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect*& t )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3D_CEffectVector_front_CEffect(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3D_CEffectVector_back_CEffect(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectVector_insert_void_ev_uint32_CEffect(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::EffectManager::CEffect*& t )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CEffectVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3D_CEffectVector_OperatorIndex_CEffect_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CEffectVector& objYYYY = *(EarthView::World::Spatial3D::CEffectVector*) pObjXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3D_CEffectVector_at_CEffect_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CEffectVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CEffectVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CEffectVector* ptrNativeObject = (EarthView::World::Spatial3D::CEffectVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelDataStream_releaseAllFeature_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				ptrNativeObject->releaseAllFeature();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelDataStream_setAllFeatureDataStreamNull_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				ptrNativeObject->setAllFeatureDataStreamNull();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mpMeshFeature( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->mpMeshFeature;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mpMeshFeature( void *pObjectXXXX, EarthView::World::Spatial::GeoDataset::IFeature*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mpMeshFeature = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mThumbTextures( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mThumbTextures;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mThumbTextures( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mThumbTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mOrigTextures( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mOrigTextures;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mOrigTextures( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mOrigTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mCubeTextures( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mCubeTextures;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mCubeTextures( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mCubeTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mMaterials( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mMaterials;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mMaterials( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mMaterials = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mProgs( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mProgs;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mProgs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mProgs = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mGpus( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mGpus;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mGpus( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mGpus = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mSkeletons( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mSkeletons;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mSkeletons( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mSkeletons = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelDataStream_mAnimations( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelDataStream* ptrNativeObject = (EarthView::World::Spatial3D::ModelDataStream*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::FeatureVector &objXXXX = ptrNativeObject->mAnimations;
				EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelDataStream_mAnimations( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelDataStream*)pObjectXXXX)->mAnimations = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mMeshObj( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr &objXXXX = ptrNativeObject->mMeshObj;
				EarthView::World::Graphic::CMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mMeshObj( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mMeshObj = *(EarthView::World::Graphic::CMeshPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mMeshAnimationObj( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr &objXXXX = ptrNativeObject->mMeshAnimationObj;
				EarthView::World::Graphic::CMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mMeshAnimationObj( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mMeshAnimationObj = *(EarthView::World::Graphic::CMeshPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mTextureObjs( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Spatial3D::TexturePtrVector &objXXXX = ptrNativeObject->mTextureObjs;
				EarthView::World::Spatial3D::TexturePtrVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mTextureObjs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mTextureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mThumbTextureObjs( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Spatial3D::TexturePtrVector &objXXXX = ptrNativeObject->mThumbTextureObjs;
				EarthView::World::Spatial3D::TexturePtrVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mThumbTextureObjs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mThumbTextureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mCubeTextureObjs( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Spatial3D::TexturePtrVector &objXXXX = ptrNativeObject->mCubeTextureObjs;
				EarthView::World::Spatial3D::TexturePtrVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mCubeTextureObjs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mCubeTextureObjs = *(EarthView::World::Spatial3D::TexturePtrVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mMaterialObjs( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Spatial3D::MaterialPtrVector &objXXXX = ptrNativeObject->mMaterialObjs;
				EarthView::World::Spatial3D::MaterialPtrVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mMaterialObjs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mMaterialObjs = *(EarthView::World::Spatial3D::MaterialPtrVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mGpuObjs( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Spatial3D::GpuPtrVector &objXXXX = ptrNativeObject->mGpuObjs;
				EarthView::World::Spatial3D::GpuPtrVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mGpuObjs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mGpuObjs = *(EarthView::World::Spatial3D::GpuPtrVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelResource_mSkeletonObj( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::ModelResource* ptrNativeObject = (EarthView::World::Spatial3D::ModelResource*) pObjectXXXX;
				EarthView::World::Graphic::CSkeletonPtr &objXXXX = ptrNativeObject->mSkeletonObj;
				EarthView::World::Graphic::CSkeletonPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelResource_mSkeletonObj( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::ModelResource*)pObjectXXXX)->mSkeletonObj = *(EarthView::World::Graphic::CSkeletonPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_push_back_void_CTerrainRevisor(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial3D::CTerrainRevisor*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_front_CTerrainRevisor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CTerrainRevisor& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial3D::CTerrainRevisor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_back_CTerrainRevisor(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CTerrainRevisor& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial3D::CTerrainRevisor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_at_CTerrainRevisor_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CTerrainRevisor& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Spatial3D::CTerrainRevisor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_insert_void_ev_uint32_CTerrainRevisor(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::CTerrainRevisor*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_TerrainRevisorVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::TerrainRevisorVector* ptrNativeObject = (EarthView::World::Spatial3D::TerrainRevisorVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
		}
	}
}
