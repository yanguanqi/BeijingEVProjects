/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/picturefillsymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef const EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* outline);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback)(_in ev_bool bUse);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback)(_in ev_bool bFill);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CPictureFillSymbolProxy : public EarthView::World::Spatial::Display::CPictureFillSymbol
				{
				private:
					EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback;
				public:
					CPictureFillSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CPictureFillSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol(EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol(EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool(EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool(EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool(EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool(EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor(EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString(EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getSymbolType();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPictureFillSymbol::toStream(stream);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::toSLD();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CPictureFillSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::equal(pSymbol);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CPictureFillSymbol::setImage(index, imageID, stream);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CPictureFillSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPictureFillSymbol::fromStream(stream);
					}
					virtual const EarthView::World::Spatial::Display::ISymbol* getOutline() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getOutline();
					}
					virtual void setOutline(_in const EarthView::World::Spatial::Display::ISymbol* outline)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback(outline);
						}
						else
							return this->CPictureFillSymbol::setOutline(outline);
					}
					virtual ev_bool isUseOutline() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::isUseOutline();
					}
					virtual void setUseOutline(_in ev_bool bUse)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback(bUse);
						}
						else
							return this->CPictureFillSymbol::setUseOutline(bUse);
					}
					virtual ev_bool isFill() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::isFill();
					}
					virtual void setFill(_in ev_bool bFill)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback(bFill);
						}
						else
							return this->CPictureFillSymbol::setFill(bFill);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CPictureFillSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CPictureFillSymbol::setColor(color);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CPictureFillSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CPictureFillSymbolProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getAngle_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getPictureSize_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getPictureSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getScaleX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getScaleX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getScaleY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getScaleY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_isSwapColor_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSwapColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_isOneBit_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOneBit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getTransparentColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getTransparentColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getOffsetX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOffsetX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getOffsetY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOffsetY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getSeparationX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSeparationX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getSeparationY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSeparationY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setAngle(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setBackgroundColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setBackgroundColor(color);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setScaleX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setScaleX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setScaleY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setScaleY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setSwapColor_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setSwapColor(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setTransparentColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setTransparentColor(color);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setOffsetX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setOffsetX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setOffsetY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setOffsetY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setSeparationX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setSeparationX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setSeparationY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->setSeparationY(value);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::hasImage();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasImage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_hasImage_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::hasImage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getImageCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getImageCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImageCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getImageCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getImageID(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getImageID(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImageID_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getImageID(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::getImage(index);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in ev_uint32 index, _in const char* imageID, _in void* stream )
				{
					EarthView::World::Core::ev_string imageID1 = imageID;
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
					else
						ptrNativeObject->setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in const char* imageID, _in void* stream )
				{
					EarthView::World::Core::ev_string imageID1 = imageID;
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CPictureFillSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CPictureFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CPictureFillSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getOutline_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setOutline_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_isUseOutline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setUseOutline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_isFill_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setFill_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString_Callback* pCallback )
				{
					CPictureFillSymbolProxy* ptr = dynamic_cast<CPictureFillSymbolProxy*>((EarthView::World::Spatial::Display::CPictureFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CPictureFillSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
