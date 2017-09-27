/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/bitmap.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef void*  ( _stdcall EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Display_CBitmap_getFilePath_EVString_Callback)();
			typedef ev_uchar*  ( _stdcall EarthView_World_Display_CBitmap_data_ev_uchar_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback)(_in char*& path);
			typedef void*  ( _stdcall EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback)(_in char*& type);
			typedef ev_bool  ( _stdcall EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback)(_in char*& type, _in ev_char* buffer, _inout int& size);
			typedef ev_int64  ( _stdcall EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback)();
			typedef ev_int64  ( _stdcall EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback)(_in ev_int32 background);
			typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Display_CBitmap_clone_IBitmap_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt);
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope* srcExt);
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y);
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh);
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h);
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh);
			typedef ev_int64  ( _stdcall EarthView_World_Display_CBitmap_getDC_ev_int64_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_releaseDC_void_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_fill_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
			typedef void  ( _stdcall EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback)(_in ev_int32 color);
			typedef ev_int32  ( _stdcall EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback)();
			class CBitmapProxy : public EarthView::World::Display::CBitmap
			{
			private:
				EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback* m_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback;
				EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback* m_EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback;
				EarthView_World_Display_CBitmap_getFilePath_EVString_Callback* m_EarthView_World_Display_CBitmap_getFilePath_EVString_Callback;
				EarthView_World_Display_CBitmap_data_ev_uchar_Callback* m_EarthView_World_Display_CBitmap_data_ev_uchar_Callback;
				EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback* m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback;
				EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback* m_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback;
				EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback* m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback;
				EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback* m_EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback;
				EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback* m_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback;
				EarthView_World_Display_CBitmap_clone_IBitmap_Callback* m_EarthView_World_Display_CBitmap_clone_IBitmap_Callback;
				EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback* m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback;
				EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback* m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback;
				EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CBitmap_getDC_ev_int64_Callback* m_EarthView_World_Display_CBitmap_getDC_ev_int64_Callback;
				EarthView_World_Display_CBitmap_releaseDC_void_Callback* m_EarthView_World_Display_CBitmap_releaseDC_void_Callback;
				EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback* m_EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback;
				EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback* m_EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback;
				EarthView_World_Display_CBitmap_fill_void_IColor_Callback* m_EarthView_World_Display_CBitmap_fill_void_IColor_Callback;
				EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback* m_EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback;
				EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback* m_EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback;
			public:
				CBitmapProxy(EarthView::World::Core::CNameValuePairList *pList) : CBitmap(pList)
				{
					m_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getFilePath_EVString_Callback = NULL;
					m_EarthView_World_Display_CBitmap_data_ev_uchar_Callback = NULL;
					m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CBitmap_clone_IBitmap_Callback = NULL;
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback = NULL;
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback = NULL;
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getDC_ev_int64_Callback = NULL;
					m_EarthView_World_Display_CBitmap_releaseDC_void_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CBitmap_fill_void_IColor_Callback = NULL;
					m_EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback = NULL;
				}
			protected:
				C_DISABLE_COPY(CBitmapProxy)
			public:
				ev_void registerCallback_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8(EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getNativeGraphics_void(EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getFilePath_EVString(EarthView_World_Display_CBitmap_getFilePath_EVString_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getFilePath_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_data_ev_uchar(EarthView_World_Display_CBitmap_data_ev_uchar_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_data_ev_uchar_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_save_ev_bool_EVString(EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString(EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int(EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getHIcon_ev_int64(EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32(EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_clone_IBitmap(EarthView_World_Display_CBitmap_clone_IBitmap_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_clone_IBitmap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope(EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope(EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64(EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getDC_ev_int64(EarthView_World_Display_CBitmap_getDC_ev_int64_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getDC_ev_int64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_releaseDC_void(EarthView_World_Display_CBitmap_releaseDC_void_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_releaseDC_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getWidth_ev_int32(EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getHeight_ev_int32(EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_fill_void_IColor(EarthView_World_Display_CBitmap_fill_void_IColor_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_fill_void_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_fill_void_ev_int32(EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CBitmap_getResolution_ev_int32(EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback = pCallback;
				}
				virtual ev_int64 getDC()
				{
					if(m_EarthView_World_Display_CBitmap_getDC_ev_int64_Callback != NULL && this->isCustomExtend())
					{
						ev_int64 returnValue = m_EarthView_World_Display_CBitmap_getDC_ev_int64_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::getDC();
				}
				virtual void releaseDC()
				{
					if(m_EarthView_World_Display_CBitmap_releaseDC_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_releaseDC_void_Callback();
					}
					else
						return this->CBitmap::releaseDC();
				}
				virtual void* getNativeGraphics()
				{
					if(m_EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::getNativeGraphics();
				}
				virtual EVString getFilePath() const
				{
					if(m_EarthView_World_Display_CBitmap_getFilePath_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Display_CBitmap_getFilePath_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::getFilePath();
				}
				virtual ev_int32 getWidth() const
				{
					if(m_EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::getWidth();
				}
				virtual ev_int32 getHeight() const
				{
					if(m_EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::getHeight();
				}
				virtual void fill(_in const EarthView::World::Spatial::Display::IColor* color)
				{
					if(m_EarthView_World_Display_CBitmap_fill_void_IColor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_fill_void_IColor_Callback(color);
					}
					else
						return this->CBitmap::fill(color);
				}
				virtual void fill(_in ev_int32 color)
				{
					if(m_EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback(color);
					}
					else
						return this->CBitmap::fill(color);
				}
				virtual ev_uchar* data() const
				{
					if(m_EarthView_World_Display_CBitmap_data_ev_uchar_Callback != NULL && this->isCustomExtend())
					{
						ev_uchar* returnValue = m_EarthView_World_Display_CBitmap_data_ev_uchar_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::data();
				}
				virtual ev_int32 getResolution() const
				{
					if(m_EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::getResolution();
				}
				virtual ev_bool save(_in const EVString& path)
				{
					if(m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* path_Char = path.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback(path_Char);
						return returnValue;
					}
					else
						return this->CBitmap::save(path);
				}
				virtual EarthView::World::Core::MemoryDataStreamPtr saveToStream(_in const EVString& type)
				{
					if(m_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* type_Char = type.makeBuffer();
						EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback(type_Char);
						return returnValue;
					}
					else
						return this->CBitmap::saveToStream(type);
				}
				virtual ev_bool save(_in const EVString& type, _in ev_char* buffer, _inout int& size)
				{
					if(m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback != NULL && this->isCustomExtend())
					{
						char* type_Char = type.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback(type_Char, buffer, size);
						return returnValue;
					}
					else
						return this->CBitmap::save(type, buffer, size);
				}
				virtual ev_int64 getHIcon() const
				{
					if(m_EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback != NULL && this->isCustomExtend())
					{
						ev_int64 returnValue = m_EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::getHIcon();
				}
				virtual ev_int64 getHBITMAP(_in ev_int32 background) const
				{
					if(m_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int64 returnValue = m_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback(background);
						return returnValue;
					}
					else
						return this->CBitmap::getHBITMAP(background);
				}
				virtual EarthView::World::Display::IBitmap* clone() const
				{
					if(m_EarthView_World_Display_CBitmap_clone_IBitmap_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Display_CBitmap_clone_IBitmap_Callback();
						return returnValue;
					}
					else
						return this->CBitmap::clone();
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt)
				{
					if(m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback(destDevice, destExt);
					}
					else
						return this->CBitmap::render(destDevice, destExt);
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope* srcExt)
				{
					if(m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback(destDevice, destExt, srcExt);
					}
					else
						return this->CBitmap::render(destDevice, destExt, srcExt);
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y)
				{
					if(m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback(destDevice, x, y);
					}
					else
						return this->CBitmap::render(destDevice, x, y);
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh)
				{
					if(m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(destDevice, x, y, sx, sy, sw, sh);
					}
					else
						return this->CBitmap::render(destDevice, x, y, sx, sy, sw, sh);
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h)
				{
					if(m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback(destDevice, x, y, w, h);
					}
					else
						return this->CBitmap::render(destDevice, x, y, w, h);
				}
				virtual void render(_in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh)
				{
					if(m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(destDevice, x, y, w, h, sx, sy, sw, sh);
					}
					else
						return this->CBitmap::render(destDevice, x, y, w, h, sx, sy, sw, sh);
				}
				virtual void setTransparent(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CBitmap::setTransparent(transparent);
				}
			};
			REGISTER_FACTORY_CLASS(CBitmapProxy);
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CBitmap_getDC_ev_int64(void *pObjectXXXX )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getDC();
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getDC();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getDC_ev_int64( void *pObjectXXXX, EarthView_World_Display_CBitmap_getDC_ev_int64_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getDC_ev_int64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CBitmap_getDC_ev_int64_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getDC();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_releaseDC_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::releaseDC();
				else
					ptrNativeObject->releaseDC();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_releaseDC_void( void *pObjectXXXX, EarthView_World_Display_CBitmap_releaseDC_void_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_releaseDC_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_releaseDC_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::releaseDC();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CBitmap_getNativeGraphics_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getNativeGraphics();
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->getNativeGraphics();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getNativeGraphics_void( void *pObjectXXXX, EarthView_World_Display_CBitmap_getNativeGraphics_void_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getNativeGraphics_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CBitmap_getNativeGraphics_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getNativeGraphics();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Display_CBitmap_getFilePath_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getFilePath();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFilePath();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getFilePath_EVString( void *pObjectXXXX, EarthView_World_Display_CBitmap_getFilePath_EVString_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getFilePath_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Display_CBitmap_getFilePath_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getFilePath();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CBitmap_getWidth_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getWidth();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getWidth_ev_int32( void *pObjectXXXX, EarthView_World_Display_CBitmap_getWidth_ev_int32_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getWidth_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CBitmap_getWidth_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CBitmap_getHeight_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getHeight();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getHeight_ev_int32( void *pObjectXXXX, EarthView_World_Display_CBitmap_getHeight_ev_int32_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getHeight_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CBitmap_getHeight_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_fill_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_fill_void_IColor( void *pObjectXXXX, EarthView_World_Display_CBitmap_fill_void_IColor_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_fill_void_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_fill_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::fill(color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_fill_void_ev_int32(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_fill_void_ev_int32( void *pObjectXXXX, EarthView_World_Display_CBitmap_fill_void_ev_int32_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_fill_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_fill_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_uchar*  _stdcall EarthView_World_Display_CBitmap_data_ev_uchar(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_uchar* objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::data();
					return objXXXX;
				}
				else
				{
					ev_uchar* objXXXX = ptrNativeObject->data();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_data_ev_uchar( void *pObjectXXXX, EarthView_World_Display_CBitmap_data_ev_uchar_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_data_ev_uchar(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uchar*  _stdcall EarthView_World_Display_CBitmap_data_ev_uchar_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_uchar* objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::data();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CBitmap_getResolution_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getResolution();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResolution();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getResolution_ev_int32( void *pObjectXXXX, EarthView_World_Display_CBitmap_getResolution_ev_int32_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getResolution_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CBitmap_getResolution_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getResolution();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CBitmap_save_ev_bool_EVString(void *pObjectXXXX, _in const char* path )
			{
				EarthView::World::Core::ev_string path1 = path;
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::save(path1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->save(path1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_save_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Display_CBitmap_save_ev_bool_EVString_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_save_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CBitmap_save_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* path )
			{
				EarthView::World::Core::ev_string path1 = path;
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::save(path1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString(void *pObjectXXXX, _in const char* type )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::saveToStream(type1);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->saveToStream(type1);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CBitmap_saveToStream_MemoryDataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* type )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::saveToStream(type1);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int(void *pObjectXXXX, _in const char* type, _in ev_char* buffer, _inout int& size )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::save(type1, buffer, size);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->save(type1, buffer, size);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int( void *pObjectXXXX, EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CBitmap_save_ev_bool_EVString_ev_char_int_NoVirtual(void *pObjectXXXX, _in const char* type, _in ev_char* buffer, _inout int& size )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::save(type1, buffer, size);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CBitmap_getHIcon_ev_int64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getHIcon();
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getHIcon();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getHIcon_ev_int64( void *pObjectXXXX, EarthView_World_Display_CBitmap_getHIcon_ev_int64_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getHIcon_ev_int64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CBitmap_getHIcon_ev_int64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getHIcon();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32(void *pObjectXXXX, _in ev_int32 background )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getHBITMAP(background);
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getHBITMAP(background);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32( void *pObjectXXXX, EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CBitmap_getHBITMAP_ev_int64_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 background )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::getHBITMAP(background);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Display_CBitmap_clone_IBitmap(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
				{
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_clone_IBitmap( void *pObjectXXXX, EarthView_World_Display_CBitmap_clone_IBitmap_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_clone_IBitmap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Display_CBitmap_clone_IBitmap_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Display::CBitmap::clone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_destroyBitmapHandle_void_void(_in void* bitmapHandle )
			{
				EarthView::World::Display::CBitmap::destroyBitmapHandle(bitmapHandle);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, destExt);
				else
					ptrNativeObject->render(destDevice, destExt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope( void *pObjectXXXX, EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, destExt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope* srcExt )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, destExt, srcExt);
				else
					ptrNativeObject->render(destDevice, destExt, srcExt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_IEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope* destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope* srcExt )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, destExt, srcExt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y);
				else
					ptrNativeObject->render(destDevice, x, y);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y, sx, sy, sw, sh);
				else
					ptrNativeObject->render(destDevice, x, y, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h);
				else
					ptrNativeObject->render(destDevice, x, y, w, h);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h, sx, sy, sw, sh);
				else
					ptrNativeObject->render(destDevice, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_render_void_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h, _in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::render(destDevice, x, y, w, h, sx, sy, sw, sh);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::CBitmap*  _stdcall EarthView_World_Display_CBitmap_fromStream_CBitmap_MemoryDataStreamPtr(_in void* mptr )
			{
				EarthView::World::Display::CBitmap* objXXXX = EarthView::World::Display::CBitmap::fromStream(*(EarthView::World::Core::MemoryDataStreamPtr*)mptr);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CBitmap_getEncoderClsid_ev_bool_EVString_void(_in const char* format, _in void* clsid )
			{
				EarthView::World::Core::ev_string format1 = format;
				ev_bool objXXXX = EarthView::World::Display::CBitmap::getEncoderClsid(format1, clsid);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_setColorKey_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 transparentColor )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->setColorKey(transparentColor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 transparent )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				if (dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CBitmap::setTransparent(transparent);
				else
					ptrNativeObject->setTransparent(transparent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8( void *pObjectXXXX, EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_Callback* pCallback )
			{
				CBitmapProxy* ptr = dynamic_cast<CBitmapProxy*>((EarthView::World::Display::CBitmap*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CBitmap_setTransparent_void_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint8 transparent )
			{
				EarthView::World::Display::CBitmap* ptrNativeObject = (EarthView::World::Display::CBitmap*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CBitmap::setTransparent(transparent);
			}
		}
	}
}
