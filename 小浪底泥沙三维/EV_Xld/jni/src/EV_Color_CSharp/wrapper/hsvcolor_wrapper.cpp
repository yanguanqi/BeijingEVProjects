/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/hsvcolor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 red, _in ev_int32 green, _in ev_int32 blue);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& L, _out ev_real64& a, _out ev_real64& b);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback)();
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback)();
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback)();
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback)(_out ev_uint8& red, _out ev_uint8& green, _out ev_uint8& blue);
				typedef ev_uint8  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 L, _in ev_real64 a, _in ev_real64 b);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback)(_in ev_uint8 red, _in ev_uint8 green, _in ev_uint8 blue);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback)(_in ev_bool value);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback)(_in ev_uint8 value);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CHsvColorProxy : public EarthView::World::Spatial::Display::CHsvColor
				{
				private:
					EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback;
					EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback* m_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback;
					EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback* m_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback;
					EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback* m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback;
					EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback* m_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback;
					EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback* m_EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback;
					EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback* m_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback;
					EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback* m_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback;
					EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback;
				public:
					CHsvColorProxy(EarthView::World::Core::CNameValuePairList *pList) : CHsvColor(pList)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType(EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32(EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32(EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8(EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8(EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8(EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8(EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8(EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool(EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8(EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool(EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8(EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_clone_IColor(EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream(EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString(EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor(EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void setCIELab(_in ev_real64 L, _in ev_real64 a, _in ev_real64 b)
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback(L, a, b);
						}
						else
							return this->CHsvColor::setCIELab(L, a, b);
					}
					virtual void setRGB(_in ev_int32 red, _in ev_int32 green, _in ev_int32 blue)
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback(red, green, blue);
						}
						else
							return this->CHsvColor::setRGB(red, green, blue);
					}
					virtual EarthView::World::Spatial::Display::IColor* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CHsvColor::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CHsvColor::toStream(stream);
					}
					virtual EarthView::World::Spatial::Display::EVColorSpaceType getType() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVColorSpaceType returnValue = (EarthView::World::Spatial::Display::EVColorSpaceType)m_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::getType();
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CHsvColor::fromXmlElement(element);
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback(pColor);
							return returnValue;
						}
						else
							return this->CHsvColor::equal(pColor);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CHsvColor::fromStream(stream);
					}
					virtual void getCIELab(_out ev_real64& L, _out ev_real64& a, _out ev_real64& b) const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback(L, a, b);
						}
						else
							return this->CHsvColor::getCIELab(L, a, b);
					}
					virtual ev_uint32 getCOLORREF() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::getCOLORREF();
					}
					virtual ev_uint32 getRgbValue() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::getRgbValue();
					}
					virtual ev_uint8 getRed() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::getRed();
					}
					virtual ev_uint8 getGreen() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::getGreen();
					}
					virtual ev_uint8 getBlue() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::getBlue();
					}
					virtual void getRGB(_out ev_uint8& red, _out ev_uint8& green, _out ev_uint8& blue) const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback(red, green, blue);
						}
						else
							return this->CHsvColor::getRGB(red, green, blue);
					}
					virtual EVString toRGBString() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::toRGBString();
					}
					virtual ev_bool isNULL() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::isNULL();
					}
					virtual void setNULL(_in ev_bool value)
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback(value);
						}
						else
							return this->CHsvColor::setNULL(value);
					}
					virtual ev_uint8 getTransparent() const
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							ev_uint8 returnValue = m_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback();
							return returnValue;
						}
						else
							return this->CHsvColor::getTransparent();
					}
					virtual void setTransparent(_in ev_uint8 value)
					{
						if(m_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback(value);
						}
						else
							return this->CHsvColor::setTransparent(value);
					}
				};
				REGISTER_FACTORY_CLASS(CHsvColorProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CHsvColor_getHue_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getHue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CHsvColor_getSaturation_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSaturation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CHsvColor_getValue_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setHue_void_ev_int32(void *pObjectXXXX, _in ev_int32 h )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->setHue(h);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setSaturation_void_ev_int32(void *pObjectXXXX, _in ev_int32 s )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->setSaturation(s);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setValue_void_ev_int32(void *pObjectXXXX, _in ev_int32 v )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->setValue(v);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setColor_void_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 h, _in ev_int32 s, _in ev_int32 v )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->setColor(h, s, v);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 L, _in ev_real64 a, _in ev_real64 b )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::setCIELab(L, a, b);
					else
						ptrNativeObject->setCIELab(L, a, b);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setCIELab_void_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 L, _in ev_real64 a, _in ev_real64 b )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::setCIELab(L, a, b);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 red, _in ev_int32 green, _in ev_int32 blue )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::setRGB(red, green, blue);
					else
						ptrNativeObject->setRGB(red, green, blue);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 red, _in ev_int32 green, _in ev_int32 blue )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::setRGB(red, green, blue);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CHsvColor_clone_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_clone_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_clone_IColor_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_clone_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CHsvColor_clone_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVColorSpaceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVColorSpaceType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CHsvColor_getType_EVColorSpaceType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVColorSpaceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CHsvColor_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::equal(pColor);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pColor);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CHsvColor_equal_ev_bool_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::equal(pColor);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					if (dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CHsvColor_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CHsvColor* ptrNativeObject = (EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CHsvColor::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getCIELab_void_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getCOLORREF_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getRgbValue_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getRed_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getGreen_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getBlue_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getRGB_void_ev_uint8_ev_uint8_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_getTransparent_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_isNULL_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_setRGB_void_ev_uint8_ev_uint8_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_setNULL_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_setTransparent_void_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString_Callback* pCallback )
				{
					CHsvColorProxy* ptr = dynamic_cast<CHsvColorProxy*>((EarthView::World::Spatial::Display::CHsvColor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CHsvColor_toRGBString_EVString(pCallback);
					}
				}
			}
		}
	}
}
