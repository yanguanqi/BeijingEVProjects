/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/progressinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Globel_EarthView_World_Spatial2D_Raster_EVgsTermProgress_ev_int32_ev_real64_ev_char_void(_in ev_real64 dfComplete, _in const ev_char* pszMessage, _inout void* pProgressArg)
				{
					ev_int32 objXXXX = EVgsTermProgress(dfComplete, pszMessage, pProgressArg);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CProgressInfo_getPercent_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CProgressInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getPercent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial2D_Raster_CProgressInfo_getMessage_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CProgressInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->getMessage();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CProgressInfo_setPercent_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfPercent )
				{
					EarthView::World::Spatial2D::Raster::CProgressInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjectXXXX;
					ptrNativeObject->setPercent(dfPercent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CProgressInfo_setMessage_void_EVString(void *pObjectXXXX, _in const char* strMessage )
				{
					EarthView::World::Core::ev_string strMessage1 = strMessage;
					EarthView::World::Spatial2D::Raster::CProgressInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjectXXXX;
					ptrNativeObject->setMessage(strMessage1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CProgressInfo_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CProgressInfo* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjectXXXX;
					ptrNativeObject->reset();
				}
			}
		}
	}
}
