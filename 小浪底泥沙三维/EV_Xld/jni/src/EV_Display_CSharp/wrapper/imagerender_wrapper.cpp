/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/imagerender.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_load_void_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->load(ref_device);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_load_void_IPaintDevice_IDisplayOptions(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device, _in EarthView::World::Display::IDisplayOptions* ref_displayOptions )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->load(ref_device, ref_displayOptions);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_unload_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->unload();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_translate_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 offsetX, _in ev_real64 offsetY )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->translate(offsetX, offsetY);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_scale_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 scaleX, _in ev_real64 scaleY )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->scale(scaleX, scaleY);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_rotate_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->rotate(angle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_rotateAt_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->rotateAt(angle, x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_setClip_void_CDataPath(void *pObjectXXXX, _in EarthView::World::Display::CDataPath* path )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->setClip(path);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_setClip_void_CDataRegion(void *pObjectXXXX, _in EarthView::World::Display::CDataRegion* region )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->setClip(region);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawImage_void_IBitmap_IEnvelope(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawImage(bmp, destExt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawImage_void_IBitmap_IEnvelope_IEnvelope(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope* srcExt )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawImage(bmp, destExt, srcExt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in ev_real64 x, _in ev_real64 y )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawImage(bmp, x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in ev_real64 x, _in ev_real64 y, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawImage(bmp, x, y, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawImage(bmp, x, y, w, h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawImage_void_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawImage(bmp, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawImage_void_CMetaFile_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::CMetaFile* metafile, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawImage(metafile, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CImageRender_drawCacheBitmap_void_ICachedBitmap_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::ICachedBitmap* bmp, _in ev_real64 x, _in ev_real64 y )
			{
				EarthView::World::Display::CImageRender* ptrNativeObject = (EarthView::World::Display::CImageRender*) pObjectXXXX;
				ptrNativeObject->drawCacheBitmap(bmp, x, y);
			}
		}
	}
}
