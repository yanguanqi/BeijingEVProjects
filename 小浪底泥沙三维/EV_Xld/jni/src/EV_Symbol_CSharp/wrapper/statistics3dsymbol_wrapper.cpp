/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/statistics3dsymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall Get_EarthView_World_Spatial_Display_TagStatistics3DSymbol_pSymbol( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::TagStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::TagStatistics3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->pSymbol;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_TagStatistics3DSymbol_pSymbol( void *pObjectXXXX, EarthView::World::Spatial::Display::ISymbol*  value )
				{
					((EarthView::World::Spatial::Display::TagStatistics3DSymbol*)pObjectXXXX)->pSymbol = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Display_TagStatistics3DSymbol_mFieldName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::TagStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::TagStatistics3DSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mFieldName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_TagStatistics3DSymbol_mFieldName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Display::TagStatistics3DSymbol*)pObjectXXXX)->mFieldName = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Display_TagStatistics3DSymbol_mdValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::TagStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::TagStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mdValue;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_TagStatistics3DSymbol_mdValue( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Display::TagStatistics3DSymbol*)pObjectXXXX)->mdValue = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Display_TagStatistics3DSymbol_mdValueRatio( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::TagStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::TagStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mdValueRatio;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_TagStatistics3DSymbol_mdValueRatio( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Display::TagStatistics3DSymbol*)pObjectXXXX)->mdValueRatio = value;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CStatistics3DSymbolProxy : public EarthView::World::Spatial::Display::CStatistics3DSymbol
				{
				private:
					EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback;
				public:
					CStatistics3DSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CStatistics3DSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol(EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor(EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor(EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor(EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor(EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor(EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString(EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::equal(pSymbol);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CStatistics3DSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::toXmlElement();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CStatistics3DSymbol::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CStatistics3DSymbol::fromStream(stream);
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getSymbolType();
					}
					virtual ev_bool similar(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol) const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::similar(pSymbol);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CStatistics3DSymbol::setImage(index, imageID, stream);
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontColor() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getFontColor();
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontOutlineColor() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getFontOutlineColor();
					}
					virtual void setFontOutlineColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback(color);
						}
						else
							return this->CStatistics3DSymbol::setFontOutlineColor(color);
					}
					virtual void setFontColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback(color);
						}
						else
							return this->CStatistics3DSymbol::setFontColor(color);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CStatistics3DSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CStatistics3DSymbol::setColor(color);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::toSLD();
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CStatistics3DSymbol::fromSLD(sld);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CStatistics3DSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CStatistics3DSymbolProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getGeometryHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getGeometryHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setGeometryHeight_void_ev_real64(void *pObjectXXXX, _in const ev_real64 height )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setGeometryHeight(height);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getGeometryRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getGeometryRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setGeometryRadius_void_ev_real64(void *pObjectXXXX, _in const ev_real64 radius )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setGeometryRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getValue_ev_real64_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getValue(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setValue_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 index, _in const ev_real64 value )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setValue(index, value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getValueRatio_ev_real64_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getValueRatio(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setValueRatio_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 index, _in const ev_real64 value )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setValueRatio(index, value);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getFieldName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFieldName(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setFieldName_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 index, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setFieldName(index, name1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSymbolCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbol_ISymbol_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setSymbol_void_ev_uint32_ISymbol(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setSymbol(index, symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_addSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->addSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_addSymbol_void_ISymbol_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol, _in const ev_real64 value )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->addSymbol(pSymbol, value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_addSymbol_void_ISymbol_EVString(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->addSymbol(pSymbol, name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_addSymbol_void_ISymbol_EVString_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol, _in const char* name, _in const ev_real64 value )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->addSymbol(pSymbol, name1, value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_moveSymbol_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 fromIndex, _in ev_uint32 toIndex )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->moveSymbol(fromIndex, toIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_deleteSymbol_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->deleteSymbol(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_clearSymbols_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->clearSymbols();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setSizeRatio_void_ev_real64(void *pObjectXXXX, _in const ev_real64 ratio )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setSizeRatio(ratio);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getSizeRatio_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSizeRatio();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getInterval_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setInterval_void_ev_real64(void *pObjectXXXX, _in const ev_real64 interval )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setInterval(interval);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setLabelMaxDistance_void_ev_real64(void *pObjectXXXX, _in const ev_real64 distancevalue )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setLabelMaxDistance(distancevalue);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getLabelMaxDistance_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLabelMaxDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setLabelFormat_void_EVStatisticsLabelFormat(void *pObjectXXXX, _in int format )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setLabelFormat((EarthView::World::Spatial::Display::CStatistics3DSymbol::EVStatisticsLabelFormat)format);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getLabelFormat_EVStatisticsLabelFormat(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::CStatistics3DSymbol::EVStatisticsLabelFormat objXXXX = ptrNativeObject->getLabelFormat();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setSymbolExtensionFace_void_EVSymbol3DExtensionFace(void *pObjectXXXX, _in int extension )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setSymbolExtensionFace((EarthView::World::Spatial::Display::CStatistics3DSymbol::EVSymbol3DExtensionFace)extension);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolExtensionFace_EVSymbol3DExtensionFace(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::CStatistics3DSymbol::EVSymbol3DExtensionFace objXXXX = ptrNativeObject->getSymbolExtensionFace();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_setSymbolExtensionValue_void_ev_real64(void *pObjectXXXX, _in const ev_real64 value )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->setSymbolExtensionValue(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolExtensionValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSymbolExtensionValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CStatistics3DSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CStatistics3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CStatistics3DSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_similar_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getFontOutlineColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontOutlineColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setFontColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CStatistics3DSymbolProxy* ptr = dynamic_cast<CStatistics3DSymbolProxy*>((EarthView::World::Spatial::Display::CStatistics3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CStatistics3DSymbol_fromSLD_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
