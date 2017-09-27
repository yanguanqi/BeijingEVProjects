/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "dataanalyst/rectification.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoCorretion
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_setRectifySpatialRef_void_void(void *pObjectXXXX, _in void* ref_pRef )
				{
					EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					ptrNativeObject->setRectifySpatialRef(ref_pRef);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_setStdImgSpatialRef_void_void(void *pObjectXXXX, _in void* ref_pRef )
				{
					EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					ptrNativeObject->setStdImgSpatialRef(ref_pRef);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_setRectifyModel_void_RectifyModelType(void *pObjectXXXX, _in int eModel )
				{
					EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					ptrNativeObject->setRectifyModel((EarthView::World::Spatial2D::GeoCorretion::RectifyModelType)eModel);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_getRectifyModel_RectifyModelType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoCorretion::RectifyModelType objXXXX = ptrNativeObject->getRectifyModel();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_setDataToCompute_ev_int32_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 nPts, _in ev_real64* pSrcCrd, _in ev_real64* pDstCrd, _in ev_int32 nCrdSpace, _in ev_int32* pProcessFlag )
				{
					EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->setDataToCompute(nPts, pSrcCrd, pDstCrd, nCrdSpace, pProcessFlag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64*  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_getParameter_ev_real64_ev_int32(void *pObjectXXXX, _out ev_int32& idimension )
				{
					const EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					const ev_real64* objXXXX = ptrNativeObject->getParameter(idimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64*  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_getBias_ev_real64_ev_int32(void *pObjectXXXX, _out ev_int32& idimension )
				{
					const EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					const ev_real64* objXXXX = ptrNativeObject->getBias(idimension);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_getTransformer_void(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					const void* objXXXX = ptrNativeObject->getTransformer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_transformForward_ev_bool_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 nPts, _inout ev_real64* pDfX, _inout ev_real64* pDfY )
				{
					EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->transformForward(nPts, pDfX, pDfY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoCorretion_CRectification_transformInverse_ev_bool_ev_int32_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 nPts, _inout ev_real64* pDfX, _inout ev_real64* pDfY )
				{
					EarthView::World::Spatial2D::GeoCorretion::CRectification* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::CRectification*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->transformInverse(nPts, pDfX, pDfY);
					return objXXXX;
				}
			}
		}
	}
}
