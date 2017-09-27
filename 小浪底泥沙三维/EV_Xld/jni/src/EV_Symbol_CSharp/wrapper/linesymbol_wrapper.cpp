/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/linesymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback)(_in ev_real64 dWidth);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback)(_in int nType);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback)(_in int nType);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CLineSymbolProxy : public EarthView::World::Spatial::Display::CLineSymbol
				{
				private:
					EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback;
				public:
					CLineSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CLineSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64(EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64(EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType(EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType(EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType(EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType(EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64(EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64(EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor(EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString(EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_real64 getWidth() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getWidth();
					}
					virtual void setWidth(_in ev_real64 dWidth)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback(dWidth);
						}
						else
							return this->CLineSymbol::setWidth(dWidth);
					}
					virtual EarthView::World::Spatial::Display::EVLineJoinType getJoinType()
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVLineJoinType returnValue = (EarthView::World::Spatial::Display::EVLineJoinType)m_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getJoinType();
					}
					virtual EarthView::World::Spatial::Display::EVLineCapType getCapType()
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVLineCapType returnValue = (EarthView::World::Spatial::Display::EVLineCapType)m_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getCapType();
					}
					virtual void setJoinType(_in EarthView::World::Spatial::Display::EVLineJoinType nType)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback((int)nType);
						}
						else
							return this->CLineSymbol::setJoinType(nType);
					}
					virtual void setCapType(_in EarthView::World::Spatial::Display::EVLineCapType nType)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback((int)nType);
						}
						else
							return this->CLineSymbol::setCapType(nType);
					}
					virtual ev_real64 getOffset() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getOffset();
					}
					virtual void setOffset(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback(value);
						}
						else
							return this->CLineSymbol::setOffset(value);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLineSymbol::toStream(stream);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::toSLD();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CLineSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CLineSymbol::equal(pSymbol);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CLineSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CLineSymbol::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CLineSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CLineSymbol::setColor(color);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CLineSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CLineSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CLineSymbol::setImage(index, imageID, stream);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getColorRef();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::clone();
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CLineSymbol::getSymbolType();
					}
				};
				REGISTER_FACTORY_CLASS(CLineSymbolProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getWidth();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getWidth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 dWidth )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setWidth(dWidth);
					else
						ptrNativeObject->setWidth(dWidth);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setWidth_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dWidth )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setWidth(dWidth);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVLineJoinType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getJoinType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVLineJoinType objXXXX = ptrNativeObject->getJoinType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getJoinType_EVLineJoinType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVLineJoinType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getJoinType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVLineCapType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getCapType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVLineCapType objXXXX = ptrNativeObject->getCapType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getCapType_EVLineCapType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVLineCapType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getCapType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType(void *pObjectXXXX, _in int nType )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setJoinType((EarthView::World::Spatial::Display::EVLineJoinType)nType);
					else
						ptrNativeObject->setJoinType((EarthView::World::Spatial::Display::EVLineJoinType)nType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setJoinType_void_EVLineJoinType_NoVirtual(void *pObjectXXXX, _in int nType )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setJoinType((EarthView::World::Spatial::Display::EVLineJoinType)nType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType(void *pObjectXXXX, _in int nType )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setCapType((EarthView::World::Spatial::Display::EVLineCapType)nType);
					else
						ptrNativeObject->setCapType((EarthView::World::Spatial::Display::EVLineCapType)nType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setCapType_void_EVLineCapType_NoVirtual(void *pObjectXXXX, _in int nType )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setCapType((EarthView::World::Spatial::Display::EVLineCapType)nType);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getOffset();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getOffset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CLineSymbol_getOffset_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::getOffset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setOffset(value);
					else
						ptrNativeObject->setOffset(value);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_setOffset_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::setOffset(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CLineSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CLineSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CLineSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLineSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CLineSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_getName_EVString_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString_Callback* pCallback )
				{
					CLineSymbolProxy* ptr = dynamic_cast<CLineSymbolProxy*>((EarthView::World::Spatial::Display::CLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CLineSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
