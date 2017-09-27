/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/image.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CImage_NeedConversion( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->NeedConversion;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImage_NeedConversion( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CImage*)pObjectXXXX)->NeedConversion = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CImage_NeedDeCompress( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->NeedDeCompress;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImage_NeedDeCompress( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CImage*)pObjectXXXX)->NeedDeCompress = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CImage_DxtFormat( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->DxtFormat;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImage_DxtFormat( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CImage*)pObjectXXXX)->DxtFormat = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CImage_HasMipMap( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->HasMipMap;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImage_HasMipMap( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CImage*)pObjectXXXX)->HasMipMap = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CImage_HasOneBitAlpha( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->HasOneBitAlpha;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImage_HasOneBitAlpha( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CImage*)pObjectXXXX)->HasOneBitAlpha = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_OperatorAssign_CImage_CImage(void *pObjXXXX, _in const void* img )
			{
				EarthView::World::Graphic::CImage& objXXXX = *((EarthView::World::Graphic::CImage*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CImage*)img;
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_flipAroundY_CImage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->flipAroundY();
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_flipAroundX_CImage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->flipAroundX();
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadDynamicImage_CImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uchar* pData, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in ev_uint64  depth, _in int eFormat, _in ev_bool autoDelete, _in ev_uint64  numFaces, _in ev_uint64  numMipMaps )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadDynamicImage(pData, uWidth, uHeight, depth, (EarthView::World::Graphic::PixelFormat)eFormat, autoDelete, numFaces, numMipMaps);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadDynamicImage_CImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool_ev_size_t(void *pObjectXXXX, _in ev_uchar* pData, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in ev_uint64  depth, _in int eFormat, _in ev_bool autoDelete, _in ev_uint64  numFaces )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadDynamicImage(pData, uWidth, uHeight, depth, (EarthView::World::Graphic::PixelFormat)eFormat, autoDelete, numFaces);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadDynamicImage_CImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_bool(void *pObjectXXXX, _in ev_uchar* pData, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in ev_uint64  depth, _in int eFormat, _in ev_bool autoDelete )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadDynamicImage(pData, uWidth, uHeight, depth, (EarthView::World::Graphic::PixelFormat)eFormat, autoDelete);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadDynamicImage_CImage_ev_uchar_ev_size_t_ev_size_t_ev_size_t_PixelFormat(void *pObjectXXXX, _in ev_uchar* pData, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in ev_uint64  depth, _in int eFormat )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadDynamicImage(pData, uWidth, uHeight, depth, (EarthView::World::Graphic::PixelFormat)eFormat);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadDynamicImage_CImage_ev_uchar_ev_size_t_ev_size_t_PixelFormat(void *pObjectXXXX, _in ev_uchar* pData, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in int eFormat )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadDynamicImage(pData, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)eFormat);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadRawData_CImage_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* stream, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in ev_uint64  uDepth, _in int eFormat, _in ev_uint64  numFaces, _in ev_uint64  numMipMaps )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadRawData(*(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, uDepth, (EarthView::World::Graphic::PixelFormat)eFormat, numFaces, numMipMaps);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadRawData_CImage_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat_ev_size_t(void *pObjectXXXX, _inout void* stream, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in ev_uint64  uDepth, _in int eFormat, _in ev_uint64  numFaces )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadRawData(*(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, uDepth, (EarthView::World::Graphic::PixelFormat)eFormat, numFaces);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadRawData_CImage_DataStreamPtr_ev_size_t_ev_size_t_ev_size_t_PixelFormat(void *pObjectXXXX, _inout void* stream, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in ev_uint64  uDepth, _in int eFormat )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadRawData(*(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, uDepth, (EarthView::World::Graphic::PixelFormat)eFormat);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadRawData_CImage_DataStreamPtr_ev_size_t_ev_size_t_PixelFormat(void *pObjectXXXX, _inout void* stream, _in ev_uint64  uWidth, _in ev_uint64  uHeight, _in int eFormat )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadRawData(*(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)eFormat);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_load_CImage_EVString_EVString(void *pObjectXXXX, _in const char* strFileName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->load(strFileName1, groupName1);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_load_CImage_DataStreamPtr_EVString(void *pObjectXXXX, _inout void* stream, _in const char* type )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->load(*(EarthView::World::Core::DataStreamPtr*)stream, type1);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_load_CImage_DataStreamPtr(void *pObjectXXXX, _inout void* stream )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->load(*(EarthView::World::Core::DataStreamPtr*)stream);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_load_CImage_DataStreamPtr_EVString_ev_bool(void *pObjectXXXX, _inout void* stream, _in const char* type, _in ev_bool ignoreMipmap )
			{
				EarthView::World::Core::ev_string type1 = type;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->load(*(EarthView::World::Core::DataStreamPtr*)stream, type1, ignoreMipmap);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadTwoImagesAsRGBA_CImage_EVString_EVString_EVString_PixelFormat(void *pObjectXXXX, _in const char* rgbFilename, _in const char* alphaFilename, _in const char* groupName, _in int format )
			{
				EarthView::World::Core::ev_string rgbFilename1 = rgbFilename;
				EarthView::World::Core::ev_string alphaFilename1 = alphaFilename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadTwoImagesAsRGBA(rgbFilename1, alphaFilename1, groupName1, (EarthView::World::Graphic::PixelFormat)format);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadTwoImagesAsRGBA_CImage_EVString_EVString_EVString(void *pObjectXXXX, _in const char* rgbFilename, _in const char* alphaFilename, _in const char* groupName )
			{
				EarthView::World::Core::ev_string rgbFilename1 = rgbFilename;
				EarthView::World::Core::ev_string alphaFilename1 = alphaFilename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadTwoImagesAsRGBA(rgbFilename1, alphaFilename1, groupName1);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadTwoImagesAsRGBA_CImage_DataStreamPtr_DataStreamPtr_PixelFormat_EVString_EVString(void *pObjectXXXX, _inout void* rgbStream, _inout void* alphaStream, _in int fmt, _in const char* rgbType, _in const char* alphaType )
			{
				EarthView::World::Core::ev_string rgbType1 = rgbType;
				EarthView::World::Core::ev_string alphaType1 = alphaType;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadTwoImagesAsRGBA(*(EarthView::World::Core::DataStreamPtr*)rgbStream, *(EarthView::World::Core::DataStreamPtr*)alphaStream, (EarthView::World::Graphic::PixelFormat)fmt, rgbType1, alphaType1);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadTwoImagesAsRGBA_CImage_DataStreamPtr_DataStreamPtr_PixelFormat(void *pObjectXXXX, _inout void* rgbStream, _inout void* alphaStream, _in int fmt )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadTwoImagesAsRGBA(*(EarthView::World::Core::DataStreamPtr*)rgbStream, *(EarthView::World::Core::DataStreamPtr*)alphaStream, (EarthView::World::Graphic::PixelFormat)fmt);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadTwoImagesAsRGBA_CImage_DataStreamPtr_DataStreamPtr_PixelFormat_EVString(void *pObjectXXXX, _inout void* rgbStream, _inout void* alphaStream, _in int fmt, _in const char* rgbType )
			{
				EarthView::World::Core::ev_string rgbType1 = rgbType;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadTwoImagesAsRGBA(*(EarthView::World::Core::DataStreamPtr*)rgbStream, *(EarthView::World::Core::DataStreamPtr*)alphaStream, (EarthView::World::Graphic::PixelFormat)fmt, rgbType1);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_loadTwoImagesAsRGBA_CImage_DataStreamPtr_DataStreamPtr(void *pObjectXXXX, _inout void* rgbStream, _inout void* alphaStream )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->loadTwoImagesAsRGBA(*(EarthView::World::Core::DataStreamPtr*)rgbStream, *(EarthView::World::Core::DataStreamPtr*)alphaStream);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_combineTwoImagesAsRGBA_CImage_CImage_CImage_PixelFormat(void *pObjectXXXX, _in const void* rgb, _in const void* alpha, _in int format )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->combineTwoImagesAsRGBA(*(EarthView::World::Graphic::CImage*)rgb, *(EarthView::World::Graphic::CImage*)alpha, (EarthView::World::Graphic::PixelFormat)format);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_combineTwoImagesAsRGBA_CImage_CImage_CImage(void *pObjectXXXX, _in const void* rgb, _in const void* alpha )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CImage& objXXXX = ptrNativeObject->combineTwoImagesAsRGBA(*(EarthView::World::Graphic::CImage*)rgb, *(EarthView::World::Graphic::CImage*)alpha);
				EarthView::World::Graphic::CImage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_save_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ptrNativeObject->save(filename1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_encode_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* formatextension )
			{
				EarthView::World::Core::ev_string formatextension1 = formatextension;
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->encode(formatextension1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_toDDS_DataStreamPtr_DataStreamPtr(void *pObjectXXXX, _inout void* inputStream )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->toDDS(*(EarthView::World::Core::DataStreamPtr*)inputStream);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_toDDS2_DataStreamPtr_DataStreamPtr(void *pObjectXXXX, _inout void* inputStream )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->toDDS2(*(EarthView::World::Core::DataStreamPtr*)inputStream);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uchar*  _stdcall EarthView_World_Graphic_CImage_getData_ev_uchar(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_uchar* objXXXX = ptrNativeObject->getData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_getSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_getNumMipmaps_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumMipmaps();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CImage_hasFlag_ev_bool_ImageFlags(void *pObjectXXXX, _in const int imgFlag )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasFlag((EarthView::World::Graphic::ImageFlags)imgFlag);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_getWidth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_getHeight_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_getDepth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_getNumFaces_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumFaces();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_getRowSpan_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getRowSpan();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CImage_getFormat_PixelFormat(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->getFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uchar  _stdcall EarthView_World_Graphic_CImage_getBPP_ev_uchar(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_uchar objXXXX = ptrNativeObject->getBPP();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CImage_getHasAlpha_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getHasAlpha();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_applyGamma_void_ev_uchar_Real_ev_size_t_ev_uchar(_in ev_uchar* buffer, _in Real gamma, _in ev_uint64  size, _in ev_uchar bpp )
			{
				EarthView::World::Graphic::CImage::applyGamma(buffer, gamma, size, bpp);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_getColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  x, _in ev_uint64  y, _in ev_uint64  z )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getColourAt(x, y, z);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_setColourAt_void_CColourValue_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in void* cv, _in ev_uint64  x, _in ev_uint64  y, _in ev_uint64  z )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ptrNativeObject->setColourAt(*(EarthView::World::Graphic::CColourValue*)cv, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_getPixelBox_CPixelBox_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  face, _in ev_uint64  mipmap )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CPixelBox objXXXX = ptrNativeObject->getPixelBox(face, mipmap);
				EarthView::World::Graphic::CPixelBox *pXXXX = new EarthView::World::Graphic::CPixelBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_getPixelBox_CPixelBox_ev_size_t(void *pObjectXXXX, _in ev_uint64  face )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CPixelBox objXXXX = ptrNativeObject->getPixelBox(face);
				EarthView::World::Graphic::CPixelBox *pXXXX = new EarthView::World::Graphic::CPixelBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CImage_getPixelBox_CPixelBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				EarthView::World::Graphic::CPixelBox objXXXX = ptrNativeObject->getPixelBox();
				EarthView::World::Graphic::CPixelBox *pXXXX = new EarthView::World::Graphic::CPixelBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_freeMemory_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ptrNativeObject->freeMemory();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_scale_void_CPixelBox_CPixelBox_Filter(_in const void* src, _in const void* dst, _in int filter )
			{
				EarthView::World::Graphic::CImage::scale(*(EarthView::World::Graphic::CPixelBox*)src, *(EarthView::World::Graphic::CPixelBox*)dst, (EarthView::World::Graphic::CImage::Filter)filter);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_scale_void_CPixelBox_CPixelBox(_in const void* src, _in const void* dst )
			{
				EarthView::World::Graphic::CImage::scale(*(EarthView::World::Graphic::CPixelBox*)src, *(EarthView::World::Graphic::CPixelBox*)dst);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_resize_void_ev_uint16_ev_uint16_Filter(void *pObjectXXXX, _in ev_uint16 width, _in ev_uint16 height, _in int filter )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ptrNativeObject->resize(width, height, (EarthView::World::Graphic::CImage::Filter)filter);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CImage_resize_void_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 width, _in ev_uint16 height )
			{
				EarthView::World::Graphic::CImage* ptrNativeObject = (EarthView::World::Graphic::CImage*) pObjectXXXX;
				ptrNativeObject->resize(width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CImage_calculateSize_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_PixelFormat(_in ev_uint64  mipmaps, _in ev_uint64  faces, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  depth, _in int format )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CImage::calculateSize(mipmaps, faces, width, height, depth, (EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CImage_getFileExtFromMagic_EVString_DataStreamPtr(_in void* stream )
			{
				EVString objXXXX = EarthView::World::Graphic::CImage::getFileExtFromMagic(*(EarthView::World::Core::DataStreamPtr*)stream);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ImagePtrList_push_back_void_CImage(void *pObjectXXXX, _in EarthView::World::Graphic::CImage*& ref_t )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ImagePtrList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ImagePtrList_front_CImage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				EarthView::World::Graphic::CImage* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ImagePtrList_back_CImage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				EarthView::World::Graphic::CImage* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ImagePtrList_insert_void_ev_uint32_CImage(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CImage*& ref_t )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ImagePtrList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ImagePtrList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ImagePtrList_OperatorIndex_CImage_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ImagePtrList& objYYYY = *(EarthView::World::Graphic::ImagePtrList*) pObjXXXX;
				EarthView::World::Graphic::CImage* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ImagePtrList_at_CImage_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				EarthView::World::Graphic::CImage* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ImagePtrList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ImagePtrList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ImagePtrList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ImagePtrList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ImagePtrList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstImagePtrList_push_back_void_CImage(void *pObjectXXXX, _in const EarthView::World::Graphic::CImage*& ref_t )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstImagePtrList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ConstImagePtrList_front_CImage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				const EarthView::World::Graphic::CImage* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ConstImagePtrList_back_CImage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				const EarthView::World::Graphic::CImage* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstImagePtrList_insert_void_ev_uint32_CImage(void *pObjectXXXX, _in ev_uint32 pos, _in const EarthView::World::Graphic::CImage*& ref_t )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstImagePtrList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ConstImagePtrList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ConstImagePtrList_OperatorIndex_CImage_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ConstImagePtrList& objYYYY = *(EarthView::World::Graphic::ConstImagePtrList*) pObjXXXX;
				const EarthView::World::Graphic::CImage* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CImage*  _stdcall EarthView_World_Graphic_ConstImagePtrList_at_CImage_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				const EarthView::World::Graphic::CImage* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ConstImagePtrList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstImagePtrList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstImagePtrList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ConstImagePtrList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ConstImagePtrList* ptrNativeObject = (EarthView::World::Graphic::ConstImagePtrList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
