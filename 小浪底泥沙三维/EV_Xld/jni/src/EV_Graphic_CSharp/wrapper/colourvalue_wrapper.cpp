/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/colourvalue.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Graphic_CColourValue_ZERO()
			{
				const EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CColourValue::ZERO;
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Graphic_CColourValue_Black()
			{
				const EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CColourValue::Black;
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Graphic_CColourValue_White()
			{
				const EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CColourValue::White;
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Graphic_CColourValue_Red()
			{
				const EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CColourValue::Red;
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Graphic_CColourValue_Green()
			{
				const EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CColourValue::Green;
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Graphic_CColourValue_Blue()
			{
				const EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CColourValue::Blue;
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Graphic_CColourValue_Selection()
			{
				const EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CColourValue::Selection;
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CColourValue_OperatorEquals_ev_bool_CColourValue(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX1 = *(EarthView::World::Graphic::CColourValue*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CColourValue_OperatorNotEquals_ev_bool_CColourValue(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX1 = *(EarthView::World::Graphic::CColourValue*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CColourValue_g( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->g;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CColourValue_g( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CColourValue*)pObjectXXXX)->g = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CColourValue_b( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->b;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CColourValue_b( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CColourValue*)pObjectXXXX)->b = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CColourValue_a( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->a;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CColourValue_a( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CColourValue*)pObjectXXXX)->a = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CColourValue_r( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->r;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CColourValue_r( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CColourValue*)pObjectXXXX)->r = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CColourValue_getAsRGBA_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAsRGBA();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CColourValue_getAsARGB_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAsARGB();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CColourValue_getAsBGRA_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAsBGRA();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CColourValue_getAsABGR_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAsABGR();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColourValue_setAsRGBA_void_ev_uint32(void *pObjectXXXX, _in const ev_uint32 val )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ptrNativeObject->setAsRGBA(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColourValue_setAsARGB_void_ev_uint32(void *pObjectXXXX, _in const ev_uint32 val )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ptrNativeObject->setAsARGB(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColourValue_setAsBGRA_void_ev_uint32(void *pObjectXXXX, _in const ev_uint32 val )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ptrNativeObject->setAsBGRA(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColourValue_setAsABGR_void_ev_uint32(void *pObjectXXXX, _in const ev_uint32 val )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ptrNativeObject->setAsABGR(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColourValue_saturate_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ptrNativeObject->saturate();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CColourValue_saturateCopy_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->saturateCopy();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CColourValue_OperatorIndex_ev_real32_ev_size_t(void *pObjXXXX, _in const ev_uint64  i )
			{
				EarthView::World::Graphic::CColourValue& objYYYY = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				ev_real32 objXXXX = objYYYY[i];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32*  _stdcall EarthView_World_Graphic_CColourValue_ptr_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ev_real32* objXXXX = ptrNativeObject->ptr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CColourValue_OperatorPlus_CColourValue_CColourValue(void *pObjXXXX, _in const void* rkVector )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				EarthView::World::Graphic::CColourValue result = objXXXX +(*(EarthView::World::Graphic::CColourValue*)rkVector);
				EarthView::World::Graphic::CColourValue* pnew = new EarthView::World::Graphic::CColourValue(result);
				pnew->setExternFree(1);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CColourValue_OperatorMinus_CColourValue_CColourValue(void *pObjXXXX, _in const void* rkVector )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				EarthView::World::Graphic::CColourValue result = objXXXX -(*(EarthView::World::Graphic::CColourValue*)rkVector);
				EarthView::World::Graphic::CColourValue* pnew = new EarthView::World::Graphic::CColourValue(result);
				pnew->setExternFree(1);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CColourValue_OperatorMultiply_CColourValue_ev_real32(void *pObjXXXX, _in const ev_real32 fScalar )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				EarthView::World::Graphic::CColourValue result = objXXXX *(fScalar);
				EarthView::World::Graphic::CColourValue* pnew = new EarthView::World::Graphic::CColourValue(result);
				pnew->setExternFree(1);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CColourValue_OperatorMultiply_CColourValue_CColourValue(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				EarthView::World::Graphic::CColourValue result = objXXXX *(*(EarthView::World::Graphic::CColourValue*)rhs);
				EarthView::World::Graphic::CColourValue* pnew = new EarthView::World::Graphic::CColourValue(result);
				pnew->setExternFree(1);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CColourValue_OperatorDivide_CColourValue_CColourValue(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				EarthView::World::Graphic::CColourValue result = objXXXX /(*(EarthView::World::Graphic::CColourValue*)rhs);
				EarthView::World::Graphic::CColourValue* pnew = new EarthView::World::Graphic::CColourValue(result);
				pnew->setExternFree(1);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CColourValue_OperatorDivide_CColourValue_ev_real32(void *pObjXXXX, _in const ev_real32 fScalar )
			{
				EarthView::World::Graphic::CColourValue& objXXXX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				EarthView::World::Graphic::CColourValue result = objXXXX /(fScalar);
				EarthView::World::Graphic::CColourValue* pnew = new EarthView::World::Graphic::CColourValue(result);
				pnew->setExternFree(1);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColourValue_setHSB_void_Real_Real_Real(void *pObjectXXXX, _inout Real hue, _inout Real saturation, _inout Real brightness )
			{
				EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ptrNativeObject->setHSB(hue, saturation, brightness);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CColourValue_getHSB_void_Real_Real_Real(void *pObjectXXXX, _in Real* hue, _in Real* saturation, _in Real* brightness )
			{
				const EarthView::World::Graphic::CColourValue* ptrNativeObject = (EarthView::World::Graphic::CColourValue*) pObjectXXXX;
				ptrNativeObject->getHSB(hue, saturation, brightness);
			}
		}
	}
}
