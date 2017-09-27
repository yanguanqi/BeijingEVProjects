/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dvisibility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointTarget_mTargetPoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTarget* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTarget*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mTargetPoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointTarget_mTargetPoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointTarget*)pObjectXXXX)->mTargetPoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointTarget_mTargetHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTarget* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTarget*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mTargetHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointTarget_mTargetHeight( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointTarget*)pObjectXXXX)->mTargetHeight = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_push_back_void_Point2PointTarget(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Analysis::Point2PointTarget*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_front_Point2PointTarget(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2PointTarget& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Analysis::Point2PointTarget *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_back_Point2PointTarget(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2PointTarget& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Analysis::Point2PointTarget *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_insert_void_ev_uint32_Point2PointTarget(void *pObjectXXXX, _in ev_uint32 pos, _in const void* t )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Analysis::Point2PointTarget*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_insert_void_ev_uint32_Point2PointTargetList(void *pObjectXXXX, _in ev_uint32 pos, _in const void* other )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Analysis::Point2PointTargetList*)other);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_OperatorIndex_Point2PointTarget_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList& objYYYY = *(EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::Point2PointTarget& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Analysis::Point2PointTarget *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_at_Point2PointTarget_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2PointTarget& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Analysis::Point2PointTarget *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_Point2PointTargetList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointTargetList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointParam_mViewPoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointParam*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mViewPoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointParam_mViewPoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointParam*)pObjectXXXX)->mViewPoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointParam_mViewHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mViewHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointParam_mViewHeight( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointParam*)pObjectXXXX)->mViewHeight = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointParam_mCurrTargetPoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointParam*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2PointTarget &objXXXX = ptrNativeObject->mCurrTargetPoint;
					EarthView::World::Spatial3D::Analysis::Point2PointTarget *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointParam_mCurrTargetPoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointParam*)pObjectXXXX)->mCurrTargetPoint = *(EarthView::World::Spatial3D::Analysis::Point2PointTarget*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointParam_mTargetPointList( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointParam*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList &objXXXX = ptrNativeObject->mTargetPointList;
					EarthView::World::Spatial3D::Analysis::Point2PointTargetList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointParam_mTargetPointList( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointParam*)pObjectXXXX)->mTargetPointList = *(EarthView::World::Spatial3D::Analysis::Point2PointTargetList*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointParam_mViewPointColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mViewPointColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointParam_mViewPointColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointParam*)pObjectXXXX)->mViewPointColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointParam_mTargetPointColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mTargetPointColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointParam_mTargetPointColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointParam*)pObjectXXXX)->mTargetPointColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2PointParam_mInTargetPointColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2PointParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2PointParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mInTargetPointColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2PointParam_mInTargetPointColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2PointParam*)pObjectXXXX)->mInTargetPointColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2LineParam_mViewPoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2LineParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2LineParam*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mViewPoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2LineParam_mViewPoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2LineParam*)pObjectXXXX)->mViewPoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2LineParam_mViewHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2LineParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2LineParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mViewHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2LineParam_mViewHeight( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2LineParam*)pObjectXXXX)->mViewHeight = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2LineParam_mTargetPoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2LineParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2LineParam*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mTargetPoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2LineParam_mTargetPoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2LineParam*)pObjectXXXX)->mTargetPoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2LineParam_mViewPointColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2LineParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2LineParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mViewPointColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2LineParam_mViewPointColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2LineParam*)pObjectXXXX)->mViewPointColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2LineParam_mVisibleLineColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2LineParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2LineParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mVisibleLineColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2LineParam_mVisibleLineColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2LineParam*)pObjectXXXX)->mVisibleLineColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2LineParam_mInVisibleLineColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2LineParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2LineParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mInVisibleLineColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2LineParam_mInVisibleLineColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2LineParam*)pObjectXXXX)->mInVisibleLineColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mViewPoint( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2AreaParam*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mViewPoint;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mViewPoint( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2AreaParam*)pObjectXXXX)->mViewPoint = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mViewHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2AreaParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mViewHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mViewHeight( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2AreaParam*)pObjectXXXX)->mViewHeight = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mRadius( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2AreaParam*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRadius;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mRadius( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2AreaParam*)pObjectXXXX)->mRadius = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mRayAngle( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2AreaParam*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mRayAngle;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mRayAngle( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2AreaParam*)pObjectXXXX)->mRayAngle = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mVisibleLineColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2AreaParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mVisibleLineColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mVisibleLineColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2AreaParam*)pObjectXXXX)->mVisibleLineColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mInVisibleLineColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2AreaParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mInVisibleLineColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mInVisibleLineColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2AreaParam*)pObjectXXXX)->mInVisibleLineColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mCircleColor( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::Point2AreaParam*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mCircleColor;
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_Point2AreaParam_mCircleColor( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::Point2AreaParam*)pObjectXXXX)->mCircleColor = *(EarthView::World::Graphic::CColourValue*)value;
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback)();
				typedef EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef const int  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback)(_in int state);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback)(_in ev_bool bInServer);
				typedef EarthView::World::Spatial3D::Analysis::CAltitudeListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener);
				typedef const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CAnalysis3DVisibilityProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback;
				public:
					CAnalysis3DVisibilityProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DVisibility(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback();
						}
						else
							return this->CAnalysis3DVisibility::deactivate();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback();
						}
						else
							return this->CAnalysis3DVisibility::reset();
					}
					virtual void initialize()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback();
						}
						else
							return this->CAnalysis3DVisibility::initialize();
					}
					virtual void renderAnalysis3D()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback();
						}
						else
							return this->CAnalysis3DVisibility::renderAnalysis3D();
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onDoubleClick();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onMouseDown(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getType();
					}
					virtual EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* getMath3D() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getMath3D();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CAnalysis3DVisibility::setVisible(visible);
					}
					virtual const EarthView::World::Spatial3D::Analysis::MousePickState getMousePickState() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::MousePickState returnValue = (EarthView::World::Spatial3D::Analysis::MousePickState)m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getMousePickState();
					}
					virtual void setMousePickState(_in EarthView::World::Spatial3D::Analysis::MousePickState state)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback((int)state);
						}
						else
							return this->CAnalysis3DVisibility::setMousePickState(state);
					}
					virtual ev_bool getIsAnalysisInServer()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getIsAnalysisInServer();
					}
					virtual void setIsAnalysisInServer(_in ev_bool bInServer)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback(bInServer);
						}
						else
							return this->CAnalysis3DVisibility::setIsAnalysisInServer(bInServer);
					}
					virtual EarthView::World::Spatial3D::Analysis::CAltitudeListener* getAltitude3DListener()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CAltitudeListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DVisibility::setAltitude3DListener(ref_listener);
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* getAnalysis3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getAnalysis3DListener();
					}
					virtual void setAnalysis3DListener(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DVisibility::setAnalysis3DListener(ref_listener);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback();
						}
						else
							return this->CAnalysis3DVisibility::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CAnalysis3DVisibility::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CAnalysis3DVisibility::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CAnalysis3DVisibility::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback();
						}
						else
							return this->CAnalysis3DVisibility::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DVisibility::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DVisibilityProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::initialize();
					else
						ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_initialize_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::initialize();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::renderAnalysis3D();
					else
						ptrNativeObject->renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_renderAnalysis3D_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsOver_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsOver();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getShadeRate_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getShadeRate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getVisbilityAlanysisType_Analysis3DVisibilityType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					const EarthView::World::Spatial3D::Analysis::Analysis3DVisibilityType objXXXX = ptrNativeObject->getVisbilityAlanysisType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisbilityAlanysisType_void_Analysis3DVisibilityType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setVisbilityAlanysisType((EarthView::World::Spatial3D::Analysis::Analysis3DVisibilityType)type);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::Point2PointParam*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getPoint2PointParam_Point2PointParam(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2PointParam* objXXXX = ptrNativeObject->getPoint2PointParam();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setPoint2PointParam_void_Point2PointParam(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::Point2PointParam* p2pParam )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setPoint2PointParam(p2pParam);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::Point2LineParam*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getPoint2LineParam_Point2LineParam(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2LineParam* objXXXX = ptrNativeObject->getPoint2LineParam();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setPoint2LineParam_void_Point2LineParam(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::Point2LineParam* p2lParam )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setPoint2LineParam(p2lParam);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::Point2AreaParam*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getPoint2AreaParam_Point2AreaParam(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* objXXXX = ptrNativeObject->getPoint2AreaParam();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setPoint2AreaParam_void_Point2AreaParam(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::Point2AreaParam* p2aParam )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setPoint2AreaParam(p2aParam);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMoveObjectColor_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getMoveObjectColor();
					EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMoveObjectColor_void_CColourValue(void *pObjectXXXX, _in const void* value )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setMoveObjectColor(*(EarthView::World::Graphic::CColourValue*)value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setBillboardImage_void_EVString_EVString(void *pObjectXXXX, _in const char* filepath, _in const char* type )
				{
					EarthView::World::Core::ev_string filepath1 = filepath;
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setBillboardImage(filepath1, type1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setBillboardImageHeightAndWidth_void_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 height, _in ev_real32 width )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setBillboardImageHeightAndWidth(height, width);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setBillboardAltitudeMode_void_EVAltitudeMode(void *pObjectXXXX, _in int amode )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setBillboardAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)amode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setBillboardOriginType_void_EVBillboardOriginType(void *pObjectXXXX, _in int otype )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ptrNativeObject->setBillboardOriginType((EarthView::World::Spatial::Display::EVBillboardOriginType)otype);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMath3D_CMath3DBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getMousePickState_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setMousePickState_void_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIsAnalysisInServer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setIsAnalysisInServer_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAltitude3DListener_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAltitude3DListener_void_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getAnalysis3DListener_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setAnalysis3DListener_void_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent_Callback* pCallback )
				{
					CAnalysis3DVisibilityProxy* ptr = dynamic_cast<CAnalysis3DVisibilityProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DVisibility*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DVisibility_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
