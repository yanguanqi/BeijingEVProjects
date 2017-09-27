/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorspaceconvert.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_setMonitorParameter_void_CMonitorParameter(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CMonitorParameter* param )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ptrNativeObject->setMonitorParameter(param);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CMonitorParameter*  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_getMonitorParameter_CMonitorParameter(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					EarthView::World::Spatial::Display::CMonitorParameter* objXXXX = ptrNativeObject->getMonitorParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_CIELabToRGB_void_ev_real64_ev_real64_ev_real64_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _in ev_real64 CIELab_L, _in ev_real64 CIELab_a, _in ev_real64 CIELab_b, _out ev_uint8& RGB_r, _out ev_uint8& RGB_g, _out ev_uint8& RGB_b )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ptrNativeObject->CIELabToRGB(CIELab_L, CIELab_a, CIELab_b, RGB_r, RGB_g, RGB_b);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_rgbToCIELab_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 RGB_r, _in ev_int32 RGB_g, _in ev_int32 RGB_b, _out ev_real64& CIELab_L, _out ev_real64& CIELab_a, _out ev_real64& CIELab_b )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ptrNativeObject->rgbToCIELab(RGB_r, RGB_g, RGB_b, CIELab_L, CIELab_a, CIELab_b);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_CIELabToHsv_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 L, _in ev_real64 a, _in ev_real64 b, _out ev_real64& h, _out ev_real64& s, _out ev_real64& v )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ptrNativeObject->CIELabToHsv(L, a, b, h, s, v);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_hsvToCIELab_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 h, _in ev_real64 s, _in ev_real64 v, _out ev_real64& L, _out ev_real64& a, _out ev_real64& b )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ptrNativeObject->hsvToCIELab(h, s, v, L, a, b);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_rgbToHsv_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 RGB_r, _in ev_int32 RGB_g, _in ev_int32 RGB_b, _out ev_real64& Hsv_h, _out ev_real64& Hsv_s, _out ev_real64& Hsv_v )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ptrNativeObject->rgbToHsv(RGB_r, RGB_g, RGB_b, Hsv_h, Hsv_s, Hsv_v);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_hsvToRGB_void_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_real64 Hsv_h, _in ev_real64 Hsv_s, _in ev_real64 Hsv_v, _out ev_int32& RGB_r, _out ev_int32& RGB_g, _out ev_int32& RGB_b )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ptrNativeObject->hsvToRGB(Hsv_h, Hsv_s, Hsv_v, RGB_r, RGB_g, RGB_b);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CColorSpaceConvert_canConvert_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CColorSpaceConvert* ptrNativeObject = (EarthView::World::Spatial::Display::CColorSpaceConvert*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canConvert();
					return objXXXX;
				}
			}
		}
	}
}
