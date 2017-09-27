/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/fixedpoint.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  ev_int64  _stdcall Get_EarthView_World_Spatial_Math_CFixedPoint_m_intPart( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint* ptrNativeObject = (EarthView::World::Spatial::Math::CFixedPoint*) pObjectXXXX;
					ev_int64 objXXXX = ptrNativeObject->m_intPart;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Math_CFixedPoint_m_intPart( void *pObjectXXXX, ev_int64  value )
				{
					((EarthView::World::Spatial::Math::CFixedPoint*)pObjectXXXX)->m_intPart = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorAssign_CFixedPoint_ev_real32(void *pObjXXXX, _in const ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *((EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX);
					objXXXX = val;
					EarthView::World::Spatial::Math::CFixedPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorAssign_CFixedPoint_ev_real64(void *pObjXXXX, _in const ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *((EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX);
					objXXXX = val;
					EarthView::World::Spatial::Math::CFixedPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorAssign_CFixedPoint_ev_int32(void *pObjXXXX, _in const ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *((EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX);
					objXXXX = val;
					EarthView::World::Spatial::Math::CFixedPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorAssign_CFixedPoint_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *((EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*)val;
					EarthView::World::Spatial::Math::CFixedPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorNegative_CFixedPoint(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = -objXXXX ;
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorPosivate_CFixedPoint(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = +objXXXX ;
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorPlus_CFixedPoint_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX +(*(EarthView::World::Spatial::Math::CFixedPoint*)val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorPlus_CFixedPoint_ev_real32(void *pObjXXXX, _in const ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX +(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorPlus_CFixedPoint_ev_real64(void *pObjXXXX, _in const ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX +(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorPlus_CFixedPoint_ev_int32(void *pObjXXXX, _in const ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX +(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMinus_CFixedPoint_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX -(*(EarthView::World::Spatial::Math::CFixedPoint*)val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMinus_CFixedPoint_ev_real32(void *pObjXXXX, _in const ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX -(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMinus_CFixedPoint_ev_real64(void *pObjXXXX, _in const ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX -(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMinus_CFixedPoint_ev_int32(void *pObjXXXX, _in const ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX -(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMultiply_CFixedPoint_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX *(*(EarthView::World::Spatial::Math::CFixedPoint*)val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMultiply_CFixedPoint_ev_real32(void *pObjXXXX, _in const ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX *(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMultiply_CFixedPoint_ev_real64(void *pObjXXXX, _in const ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX *(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMultiply_CFixedPoint_ev_int32(void *pObjXXXX, _in const ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX *(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorDivide_CFixedPoint_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX /(*(EarthView::World::Spatial::Math::CFixedPoint*)val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorDivide_CFixedPoint_ev_real32(void *pObjXXXX, _in const ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX /(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorDivide_CFixedPoint_ev_real64(void *pObjXXXX, _in const ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX /(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorDivide_CFixedPoint_ev_int32(void *pObjXXXX, _in const ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX /(val);
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorConvertionev_real32_ev_real32(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objYYYY = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 objXXXX = objYYYY ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorConvertionev_real64_ev_real64(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objYYYY = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 objXXXX = objYYYY ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorConvertionev_int32_ev_int32(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objYYYY = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 objXXXX = objYYYY ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorPlusLeftIncrease_CFixedPoint(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					++objXXXX;
					return (void*)pObjXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMinusLeftDecrease_CFixedPoint(void *pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					--objXXXX;
					return (void*)pObjXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorPlusRightIncrease_CFixedPoint_ev_int32(void *pObjXXXX, _in ev_int32 )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX++;
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(true);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorMinusRightDecrease_CFixedPoint_ev_int32(void *pObjXXXX, _in ev_int32 )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint result = objXXXX--;
					EarthView::World::Spatial::Math::CFixedPoint* pnew = new EarthView::World::Spatial::Math::CFixedPoint(result);
					pnew->setExternFree(true);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorEquals_ev_bool_ev_real32(void *pObjXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32& objXXXX1 = val;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorEquals_ev_bool_ev_real64(void *pObjXXXX, _in ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64& objXXXX1 = val;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorEquals_ev_bool_ev_int32(void *pObjXXXX, _in ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32& objXXXX1 = val;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorEquals_ev_bool_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint& objXXXX1 = *(EarthView::World::Spatial::Math::CFixedPoint*)val;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorNotEquals_ev_bool_ev_real32(void *pObjXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32& objXXXX1 = val;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorNotEquals_ev_bool_ev_real64(void *pObjXXXX, _in ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64& objXXXX1 = val;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorNotEquals_ev_bool_ev_int32(void *pObjXXXX, _in ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32& objXXXX1 = val;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorNotEquals_ev_bool_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint& objXXXX1 = *(EarthView::World::Spatial::Math::CFixedPoint*)val;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThan_ev_bool_ev_real32(void *pObjXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32& objXXXX1 = val;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThan_ev_bool_ev_real64(void *pObjXXXX, _in ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64& objXXXX1 = val;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThan_ev_bool_ev_int32(void *pObjXXXX, _in ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32& objXXXX1 = val;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThan_ev_bool_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint& objXXXX1 = *(EarthView::World::Spatial::Math::CFixedPoint*)val;
					return objXXXX > objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThan_ev_bool_ev_real32(void *pObjXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32& objXXXX1 = val;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThan_ev_bool_ev_real64(void *pObjXXXX, _in ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64& objXXXX1 = val;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThan_ev_bool_ev_int32(void *pObjXXXX, _in ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32& objXXXX1 = val;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThan_ev_bool_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint& objXXXX1 = *(EarthView::World::Spatial::Math::CFixedPoint*)val;
					return objXXXX < objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThanOrEqual_ev_bool_ev_real32(void *pObjXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32& objXXXX1 = val;
					return objXXXX >= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThanOrEqual_ev_bool_ev_real64(void *pObjXXXX, _in ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64& objXXXX1 = val;
					return objXXXX >= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThanOrEqual_ev_bool_ev_int32(void *pObjXXXX, _in ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32& objXXXX1 = val;
					return objXXXX >= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorGreaterThanOrEqual_ev_bool_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint& objXXXX1 = *(EarthView::World::Spatial::Math::CFixedPoint*)val;
					return objXXXX >= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThanOrEqual_ev_bool_ev_real32(void *pObjXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32& objXXXX1 = val;
					return objXXXX <= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThanOrEqual_ev_bool_ev_real64(void *pObjXXXX, _in ev_real64 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64& objXXXX1 = val;
					return objXXXX <= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThanOrEqual_ev_bool_ev_int32(void *pObjXXXX, _in ev_int32 val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32& objXXXX1 = val;
					return objXXXX <= objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CFixedPoint_OperatorLessThanOrEqual_ev_bool_CFixedPoint(void *pObjXXXX, _in const void* val )
				{
					EarthView::World::Spatial::Math::CFixedPoint& objXXXX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint& objXXXX1 = *(EarthView::World::Spatial::Math::CFixedPoint*)val;
					return objXXXX <= objXXXX1;
				}
			}
		}
	}
}
