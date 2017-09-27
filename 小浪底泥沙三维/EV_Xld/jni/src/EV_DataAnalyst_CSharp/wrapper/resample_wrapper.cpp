/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "dataanalyst/resample.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoCorretion
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall Globel_EarthView_World_Spatial2D_GeoCorretion_getSuggestOutPut_void_void_ev_int32_ev_int32_ev_real64(_in void* pTrans, _inout ev_int32& nWidth, _inout ev_int32& nHeight, _inout ev_real64* dfGeoTransform)
				{
					getSuggestOutPut(pTrans, nWidth, nHeight, dfGeoTransform);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Globel_EarthView_World_Spatial2D_GeoCorretion_genCreateTransformerArg_void_void_void_ev_real64_ev_int32(_in const void* pRectifyRef, _in const void* pStdImageRef, _in const ev_real64* pParameter, _in ev_int32 iCount)
				{
					void* objXXXX = genCreateTransformerArg(pRectifyRef, pStdImageRef, pParameter, iCount);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall Globel_EarthView_World_Spatial2D_GeoCorretion_destroyTransformH_void_void(_in void* hTrans)
				{
					destroyTransformH(hTrans);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_OperatorAssign_RectifyResampleWarper_RectifyResampleWarper(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper& objXXXX = *((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)other;
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hSrc( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjectXXXX;
					void* objXXXX = ptrNativeObject->hSrc;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hSrc( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjectXXXX)->hSrc = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_resampleMth( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjectXXXX;
					EarthView::World::Spatial2D::GeoCorretion::ResampleType objXXXX = ptrNativeObject->resampleMth;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_resampleMth( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjectXXXX)->resampleMth = (EarthView::World::Spatial2D::GeoCorretion::ResampleType)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hTransformer( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjectXXXX;
					void* objXXXX = ptrNativeObject->hTransformer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_hTransformer( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjectXXXX)->hTransformer = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_ProgressArg( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjectXXXX;
					void* objXXXX = ptrNativeObject->ProgressArg;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_ProgressArg( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjectXXXX)->ProgressArg = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_dfNodatavalue( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->dfNodatavalue;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_dfNodatavalue( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjectXXXX)->dfNodatavalue = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_nWorkingBandCount( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->nWorkingBandCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_nWorkingBandCount( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjectXXXX)->nWorkingBandCount = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32*  _stdcall Get_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_pWorkingBandIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*) pObjectXXXX;
					ev_int32* objXXXX = ptrNativeObject->pWorkingBandIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_GeoCorretion_RectifyResampleWarper_pWorkingBandIndex( void *pObjectXXXX, ev_int32*  value )
				{
					((EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)pObjectXXXX)->pWorkingBandIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_inlitialOperator_ev_int32_RectifyResampleWarper(void *pObjectXXXX, _in const void* warper )
				{
					EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->inlitialOperator(*(EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper*)warper);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_CreateAndResample_ev_bool_ev_char(void *pObjectXXXX, _in const ev_char* pszFullpath )
				{
					EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->CreateAndResample(pszFullpath);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoCorretion_ResamplerOprator_resampleBuffer_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_uchar(void *pObjectXXXX, _in ev_int32 destOffX, _in ev_int32 destOffY, _in ev_int32 W, _in ev_int32 H, _out ev_uchar* pBuffer )
				{
					EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator* ptrNativeObject = (EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->resampleBuffer(destOffX, destOffY, W, H, pBuffer);
					return objXXXX;
				}
			}
		}
	}
}
