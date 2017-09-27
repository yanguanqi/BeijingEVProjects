/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/simpleline3dsymbol.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Display_KeyValuePair_Key( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::KeyValuePair* ptrNativeObject = (EarthView::World::Spatial::Display::KeyValuePair*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->Key;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_KeyValuePair_Key( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Display::KeyValuePair*)pObjectXXXX)->Key = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Display_KeyValuePair_Value( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::KeyValuePair* ptrNativeObject = (EarthView::World::Spatial::Display::KeyValuePair*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->Value;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_KeyValuePair_Value( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Display::KeyValuePair*)pObjectXXXX)->Value = value1;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Display_KeyValuePair_ValueType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::KeyValuePair* ptrNativeObject = (EarthView::World::Spatial::Display::KeyValuePair*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVPropertyValueType objXXXX = ptrNativeObject->ValueType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_KeyValuePair_ValueType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Display::KeyValuePair*)pObjectXXXX)->ValueType = (EarthView::World::Spatial::Display::EVPropertyValueType)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Display_KeyValuePair_Memo( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::KeyValuePair* ptrNativeObject = (EarthView::World::Spatial::Display::KeyValuePair*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->Memo;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_KeyValuePair_Memo( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Display::KeyValuePair*)pObjectXXXX)->Memo = value1;
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback)(_in int mode);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CSimpleLine3DSymbolProxy : public EarthView::World::Spatial::Display::CSimpleLine3DSymbol
				{
				private:
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback;
				public:
					CSimpleLine3DSymbolProxy(EarthView::World::Core::CNameValuePairList *pList) : CSimpleLine3DSymbol(pList)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void setDrawingMode(_in EarthView::World::Spatial::Display::EVSymbol3DDrawingMode mode)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback((int)mode);
						}
						else
							return this->CSimpleLine3DSymbol::setDrawingMode(mode);
					}
					virtual EarthView::World::Spatial::Display::EVSymbol3DDrawingMode getDrawingMode()
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVSymbol3DDrawingMode returnValue = (EarthView::World::Spatial::Display::EVSymbol3DDrawingMode)m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getDrawingMode();
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getSymbolType();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSimpleLine3DSymbol::toStream(stream);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::clone();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::equal(pSymbol);
					}
					virtual ev_bool similar(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol) const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::similar(pSymbol);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CSimpleLine3DSymbol::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSimpleLine3DSymbol::fromStream(stream);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CSimpleLine3DSymbol::setImage(index, imageID, stream);
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontColor() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getFontColor();
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontOutlineColor() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getFontOutlineColor();
					}
					virtual void setFontOutlineColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback(color);
						}
						else
							return this->CSimpleLine3DSymbol::setFontOutlineColor(color);
					}
					virtual void setFontColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback(color);
						}
						else
							return this->CSimpleLine3DSymbol::setFontColor(color);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CSimpleLine3DSymbol::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback(color);
						}
						else
							return this->CSimpleLine3DSymbol::setColor(color);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::toSLD();
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CSimpleLine3DSymbol::fromSLD(sld);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSimpleLine3DSymbol::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CSimpleLine3DSymbolProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getTransectShapeType_EVTransectShapeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVTransectShapeType objXXXX = ptrNativeObject->getTransectShapeType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setTransectShapeType_void_EVTransectShapeType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setTransectShapeType((EarthView::World::Spatial::Display::EVTransectShapeType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getPropertyCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getPropertyCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getProperty_KeyValuePair_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::KeyValuePair& objXXXX = ptrNativeObject->getProperty(index);
					const EarthView::World::Spatial::Display::KeyValuePair *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setPropertyValue_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 index, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setPropertyValue(index, value1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getPropertyFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getPropertyFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getPropertyField_KeyValuePair_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::KeyValuePair& objXXXX = ptrNativeObject->getPropertyField(index);
					const EarthView::World::Spatial::Display::KeyValuePair *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setPropertyFieldValue_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 index, _in const char* value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setPropertyFieldValue(index, value1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getHeaderClosed_EVClosedShapeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVClosedShapeType objXXXX = ptrNativeObject->getHeaderClosed();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setHeaderClosed_void_EVClosedShapeType(void *pObjectXXXX, _in int closed )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setHeaderClosed((EarthView::World::Spatial::Display::EVClosedShapeType)closed);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getTailClosed_EVClosedShapeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVClosedShapeType objXXXX = ptrNativeObject->getTailClosed();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setTailClosed_void_EVClosedShapeType(void *pObjectXXXX, _in int closed )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setTailClosed((EarthView::World::Spatial::Display::EVClosedShapeType)closed);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFillColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getFillColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFillColor_ev_bool_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setFillColor(pColor);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getLineColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getLineColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setLineColor_ev_bool_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setLineColor(pColor);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::setDrawingMode((EarthView::World::Spatial::Display::EVSymbol3DDrawingMode)mode);
					else
						ptrNativeObject->setDrawingMode((EarthView::World::Spatial::Display::EVSymbol3DDrawingMode)mode);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setDrawingMode_void_EVSymbol3DDrawingMode_NoVirtual(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::setDrawingMode((EarthView::World::Spatial::Display::EVSymbol3DDrawingMode)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVSymbol3DDrawingMode objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::getDrawingMode();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVSymbol3DDrawingMode objXXXX = ptrNativeObject->getDrawingMode();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getDrawingMode_EVSymbol3DDrawingMode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVSymbol3DDrawingMode objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::getDrawingMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setNeedInterpolate_void_ev_bool(void *pObjectXXXX, _in ev_bool need )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setNeedInterpolate(need);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getNeedInterpolate_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNeedInterpolate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setCornerSmoothing_void_ev_bool(void *pObjectXXXX, _in ev_bool smooth )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setCornerSmoothing(smooth);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getCornerSmoothing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getCornerSmoothing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setInterpolateDistance_void_ev_real32(void *pObjectXXXX, _in ev_real32 dis )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setInterpolateDistance(dis);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getInterpolateDistance_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getInterpolateDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_OperatorAssign_CSimpleLine3DSymbol_CSimpleLine3DSymbol(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol& objXXXX = *((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)other;
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::similar(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->similar(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_similar_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::similar(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setLineLabel_void_ev_bool(void *pObjectXXXX, _in ev_bool lineLabel )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->setLineLabel(lineLabel);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getLineLabel_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLineLabel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					if (dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol* ptrNativeObject = (EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSimpleLine3DSymbol::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getFontOutlineColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontOutlineColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setFontColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString_Callback* pCallback )
				{
					CSimpleLine3DSymbolProxy* ptr = dynamic_cast<CSimpleLine3DSymbolProxy*>((EarthView::World::Spatial::Display::CSimpleLine3DSymbol*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSimpleLine3DSymbol_fromSLD_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
