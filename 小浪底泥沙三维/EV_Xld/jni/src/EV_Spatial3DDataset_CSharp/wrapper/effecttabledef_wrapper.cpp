/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/effecttabledef.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
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
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_getId_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getId();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_setId_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ptrNativeObject->setId(val);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_getEffectId_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectId();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_setEffectId_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ptrNativeObject->setEffectId(val);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_getPos_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPos();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_setPos_void_CVector3(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ptrNativeObject->setPos(*(EarthView::World::Spatial::Math::CVector3*)val);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_getScale_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScale();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_setScale_void_CVector3(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)val);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_getRotate_CQuaternion(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getRotate();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_setRotate_void_CQuaternion(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ptrNativeObject->setRotate(*(EarthView::World::Spatial::Math::CQuaternion*)val);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_getAltMode_EVAltitudeMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getAltMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_setAltMode_void_EVAltitudeMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ptrNativeObject->setAltMode((EarthView::World::Spatial::Utility::EVAltitudeMode)mode);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_getAltValue_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAltValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstance_setAltValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 altValue )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstance* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstance*) pObjectXXXX;
					ptrNativeObject->setAltValue(altValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_push_back_void_CEffectInstance(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::CEffectInstance*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_front_CEffectInstance(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_back_CEffectInstance(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_insert_void_ev_uint32_CEffectInstance(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::CEffectInstance*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_OperatorIndex_CEffectInstance_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector& objYYYY = *(EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_at_CEffectInstance_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstance& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Dataset::CEffectInstance *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectInstanceVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectInstanceVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfo_getUserType_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getUserType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfo_setUserType_void_EVString(void *pObjectXXXX, _in char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjectXXXX;
					ptrNativeObject->setUserType(val1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfo_getUserTypeName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getUserTypeName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfo_setUserTypeName_void_EVString(void *pObjectXXXX, _in char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjectXXXX;
					ptrNativeObject->setUserTypeName(val1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfo_getUserTypeDesc_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getUserTypeDesc();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfo_setUserTypeDesc_void_EVString(void *pObjectXXXX, _in char* val )
				{
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*) pObjectXXXX;
					ptrNativeObject->setUserTypeDesc(val1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_push_back_void_CEffectUserTypeInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_front_CEffectUserTypeInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_back_CEffectUserTypeInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_insert_void_ev_uint32_CEffectUserTypeInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_OperatorIndex_CEffectUserTypeInfo_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector& objYYYY = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_at_CEffectUserTypeInfo_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectUserTypeInfoVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfo_getEffectRefID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectRefID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfo_setEffectRefID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setEffectRefID(val);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfo_getEffectID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfo_setEffectID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setEffectID(val);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfo_getResourceID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getResourceID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfo_setResourceID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setResourceID(val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_push_back_void_CEffectRefInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::CEffectRefInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_front_CEffectRefInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_back_CEffectRefInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_insert_void_ev_uint32_CEffectRefInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::CEffectRefInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_OperatorIndex_CEffectRefInfo_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector& objYYYY = *(EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_at_CEffectRefInfo_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Dataset::CEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectRefInfoVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_setResourceID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 resourceID )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					ptrNativeObject->setResourceID(resourceID);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_getResourceID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getResourceID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_setResourceType_void_MaterialResourceType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					ptrNativeObject->setResourceType((EarthView::World::Spatial3D::Dataset::MaterialResourceType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_getResourceType_MaterialResourceType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType objXXXX = ptrNativeObject->getResourceType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_setResourceData_void_MemoryDataStreamPtr(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					ptrNativeObject->setResourceData(*(EarthView::World::Core::MemoryDataStreamPtr*)val);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfo_getResourceData_MemoryDataStreamPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getResourceData();
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_push_back_void_CEffectResourceInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_front_CEffectResourceInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_back_CEffectResourceInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_insert_void_ev_uint32_CEffectResourceInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_OperatorIndex_CEffectResourceInfo_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector& objYYYY = *(EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_at_CEffectResourceInfo_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectResourceInfoVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_push_back_void_CEffectFeature(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectFeature*& t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEffectFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_front_CEffectFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeature* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEffectFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_back_CEffectFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeature* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_insert_void_ev_uint32_CEffectFeature(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::Dataset::CEffectFeature*& t )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEffectFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_OperatorIndex_CEffectFeature_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector& objYYYY = *(EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeature* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEffectFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_at_CEffectFeature_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeature* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectFeatureVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectFeatureVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
