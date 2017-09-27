/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/markerfillsymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef const EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* outline);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback)(_in ev_bool bUse);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback)(_in ev_bool bFill);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CMarkerFillSymbolProxy : public EarthView::World::Spatial::Display::CMarkerFillSymbol
				{
				private:
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback;
				public:
					CMarkerFillSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CMarkerFillSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol(EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol(EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool(EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool(EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool(EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool(EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor(EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString(EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getSymbolType();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CMarkerFillSymbol::toStream(stream);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::toSLD();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CMarkerFillSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::equal(pSymbol);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CMarkerFillSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CMarkerFillSymbol::fromStream(stream);
					}
					virtual const EarthView::World::Spatial::Display::ISymbol* getOutline() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getOutline();
					}
					virtual void setOutline(_in const EarthView::World::Spatial::Display::ISymbol* outline)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback(outline);
						}
						else
							return this->CMarkerFillSymbol::setOutline(outline);
					}
					virtual ev_bool isUseOutline() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::isUseOutline();
					}
					virtual void setUseOutline(_in ev_bool bUse)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback(bUse);
						}
						else
							return this->CMarkerFillSymbol::setUseOutline(bUse);
					}
					virtual ev_bool isFill() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::isFill();
					}
					virtual void setFill(_in ev_bool bFill)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback(bFill);
						}
						else
							return this->CMarkerFillSymbol::setFill(bFill);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CMarkerFillSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CMarkerFillSymbol::setColor(color);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CMarkerFillSymbol::setImage(index, imageID, stream);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CMarkerFillSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CMarkerFillSymbolProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getOffsetX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOffsetX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setOffsetX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->setOffsetX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getOffsetY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOffsetY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setOffsetY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->setOffsetY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setIntervalX_void_ev_real64(void *pObjectXXXX, _in ev_real64 interval )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->setIntervalX(interval);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getIntervalX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getIntervalX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setIntervalY_void_ev_real64(void *pObjectXXXX, _in ev_real64 interval )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->setIntervalY(interval);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getIntervalY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getIntervalY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getMarkerFillStyle_EVMarkerFillStyle(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVMarkerFillStyle objXXXX = ptrNativeObject->getMarkerFillStyle();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setMarkerFillStyle_void_EVMarkerFillStyle(void *pObjectXXXX, _in int nType )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->setMarkerFillStyle((EarthView::World::Spatial::Display::EVMarkerFillStyle)nType);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getMarkerSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getMarkerSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_setMarkerSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->setMarkerSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CMarkerFillSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CMarkerFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CMarkerFillSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getOutline_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setOutline_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_isUseOutline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setUseOutline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_isFill_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setFill_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString_Callback* pCallback )
				{
					CMarkerFillSymbolProxy* ptr = dynamic_cast<CMarkerFillSymbolProxy*>((EarthView::World::Spatial::Display::CMarkerFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CMarkerFillSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
