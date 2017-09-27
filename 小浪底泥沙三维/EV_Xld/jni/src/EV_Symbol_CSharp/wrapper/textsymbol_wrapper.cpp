/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/textsymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback)(_in ev_int64 hdc, _in char*& text, _out ev_real64* xSize, _out ev_real64* ySize);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback)(_in EarthView::World::Display::IPaintDevice* paintDevice, _in char*& text, _out ev_real64* xSize, _out ev_real64* ySize);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CTextSymbolProxy : public EarthView::World::Spatial::Display::CTextSymbol
				{
				private:
					EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback;
				public:
					CTextSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64(EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64(EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor(EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor(EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor(EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString(EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::getSize();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CTextSymbol::toStream(stream);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::toSLD();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CTextSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CTextSymbol::equal(pSymbol);
					}
					virtual void getTextSize(_in ev_int64 hdc, _in const EVString& text, _out ev_real64* xSize, _out ev_real64* ySize) const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* text_Char = text.makeBuffer();
							m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback(hdc, text_Char, xSize, ySize);
						}
						else
							return this->CTextSymbol::getTextSize(hdc, text, xSize, ySize);
					}
					virtual void getTextSize(_in EarthView::World::Display::IPaintDevice* paintDevice, _in const EVString& text, _out ev_real64* xSize, _out ev_real64* ySize) const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* text_Char = text.makeBuffer();
							m_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback(paintDevice, text_Char, xSize, ySize);
						}
						else
							return this->CTextSymbol::getTextSize(paintDevice, text, xSize, ySize);
					}
					virtual EarthView::World::Spatial::Display::IColor* getOutlineColor() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::getOutlineColor();
					}
					virtual void setOutlineColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback(color);
						}
						else
							return this->CTextSymbol::setOutlineColor(color);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CTextSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CTextSymbol::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CTextSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CTextSymbol::setColor(color);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CTextSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CTextSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CTextSymbol::setImage(index, imageID, stream);
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::getColorRef();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::clone();
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTextSymbol::getSymbolType();
					}
				};
				REGISTER_FACTORY_CLASS(CTextSymbolProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setSize_void_ev_real64(void *pObjectXXXX, _in ev_real64 size )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setSize(size);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getSize();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getSize_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setFont_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setFont(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getFont_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFont();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setBold_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setBold(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextSymbol_isBold_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isBold();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setItalic_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setItalic(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextSymbol_isItalic_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isItalic();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setUnderline_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setUnderline(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextSymbol_isUnderline_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isUnderline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setStrikeOut_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setStrikeOut(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextSymbol_isStrikeOut_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isStrikeOut();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setOffsetX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setOffsetX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getOffsetX_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOffsetX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setOffsetY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setOffsetY(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getOffsetY_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOffsetY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 angle )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getAngle_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setHorizontalAlignment_void_EVTextHorizontalAlignment(void *pObjectXXXX, _in int flag )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setHorizontalAlignment((EarthView::World::Core::EVTextHorizontalAlignment)flag);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getHorizontalAlignment_EVTextHorizontalAlignment(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					EarthView::World::Core::EVTextHorizontalAlignment objXXXX = ptrNativeObject->getHorizontalAlignment();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setVerticalAlignment_void_EVTextVerticalAlignment(void *pObjectXXXX, _in int flag )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setVerticalAlignment((EarthView::World::Core::EVTextVerticalAlignment)flag);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getVerticalAlignment_EVTextVerticalAlignment(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					EarthView::World::Core::EVTextVerticalAlignment objXXXX = ptrNativeObject->getVerticalAlignment();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setText_void_EVString(void *pObjectXXXX, _in char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setText(text1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getText_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setRightToLeft_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->setRightToLeft(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextSymbol_isRightToLeft_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isRightToLeft();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int64 hdc, _in const char* text, _out ev_real64* xSize, _out ev_real64* ySize )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getTextSize(hdc, text1, xSize, ySize);
					else
						ptrNativeObject->getTextSize(hdc, text1, xSize, ySize);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_ev_int64_EVString_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_int64 hdc, _in const char* text, _out ev_real64* xSize, _out ev_real64* ySize )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getTextSize(hdc, text1, xSize, ySize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* paintDevice, _in const char* text, _out ev_real64* xSize, _out ev_real64* ySize )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getTextSize(paintDevice, text1, xSize, ySize);
					else
						ptrNativeObject->getTextSize(paintDevice, text1, xSize, ySize);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getTextSize_void_IPaintDevice_EVString_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* paintDevice, _in const char* text, _out ev_real64* xSize, _out ev_real64* ySize )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getTextSize(paintDevice, text1, xSize, ySize);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getOutlineColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getOutlineColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CTextSymbol_getOutlineColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::getOutlineColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::setOutlineColor(color);
					else
						ptrNativeObject->setOutlineColor(color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_setOutlineColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::setOutlineColor(color);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					if (dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CTextSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CTextSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_getName_EVString_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString_Callback* pCallback )
				{
					CTextSymbolProxy* ptr = dynamic_cast<CTextSymbolProxy*>((EarthView::World::Spatial::Display::CTextSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CTextSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
