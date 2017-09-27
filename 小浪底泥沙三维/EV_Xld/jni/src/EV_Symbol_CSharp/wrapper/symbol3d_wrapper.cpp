/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symbol3d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextureInfo_equal_ev_bool_CTextureInfo(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->equal(*(EarthView::World::Spatial::Display::CTextureInfo*)rhs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextureInfo_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextureInfo_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CTextureInfo_getDirty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDirty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CTextureInfo_setDirty_void_ev_bool(void *pObjectXXXX, _in ev_bool dirty )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ptrNativeObject->setDirty(dirty);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_TextureID( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->TextureID;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_TextureID( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->TextureID = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_MinX( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->MinX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_MinX( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->MinX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_MaxX( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->MaxX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_MaxX( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->MaxX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_MinY( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->MinY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_MinY( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->MinY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_MaxY( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->MaxY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_MaxY( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->MaxY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_UnitSizeX( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->UnitSizeX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_UnitSizeX( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->UnitSizeX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_UnitSizeY( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->UnitSizeY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_UnitSizeY( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->UnitSizeY = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_TAM( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVTextureAddressMode objXXXX = ptrNativeObject->TAM;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_TAM( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->TAM = (EarthView::World::Spatial::Display::EVTextureAddressMode)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_TextureStream( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->TextureStream;
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_TextureStream( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->TextureStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Display_CTextureInfo_PicTransparency( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CTextureInfo* ptrNativeObject = (EarthView::World::Spatial::Display::CTextureInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->PicTransparency;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Display_CTextureInfo_PicTransparency( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Display::CTextureInfo*)pObjectXXXX)->PicTransparency = value;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback)();
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback)();
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback)(_in ev_uint32 index, _in char*& imageID, _in void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback)(_in char*& szName);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback)(_inout char*& sld);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CSymbol3DProxy : public EarthView::World::Spatial::Display::CSymbol3D
				{
				private:
					EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback;
					EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback;
				public:
					CSymbol3DProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbol3D(pList)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol(EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor(EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor(EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor(EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor(EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64(EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor(EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream(EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString(EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol(EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor(EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor(EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32(EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool(EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32(EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32(EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32(EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol(EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString(EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString(EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString(EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_int32 getSymbolType() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getSymbolType();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSymbol3D::toStream(stream);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::clone();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CSymbol3D::equal(pSymbol);
					}
					virtual ev_bool similar(_in const EarthView::World::Spatial::Display::ISymbol* pSymbol) const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback(pSymbol);
							return returnValue;
						}
						else
							return this->CSymbol3D::similar(pSymbol);
					}
					virtual ev_bool hasImage() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::hasImage();
					}
					virtual ev_uint32 getImageCount() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getImageCount();
					}
					virtual EVString getImageID(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSymbol3D::getImageID(index);
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSymbol3D::getImage(index);
					}
					virtual void setImage(_in ev_uint32 index, _in const EVString& imageID, _in EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* imageID_Char = imageID.makeBuffer();
							m_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback(index, imageID_Char, &stream);
						}
						else
							return this->CSymbol3D::setImage(index, imageID, stream);
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontColor() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getFontColor();
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontOutlineColor() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getFontOutlineColor();
					}
					virtual void setFontOutlineColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback(color);
						}
						else
							return this->CSymbol3D::setFontOutlineColor(color);
					}
					virtual void setFontColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback(color);
						}
						else
							return this->CSymbol3D::setFontColor(color);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::toXmlElement();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CSymbol3D::fromXmlElement(element);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSymbol3D::fromStream(stream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getName();
					}
					virtual void setName(_in const EVString& szName)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* szName_Char = szName.makeBuffer();
							m_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback(szName_Char);
						}
						else
							return this->CSymbol3D::setName(szName);
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getColor();
					}
					virtual void setColor(_in const EarthView::World::Spatial::Display::IColor* color)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback(color);
						}
						else
							return this->CSymbol3D::setColor(color);
					}
					virtual EVString toSLD() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::toSLD();
					}
					virtual void fromSLD(_inout EVString& sld)
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sld_Char = sld.makeBuffer();
							m_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback(sld_Char);
							sld = sld_Char;
							if(sld_Char != NULL){ delete[] sld_Char;sld_Char = NULL;}
						}
						else
							return this->CSymbol3D::fromSLD(sld);
					}
					virtual ev_real64 getSize() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getSize();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback();
							return returnValue;
						}
						else
							return this->CSymbol3D::getColorRef();
					}
				};
				REGISTER_FACTORY_CLASS(CSymbol3DProxy);
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getHightenValue_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getHightenValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setHightenValue_void_ev_real32(void *pObjectXXXX, _in ev_real32 h )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setHightenValue(h);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getHightenField_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getHightenField();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setHightenField_void_EVString(void *pObjectXXXX, _in const char* hf )
				{
					EarthView::World::Core::ev_string hf1 = hf;
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setHightenField(hf1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getAltitudeMode_EVAltitudeMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getAltitudeMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setAltitudeMode_void_EVAltitudeMode(void *pObjectXXXX, _in int m )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)m);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getSymbolType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSymbolType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getSymbolType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getSymbolType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_clone_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::equal(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_equal_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::equal(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::similar(pSymbol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->similar(pSymbol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_similar_ev_bool_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::similar(pSymbol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::hasImage();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasImage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_hasImage_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::hasImage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getImageCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getImageCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImageCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getImageCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getImageID(index);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getImageID(index);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImageID_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getImageID(index);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getImage(index);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getImage_MemoryDataStreamPtr_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getImage(index);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in ev_uint32 index, _in const char* imageID, _in void* stream )
				{
					EarthView::World::Core::ev_string imageID1 = imageID;
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
					else
						ptrNativeObject->setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setImage_void_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in const char* imageID, _in void* stream )
				{
					EarthView::World::Core::ev_string imageID1 = imageID;
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::setImage(index, imageID1, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getPropertyName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getPropertyName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setPropertyName_void_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setPropertyName(fieldName1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getFontName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontName_void_EVString(void *pObjectXXXX, _in const char* fontName )
				{
					EarthView::World::Core::ev_string fontName1 = fontName;
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setFontName(fontName1);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontSize_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getFontSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontSize_void_ev_real32(void *pObjectXXXX, _in ev_real32 fontSize )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setFontSize(fontSize);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getFontColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getFontColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getFontColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getFontOutlineColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getFontOutlineColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getFontOutlineColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::getFontOutlineColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::setFontOutlineColor(color);
					else
						ptrNativeObject->setFontOutlineColor(color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontOutlineColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::setFontOutlineColor(color);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::setFontColor(color);
					else
						ptrNativeObject->setFontColor(color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setFontColor_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::setFontColor(color);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getTextRightToLeft_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getTextRightToLeft();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setTextRightToLeft_void_ev_bool(void *pObjectXXXX, _in ev_bool r2l )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setTextRightToLeft(r2l);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getTextOffsetX_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getTextOffsetX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setTextOffsetX_void_ev_real32(void *pObjectXXXX, _in ev_real32 x )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setTextOffsetX(x);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getTextOffsetY_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getTextOffsetY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setTextOffsetY_void_ev_real32(void *pObjectXXXX, _in ev_real32 y )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setTextOffsetY(y);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getTextAngle_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getTextAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setTextAngle_void_ev_real32(void *pObjectXXXX, _in ev_real32 angle )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setTextAngle(angle);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getTextHAlignment_EVTextHorizontalAlignment(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Core::EVTextHorizontalAlignment objXXXX = ptrNativeObject->getTextHAlignment();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setTextHAlignment_void_EVTextHorizontalAlignment(void *pObjectXXXX, _in int alignment )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setTextHAlignment((EarthView::World::Core::EVTextHorizontalAlignment)alignment);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getTextVAlignment_EVTextVerticalAlignment(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Core::EVTextVerticalAlignment objXXXX = ptrNativeObject->getTextVAlignment();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setTextVAlignment_void_EVTextVerticalAlignment(void *pObjectXXXX, _in int alignment )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setTextVAlignment((EarthView::World::Core::EVTextVerticalAlignment)alignment);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setBoldEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool isBold )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setBoldEnabled(isBold);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setItalicEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool isItalic )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setItalicEnabled(isItalic);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getBoldEnabled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getBoldEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getItalicEnabled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getItalicEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setAntiAliasEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool isAntiAlias )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setAntiAliasEnabled(isAntiAlias);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getAntiAliasEnabled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getAntiAliasEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getShowText_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getShowText();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setShowText_void_ev_bool(void *pObjectXXXX, _in ev_bool bShow )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setShowText(bShow);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_setTextShadowEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool hasShadow )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->setTextShadowEnabled(hasShadow);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbol3D_getTextShadowEnabled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getTextShadowEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSymbol3D_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					if (dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbol3D_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSymbol3D* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbol3D::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getSize_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getColorRef_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_toSLD_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_getName_EVString_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString_Callback* pCallback )
				{
					CSymbol3DProxy* ptr = dynamic_cast<CSymbol3DProxy*>((EarthView::World::Spatial::Display::CSymbol3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbol3D_fromSLD_void_EVString(pCallback);
					}
				}
			}
		}
	}
}
