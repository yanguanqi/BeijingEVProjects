/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/fillsymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef const EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* outline);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback)(_in ev_bool bUse);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback)(_in ev_bool bFill);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CFillSymbolProxy : public EarthView::World::Spatial::Display::CFillSymbol
				{
				private:
					EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback;
				public:
					CFillSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CFillSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol(EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol(EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool(EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool(EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool(EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool(EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor(EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString(EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Display::ISymbol* getOutline() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::getOutline();
					}
					virtual void setOutline(_in const EarthView::World::Spatial::Display::ISymbol* outline)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback(outline);
						}
						else
							return this->CFillSymbol::setOutline(outline);
					}
					virtual ev_bool isUseOutline() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::isUseOutline();
					}
					virtual void setUseOutline(_in ev_bool bUse)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback(bUse);
						}
						else
							return this->CFillSymbol::setUseOutline(bUse);
					}
					virtual ev_bool isFill() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::isFill();
					}
					virtual void setFill(_in ev_bool bFill)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback(bFill);
						}
						else
							return this->CFillSymbol::setFill(bFill);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CFillSymbol::toStream(stream);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CFillSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::toXmlElement();
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::toSLD();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CFillSymbol::equal(pSymbol);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CFillSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CFillSymbol::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CFillSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CFillSymbol::setColor(color);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CFillSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CFillSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CFillSymbol::setImage(index, imageID, stream);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::getColorRef();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::clone();
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CFillSymbol::getSymbolType();
					}
				};
				REGISTER_FACTORY_CLASS(CFillSymbolProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::getOutline();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getOutline();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CFillSymbol_getOutline_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::getOutline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* outline )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::setOutline(outline);
					else
						ptrNativeObject->setOutline(outline);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_setOutline_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* outline )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::setOutline(outline);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::isUseOutline();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isUseOutline();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CFillSymbol_isUseOutline_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::isUseOutline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool(void *pObjectXXXX, _in ev_bool bUse )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::setUseOutline(bUse);
					else
						ptrNativeObject->setUseOutline(bUse);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_setUseOutline_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bUse )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::setUseOutline(bUse);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::isFill();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isFill();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CFillSymbol_isFill_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::isFill();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool(void *pObjectXXXX, _in ev_bool bFill )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::setFill(bFill);
					else
						ptrNativeObject->setFill(bFill);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_setFill_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bFill )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::setFill(bFill);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CFillSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CFillSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CFillSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					if (dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CFillSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CFillSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CFillSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_getName_EVString_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString_Callback* pCallback )
				{
					CFillSymbolProxy* ptr = dynamic_cast<CFillSymbolProxy*>((EarthView::World::Spatial::Display::CFillSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CFillSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
