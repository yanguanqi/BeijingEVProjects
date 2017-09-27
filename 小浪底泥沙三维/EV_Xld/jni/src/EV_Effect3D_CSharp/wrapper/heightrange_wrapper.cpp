/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/heightrange.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CHeightRange_splitRandom_void_ev_int32(void *pObjectXXXX, _in ev_int32 levels )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjectXXXX;
					ptrNativeObject->splitRandom(levels);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Effect3D_CHeightRange_subHeightRangeCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->subHeightRangeCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CHeightRange_getSubHeightRange_CHeightRange_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CHeightRange objXXXX = ptrNativeObject->getSubHeightRange(index);
					EarthView::World::Spatial::Effect3D::CHeightRange *pXXXX = new EarthView::World::Spatial::Effect3D::CHeightRange(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Effect3D_CHeightRange_center_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->center();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CHeightRange_OperatorEquals_ev_bool_CHeightRange(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange& objXXXX = *(EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CHeightRange& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CHeightRange*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CHeightRange_OperatorNotEquals_ev_bool_CHeightRange(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange& objXXXX = *(EarthView::World::Spatial::Effect3D::CHeightRange*) pObjXXXX;
					const EarthView::World::Spatial::Effect3D::CHeightRange& objXXXX1 = *(EarthView::World::Spatial::Effect3D::CHeightRange*)other;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Effect3D_CHeightRange_mfMaxHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mfMaxHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Effect3D_CHeightRange_mfMaxHeight( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Effect3D::CHeightRange*)pObjectXXXX)->mfMaxHeight = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Effect3D_CHeightRange_mfMinHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mfMinHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Effect3D_CHeightRange_mfMinHeight( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Effect3D::CHeightRange*)pObjectXXXX)->mfMinHeight = value;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall Get_EarthView_World_Spatial_Effect3D_CHeightRange_ZERO()
				{
					const EarthView::World::Spatial::Effect3D::CHeightRange objXXXX = EarthView::World::Spatial::Effect3D::CHeightRange::ZERO;
					EarthView::World::Spatial::Effect3D::CHeightRange *pXXXX = new EarthView::World::Spatial::Effect3D::CHeightRange(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Effect3D_CHeightRange_isIntersect_bool_CHeightRange(void *pObjectXXXX, _in const void* range )
				{
					EarthView::World::Spatial::Effect3D::CHeightRange* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CHeightRange*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isIntersect(*(EarthView::World::Spatial::Effect3D::CHeightRange*)range);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const Real  _stdcall Get_EarthView_World_Spatial_Effect3D_CHeightRange_DEFAULTHEIGHT()
				{
					const Real objXXXX = EarthView::World::Spatial::Effect3D::CHeightRange::DEFAULTHEIGHT;
					return objXXXX;
				}
			}
		}
	}
}
