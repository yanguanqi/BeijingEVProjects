/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/stackedstatisticssymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CStackedStatisticsSymbolProxy : public EarthView::World::Spatial::Display::CStackedStatisticsSymbol
				{
				private:
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback;
				public:
					CStackedStatisticsSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CStackedStatisticsSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getSymbolType();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CStackedStatisticsSymbol::toStream(stream);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::toSLD();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CStackedStatisticsSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::equal(pSymbol);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CStackedStatisticsSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CStackedStatisticsSymbol::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CStackedStatisticsSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CStackedStatisticsSymbol::setColor(color);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CStackedStatisticsSymbol::setImage(index, imageID, stream);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CStackedStatisticsSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CStackedStatisticsSymbolProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_isSizeFixed_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSizeFixed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setSizeFixed_void_ev_bool(void *pObjectXXXX, _in ev_bool bFixed )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->setSizeFixed(bFixed);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_isShowOutline_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isShowOutline();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setShowOutline_void_ev_bool(void *pObjectXXXX, _in ev_bool bShow )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->setShowOutline(bShow);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_isVerticalBar_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVerticalBar();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setVerticalBar_void_ev_bool(void *pObjectXXXX, _in ev_bool bVertical )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->setVerticalBar(bVertical);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getWidth_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 dWidth )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->setWidth(dWidth);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					if (dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStackedStatisticsSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CStackedStatisticsSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CStackedStatisticsSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString_Callback* pCallback )
				{
					CStackedStatisticsSymbolProxy* ptr = dynamic_cast<CStackedStatisticsSymbolProxy*>((EarthView::World::Spatial::Display::CStackedStatisticsSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStackedStatisticsSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
