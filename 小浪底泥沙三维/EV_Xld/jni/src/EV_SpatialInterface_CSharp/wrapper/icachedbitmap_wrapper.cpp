/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/icachedbitmap.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef void  ( _stdcall EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback)(_in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice);
			typedef void  ( _stdcall EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
			typedef void  ( _stdcall EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y);
			class ICachedBitmapProxy : public EarthView::World::Display::ICachedBitmap
			{
			private:
				EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback* m_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback;
				EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback* m_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback;
				EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback* m_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback;
			public:
				ICachedBitmapProxy(EarthView::World::Core::CNameValuePairList *pList) : ICachedBitmap(pList)
				{
					m_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback = NULL;
					m_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback = NULL;
				}
			protected:
				C_DISABLE_COPY(ICachedBitmapProxy)
			public:
				ev_void registerCallback_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice(EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback* pCallback)
				{
					m_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32(EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32(EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback = pCallback;
				}
				virtual void load(_in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice)
				{
					if(m_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback(bmp, ref_destDevice);
					}
					else
						return this->ICachedBitmap::load(bmp, ref_destDevice);
				}
				virtual void render(_in ev_int32 x, _in ev_int32 y)
				{
					if(m_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback(x, y);
					}
					else
						return this->ICachedBitmap::render(x, y);
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y)
				{
					if(m_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback(destDevice, x, y);
					}
					else
						return this->ICachedBitmap::render(destDevice, x, y);
				}
			};
			REGISTER_FACTORY_CLASS(ICachedBitmapProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice )
			{
				EarthView::World::Display::ICachedBitmap* ptrNativeObject = (EarthView::World::Display::ICachedBitmap*) pObjectXXXX;
				if (dynamic_cast<ICachedBitmapProxy*>((EarthView::World::Display::ICachedBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::ICachedBitmap::load(bmp, ref_destDevice);
				else
					ptrNativeObject->load(bmp, ref_destDevice);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice( void *pObjectXXXX, EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_Callback* pCallback )
			{
				ICachedBitmapProxy* ptr = dynamic_cast<ICachedBitmapProxy*>((EarthView::World::Display::ICachedBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_ICachedBitmap_load_void_IBitmap_IPaintDevice_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice )
			{
				EarthView::World::Display::ICachedBitmap* ptrNativeObject = (EarthView::World::Display::ICachedBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::ICachedBitmap::load(bmp, ref_destDevice);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::ICachedBitmap* ptrNativeObject = (EarthView::World::Display::ICachedBitmap*) pObjectXXXX;
				if (dynamic_cast<ICachedBitmapProxy*>((EarthView::World::Display::ICachedBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::ICachedBitmap::render(x, y);
				else
					ptrNativeObject->render(x, y);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_Callback* pCallback )
			{
				ICachedBitmapProxy* ptr = dynamic_cast<ICachedBitmapProxy*>((EarthView::World::Display::ICachedBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_ICachedBitmap_render_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::ICachedBitmap* ptrNativeObject = (EarthView::World::Display::ICachedBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::ICachedBitmap::render(x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::ICachedBitmap* ptrNativeObject = (EarthView::World::Display::ICachedBitmap*) pObjectXXXX;
				if (dynamic_cast<ICachedBitmapProxy*>((EarthView::World::Display::ICachedBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::ICachedBitmap::render(destDevice, x, y);
				else
					ptrNativeObject->render(destDevice, x, y);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback* pCallback )
			{
				ICachedBitmapProxy* ptr = dynamic_cast<ICachedBitmapProxy*>((EarthView::World::Display::ICachedBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_ICachedBitmap_render_void_IPaintDevice_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::ICachedBitmap* ptrNativeObject = (EarthView::World::Display::ICachedBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::ICachedBitmap::render(destDevice, x, y);
			}
		}
	}
}
