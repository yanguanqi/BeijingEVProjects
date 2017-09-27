/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/cartographiclinesymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback)(_in ev_real64 dWidth);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback)(_in int nType);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback)(_in int nType);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CCartographicLineSymbolProxy : public EarthView::World::Spatial::Display::CCartographicLineSymbol
				{
				private:
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback;
				public:
					CCartographicLineSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CCartographicLineSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64(EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64(EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType(EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType(EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType(EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType(EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64(EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64(EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor(EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString(EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void setWidth(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback(value);
						}
						else
							return this->CCartographicLineSymbol::setWidth(value);
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getSymbolType();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCartographicLineSymbol::toStream(stream);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::toSLD();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CCartographicLineSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::equal(pSymbol);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CCartographicLineSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CCartographicLineSymbol::fromStream(stream);
					}
					virtual ev_real64 getWidth() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getWidth();
					}
					virtual EarthView::World::Spatial::Display::EVLineJoinType getJoinType()
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVLineJoinType returnValue = (EarthView::World::Spatial::Display::EVLineJoinType)m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getJoinType();
					}
					virtual EarthView::World::Spatial::Display::EVLineCapType getCapType()
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVLineCapType returnValue = (EarthView::World::Spatial::Display::EVLineCapType)m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getCapType();
					}
					virtual void setJoinType(_in EarthView::World::Spatial::Display::EVLineJoinType nType)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback((int)nType);
						}
						else
							return this->CCartographicLineSymbol::setJoinType(nType);
					}
					virtual void setCapType(_in EarthView::World::Spatial::Display::EVLineCapType nType)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback((int)nType);
						}
						else
							return this->CCartographicLineSymbol::setCapType(nType);
					}
					virtual ev_real64 getOffset() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getOffset();
					}
					virtual void setOffset(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback(value);
						}
						else
							return this->CCartographicLineSymbol::setOffset(value);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CCartographicLineSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CCartographicLineSymbol::setColor(color);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CCartographicLineSymbol::setImage(index, imageID, stream);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CCartographicLineSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CCartographicLineSymbolProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getDecorationSymbolRef_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDecorationSymbolRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setDecorationSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setDecorationSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setUseDecoration_void_ev_bool(void *pObjectXXXX, _in ev_bool bUse )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setUseDecoration(bUse);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_isUseDecoration_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isUseDecoration();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setHorizontalOffset_void_ev_real64(void *pObjectXXXX, _in ev_real64 offsetX )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setHorizontalOffset(offsetX);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getHorizontalOffset_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getHorizontalOffset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getDecorationOffsetX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getDecorationOffsetX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setDecorationOffsetX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setDecorationOffsetX(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getDecorationOffsetY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getDecorationOffsetY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setDecorationOffsetY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setDecorationOffsetY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setDecorationAngle_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setDecorationAngle(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getDecorationAngle_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getDecorationAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getIntervalSpaceType_EVIntervalSpaceType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVIntervalSpaceType objXXXX = ptrNativeObject->getIntervalSpaceType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setIntervalSpaceType_void_EVIntervalSpaceType(void *pObjectXXXX, _in int nType )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setIntervalSpaceType((EarthView::World::Spatial::Display::EVIntervalSpaceType)nType);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getLengthPreSpace_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLengthPreSpace();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setLengthPreSpace_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setLengthPreSpace(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getRadioValue_ev_real64_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRadioValue(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getRadioValueCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getRadioValueCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setRadioValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setRadioValue(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_removeRadioValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->removeRadioValue(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_clearRatioValue_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->clearRatioValue();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_containsRatioValue_ev_bool_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->containsRatioValue(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getDashSpaceCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getDashSpaceCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getDashSpaceValue_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getDashSpaceValue(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_insertDashSpaceValue_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 value, _in ev_int32 index )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->insertDashSpaceValue(value, index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_appendDashSpaceValue_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->appendDashSpaceValue(value);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setDashSpaceValue_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 value, _in ev_int32 index )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->setDashSpaceValue(value, index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_clearDashSpace_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->clearDashSpace();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::setWidth(value);
					else
						ptrNativeObject->setWidth(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_setWidth_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::setWidth(value);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CCartographicLineSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CCartographicLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CCartographicLineSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getWidth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getJoinType_EVLineJoinType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getCapType_EVLineCapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setJoinType_void_EVLineJoinType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setCapType_void_EVLineCapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getOffset_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setOffset_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString_Callback* pCallback )
				{
					CCartographicLineSymbolProxy* ptr = dynamic_cast<CCartographicLineSymbolProxy*>((EarthView::World::Spatial::Display::CCartographicLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CCartographicLineSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
