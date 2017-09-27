/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/metafile.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef ev_int64  ( _stdcall EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CMetaFile_releaseDC_void_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CMetaFile_fill_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
			typedef void  ( _stdcall EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback)(_in ev_int32 color);
			typedef ev_int32  ( _stdcall EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback)();
			class CMetaFileProxy : public EarthView::World::Display::CMetaFile
			{
			private:
				EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback* m_EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback;
				EarthView_World_Display_CMetaFile_releaseDC_void_Callback* m_EarthView_World_Display_CMetaFile_releaseDC_void_Callback;
				EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback* m_EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback;
				EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback* m_EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback;
				EarthView_World_Display_CMetaFile_fill_void_IColor_Callback* m_EarthView_World_Display_CMetaFile_fill_void_IColor_Callback;
				EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback* m_EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback;
				EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback* m_EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback;
			public:
				CMetaFileProxy(EarthView::World::Core::CNameValuePairList *pList) : CMetaFile(pList)
				{
					m_EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback = NULL;
					m_EarthView_World_Display_CMetaFile_releaseDC_void_Callback = NULL;
					m_EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CMetaFile_fill_void_IColor_Callback = NULL;
					m_EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Display_CMetaFile_getDC_ev_int64(EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback* pCallback)
				{
					m_EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CMetaFile_releaseDC_void(EarthView_World_Display_CMetaFile_releaseDC_void_Callback* pCallback)
				{
					m_EarthView_World_Display_CMetaFile_releaseDC_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CMetaFile_getWidth_ev_int32(EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CMetaFile_getHeight_ev_int32(EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CMetaFile_fill_void_IColor(EarthView_World_Display_CMetaFile_fill_void_IColor_Callback* pCallback)
				{
					m_EarthView_World_Display_CMetaFile_fill_void_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CMetaFile_fill_void_ev_int32(EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CMetaFile_getResolution_ev_int32(EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback = pCallback;
				}
				virtual ev_int64 getDC()
				{
					if(m_EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback != NULL && this->isCustomExtend())
					{
						ev_int64 returnValue = m_EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback();
						return returnValue;
					}
					else
						return this->CMetaFile::getDC();
				}
				virtual void releaseDC()
				{
					if(m_EarthView_World_Display_CMetaFile_releaseDC_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CMetaFile_releaseDC_void_Callback();
					}
					else
						return this->CMetaFile::releaseDC();
				}
				virtual ev_int32 getWidth() const
				{
					if(m_EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CMetaFile::getWidth();
				}
				virtual ev_int32 getHeight() const
				{
					if(m_EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CMetaFile::getHeight();
				}
				virtual void fill(_in const EarthView::World::Spatial::Display::IColor* color)
				{
					if(m_EarthView_World_Display_CMetaFile_fill_void_IColor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CMetaFile_fill_void_IColor_Callback(color);
					}
					else
						return this->CMetaFile::fill(color);
				}
				virtual void fill(_in ev_int32 color)
				{
					if(m_EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback(color);
					}
					else
						return this->CMetaFile::fill(color);
				}
				virtual ev_int32 getResolution() const
				{
					if(m_EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CMetaFile::getResolution();
				}
			};
			REGISTER_FACTORY_CLASS(CMetaFileProxy);
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CMetaFile_getDC_ev_int64(void *pObjectXXXX )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				if (dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CMetaFile::getDC();
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getDC();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CMetaFile_getDC_ev_int64( void *pObjectXXXX, EarthView_World_Display_CMetaFile_getDC_ev_int64_Callback* pCallback )
			{
				CMetaFileProxy* ptr = dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CMetaFile_getDC_ev_int64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CMetaFile_getDC_ev_int64_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CMetaFile::getDC();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_releaseDC_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				if (dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CMetaFile::releaseDC();
				else
					ptrNativeObject->releaseDC();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CMetaFile_releaseDC_void( void *pObjectXXXX, EarthView_World_Display_CMetaFile_releaseDC_void_Callback* pCallback )
			{
				CMetaFileProxy* ptr = dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CMetaFile_releaseDC_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_releaseDC_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CMetaFile::releaseDC();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CMetaFile_getNativeGraphics_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->getNativeGraphics();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Display_CMetaFile_getFilePath_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getFilePath();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CMetaFile_getWidth_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				if (dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CMetaFile::getWidth();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CMetaFile_getWidth_ev_int32( void *pObjectXXXX, EarthView_World_Display_CMetaFile_getWidth_ev_int32_Callback* pCallback )
			{
				CMetaFileProxy* ptr = dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CMetaFile_getWidth_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CMetaFile_getWidth_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CMetaFile::getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CMetaFile_getHeight_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				if (dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CMetaFile::getHeight();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CMetaFile_getHeight_ev_int32( void *pObjectXXXX, EarthView_World_Display_CMetaFile_getHeight_ev_int32_Callback* pCallback )
			{
				CMetaFileProxy* ptr = dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CMetaFile_getHeight_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CMetaFile_getHeight_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CMetaFile::getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_fill_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				if (dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CMetaFile::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CMetaFile_fill_void_IColor( void *pObjectXXXX, EarthView_World_Display_CMetaFile_fill_void_IColor_Callback* pCallback )
			{
				CMetaFileProxy* ptr = dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CMetaFile_fill_void_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_fill_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CMetaFile::fill(color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_fill_void_ev_int32(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				if (dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CMetaFile::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CMetaFile_fill_void_ev_int32( void *pObjectXXXX, EarthView_World_Display_CMetaFile_fill_void_ev_int32_Callback* pCallback )
			{
				CMetaFileProxy* ptr = dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CMetaFile_fill_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_fill_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CMetaFile::fill(color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_render_void_IPaintDevice_IEnvelope(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->render(destDevice, destExt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_render_void_IPaintDevice_IEnvelope_IEnvelope(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope* srcExt )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->render(destDevice, destExt, srcExt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_render_void_IPaintDevice_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->render(destDevice, x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->render(destDevice, x, y, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->render(destDevice, x, y, w, h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->render(destDevice, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_setTransparent_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->setTransparent(transparent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CMetaFile_save_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CMetaFile* ptrNativeObject = (EarthView::World::Display::CMetaFile*) pObjectXXXX;
				ptrNativeObject->save();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CMetaFile_getResolution_ev_int32( void *pObjectXXXX, EarthView_World_Display_CMetaFile_getResolution_ev_int32_Callback* pCallback )
			{
				CMetaFileProxy* ptr = dynamic_cast<CMetaFileProxy*>((EarthView::World::Display::CMetaFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CMetaFile_getResolution_ev_int32(pCallback);
				}
			}
		}
	}
}
