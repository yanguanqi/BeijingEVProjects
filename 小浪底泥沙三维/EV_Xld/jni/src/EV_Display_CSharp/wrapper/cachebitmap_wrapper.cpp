/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/cachebitmap.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef void  ( _stdcall EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback)(_in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice);
			typedef void  ( _stdcall EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
			typedef void  ( _stdcall EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y);
			class CCacheBitmapProxy : public EarthView::World::Display::CCacheBitmap
			{
			private:
				EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback* m_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback;
				EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback* m_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback;
				EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback* m_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback;
			public:
				CCacheBitmapProxy(EarthView::World::Core::CNameValuePairList *pList) : CCacheBitmap(pList)
				{
					m_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback = NULL;
					m_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback = NULL;
				}
			protected:
				C_DISABLE_COPY(CCacheBitmapProxy)
			public:
				ev_void registerCallback_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice(EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback* pCallback)
				{
					m_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32(EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32(EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback = pCallback;
				}
				virtual void load(_in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice)
				{
					if(m_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback(bmp, ref_destDevice);
					}
					else
						return this->CCacheBitmap::load(bmp, ref_destDevice);
				}
				virtual void render(_in ev_int32 x, _in ev_int32 y)
				{
					if(m_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback(x, y);
					}
					else
						return this->CCacheBitmap::render(x, y);
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y)
				{
					if(m_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback(destDevice, x, y);
					}
					else
						return this->CCacheBitmap::render(destDevice, x, y);
				}
			};
			REGISTER_FACTORY_CLASS(CCacheBitmapProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice )
			{
				EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				if (dynamic_cast<CCacheBitmapProxy*>((EarthView::World::Display::CCacheBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CCacheBitmap::load(bmp, ref_destDevice);
				else
					ptrNativeObject->load(bmp, ref_destDevice);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice( void *pObjectXXXX, EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_Callback* pCallback )
			{
				CCacheBitmapProxy* ptr = dynamic_cast<CCacheBitmapProxy*>((EarthView::World::Display::CCacheBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CCacheBitmap_load_void_IBitmap_IPaintDevice_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IBitmap* bmp, _in EarthView::World::Display::IPaintDevice* ref_destDevice )
			{
				EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CCacheBitmap::load(bmp, ref_destDevice);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CCacheBitmap_getWidth_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CCacheBitmap_getHeight_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				if (dynamic_cast<CCacheBitmapProxy*>((EarthView::World::Display::CCacheBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CCacheBitmap::render(x, y);
				else
					ptrNativeObject->render(x, y);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_Callback* pCallback )
			{
				CCacheBitmapProxy* ptr = dynamic_cast<CCacheBitmapProxy*>((EarthView::World::Display::CCacheBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CCacheBitmap_render_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CCacheBitmap::render(x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				if (dynamic_cast<CCacheBitmapProxy*>((EarthView::World::Display::CCacheBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CCacheBitmap::render(destDevice, x, y);
				else
					ptrNativeObject->render(destDevice, x, y);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_Callback* pCallback )
			{
				CCacheBitmapProxy* ptr = dynamic_cast<CCacheBitmapProxy*>((EarthView::World::Display::CCacheBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CCacheBitmap_render_void_IPaintDevice_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_int32 x, _in ev_int32 y )
			{
				EarthView::World::Display::CCacheBitmap* ptrNativeObject = (EarthView::World::Display::CCacheBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CCacheBitmap::render(destDevice, x, y);
			}
		}
	}
}
