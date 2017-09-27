/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/simplelinesymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback)(_in ev_real64 dWidth);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback)(_in int nType);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback)(_in int nType);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback)(_in ev_real64 value);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CSimpleLineSymbolProxy : public EarthView::World::Spatial::Display::CSimpleLineSymbol
				{
				private:
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback;
				public:
					CSimpleLineSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CSimpleLineSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64(EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64(EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType(EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType(EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType(EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType(EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64(EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64(EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor(EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString(EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getSymbolType();
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSimpleLineSymbol::toStream(stream);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::toSLD();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CSimpleLineSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::equal(pSymbol);
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CSimpleLineSymbol::fromSLD(sld);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSimpleLineSymbol::fromStream(stream);
					}
					virtual ev_real64 getWidth() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getWidth();
					}
					virtual void setWidth(_in ev_real64 dWidth)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback(dWidth);
						}
						else
							return this->CSimpleLineSymbol::setWidth(dWidth);
					}
					virtual EarthView::World::Spatial::Display::EVLineJoinType getJoinType()
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVLineJoinType returnValue = (EarthView::World::Spatial::Display::EVLineJoinType)m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getJoinType();
					}
					virtual EarthView::World::Spatial::Display::EVLineCapType getCapType()
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVLineCapType returnValue = (EarthView::World::Spatial::Display::EVLineCapType)m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getCapType();
					}
					virtual void setJoinType(_in EarthView::World::Spatial::Display::EVLineJoinType nType)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback((int)nType);
						}
						else
							return this->CSimpleLineSymbol::setJoinType(nType);
					}
					virtual void setCapType(_in EarthView::World::Spatial::Display::EVLineCapType nType)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback((int)nType);
						}
						else
							return this->CSimpleLineSymbol::setCapType(nType);
					}
					virtual ev_real64 getOffset() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getOffset();
					}
					virtual void setOffset(_in ev_real64 value)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback(value);
						}
						else
							return this->CSimpleLineSymbol::setOffset(value);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CSimpleLineSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CSimpleLineSymbol::setColor(color);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CSimpleLineSymbol::setImage(index, imageID, stream);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLineSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CSimpleLineSymbolProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getSimpleLineType_EVSimleLineType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVSimleLineType objXXXX = ptrNativeObject->getSimpleLineType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_setSimpleLineType_void_EVSimleLineType(void *pObjectXXXX, _in int nType )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					ptrNativeObject->setSimpleLineType((EarthView::World::Spatial::Display::EVSimleLineType)nType);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::toSLD();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toSLD();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toSLD_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::toSLD();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::fromSLD(sld1);
					else
						ptrNativeObject->fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromSLD_void_EVString_NoVirtual(void *pObjectXXXX, _inout char*& sld )
				{
					EarthView::World::Core::ev_string sld1 = sld;
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::fromSLD(sld1);
					sld=sld1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLineSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSimpleLineSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLineSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getWidth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setWidth_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getJoinType_EVLineJoinType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getCapType_EVLineCapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setJoinType_void_EVLineJoinType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setCapType_void_EVLineCapType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getOffset_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setOffset_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString_Callback* pCallback )
				{
					CSimpleLineSymbolProxy* ptr = dynamic_cast<CSimpleLineSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLineSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLineSymbol_setName_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
