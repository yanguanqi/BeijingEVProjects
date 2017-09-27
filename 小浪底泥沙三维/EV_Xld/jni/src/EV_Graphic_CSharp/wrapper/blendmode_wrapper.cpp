/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/blendmode.h"
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
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_blendType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				EarthView::World::Graphic::LayerBlendType objXXXX = ptrNativeObject->blendType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_blendType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->blendType = (EarthView::World::Graphic::LayerBlendType)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_operation( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				EarthView::World::Graphic::LayerBlendOperationEx objXXXX = ptrNativeObject->operation;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_operation( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->operation = (EarthView::World::Graphic::LayerBlendOperationEx)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_source1( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				EarthView::World::Graphic::LayerBlendSource objXXXX = ptrNativeObject->source1;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_source1( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->source1 = (EarthView::World::Graphic::LayerBlendSource)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_source2( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				EarthView::World::Graphic::LayerBlendSource objXXXX = ptrNativeObject->source2;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_source2( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->source2 = (EarthView::World::Graphic::LayerBlendSource)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_colourArg1( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->colourArg1;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_colourArg1( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->colourArg1 = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_colourArg2( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->colourArg2;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_colourArg2( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->colourArg2 = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_alphaArg1( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->alphaArg1;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_alphaArg1( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->alphaArg1 = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_alphaArg2( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->alphaArg2;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_alphaArg2( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->alphaArg2 = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CLayerBlendModeEx_factor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLayerBlendModeEx* ptrNativeObject = (EarthView::World::Graphic::CLayerBlendModeEx*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->factor;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CLayerBlendModeEx_factor( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CLayerBlendModeEx*)pObjectXXXX)->factor = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLayerBlendModeEx_OperatorEquals_ev_bool_CLayerBlendModeEx(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CLayerBlendModeEx& objXXXX = *(EarthView::World::Graphic::CLayerBlendModeEx*) pObjXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx& objXXXX1 = *(EarthView::World::Graphic::CLayerBlendModeEx*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLayerBlendModeEx_OperatorNotEquals_ev_bool_CLayerBlendModeEx(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CLayerBlendModeEx& objXXXX = *(EarthView::World::Graphic::CLayerBlendModeEx*) pObjXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx& objXXXX1 = *(EarthView::World::Graphic::CLayerBlendModeEx*)rhs;
				return objXXXX != objXXXX1;
			}
		}
	}
}
