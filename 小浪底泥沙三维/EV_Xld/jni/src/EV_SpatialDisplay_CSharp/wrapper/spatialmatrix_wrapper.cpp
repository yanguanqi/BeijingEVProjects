/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialmatrix.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_setMatrix_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 m11, _in ev_real64 m12, _in ev_real64 m21, _in ev_real64 m22, _in ev_real64 dx, _in ev_real64 dy )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ptrNativeObject->setMatrix(m11, m12, m21, m22, dx, dy);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_m11_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->m11();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_m12_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->m12();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_m21_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->m21();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_m22_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->m22();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_dx_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->dx();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_dy_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->dy();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_transform_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64* tx, _in ev_real64* ty )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ptrNativeObject->transform(x, y, tx, ty);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_transform_void_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _in ev_real64* x, _in ev_real64* y, _in ev_int32 count )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ptrNativeObject->transform(x, y, count);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_mapRect_CSpatialRect_CSpatialRect(void *pObjectXXXX, _in const void* rect )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->mapRect(*(EarthView::World::Spatial::Display::CSpatialRect*)rect);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_isIdentity_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isIdentity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_translate_CSpatialMatrix_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = ptrNativeObject->translate(dx, dy);
					EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_scale_CSpatialMatrix_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 sx, _in ev_real64 sy )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = ptrNativeObject->scale(sx, sy);
					EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_shear_CSpatialMatrix_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 sh, _in ev_real64 sv )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = ptrNativeObject->shear(sh, sv);
					EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_rotate_CSpatialMatrix_ev_real64(void *pObjectXXXX, _in ev_real64 a )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = ptrNativeObject->rotate(a);
					EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_rotateAt_CSpatialMatrix_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = ptrNativeObject->rotateAt(angle, x, y);
					EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_isInvertible_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isInvertible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_determinant_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->determinant();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_det_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->det();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_inverted_CSpatialMatrix(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialMatrix* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix objXXXX = ptrNativeObject->inverted();
					EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = new EarthView::World::Spatial::Display::CSpatialMatrix(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_OperatorEquals_bool_CSpatialMatrix(void *pObjXXXX, _in const void* o )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = *(EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					const EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX1 = *(EarthView::World::Spatial::Display::CSpatialMatrix*)o;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_OperatorNotEquals_bool_CSpatialMatrix(void *pObjXXXX, _in const void* o )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = *(EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					const EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX1 = *(EarthView::World::Spatial::Display::CSpatialMatrix*)o;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_OperatorMultiply_CSpatialMatrix_CSpatialMatrix(void *pObjXXXX, _in const void* o )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = *(EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix result = objXXXX *(*(EarthView::World::Spatial::Display::CSpatialMatrix*)o);
					EarthView::World::Spatial::Display::CSpatialMatrix* pnew = new EarthView::World::Spatial::Display::CSpatialMatrix(result);
					pnew->setExternFree(1);
					return (void*)pnew;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialMatrix_OperatorAssign_CSpatialMatrix_CSpatialMatrix(void *pObjXXXX, _in const void* o )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& objXXXX = *((EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Display::CSpatialMatrix*)o;
					EarthView::World::Spatial::Display::CSpatialMatrix *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
