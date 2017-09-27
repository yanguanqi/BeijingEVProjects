/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pixelformat.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PixelFormatList_push_back_void_PixelFormat(void *pObjectXXXX, _in int& t )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ptrNativeObject->push_back((EarthView::World::Graphic::PixelFormat&)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PixelFormatList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_PixelFormatList_front_PixelFormat(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat& objXXXX = ptrNativeObject->front();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_PixelFormatList_back_PixelFormat(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat& objXXXX = ptrNativeObject->back();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PixelFormatList_insert_void_ev_uint32_PixelFormat(void *pObjectXXXX, _in ev_uint32 pos, _in int& t )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ptrNativeObject->insert(pos, (EarthView::World::Graphic::PixelFormat&)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PixelFormatList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_PixelFormatList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_PixelFormatList_OperatorIndex_PixelFormat_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::PixelFormatList& objYYYY = *(EarthView::World::Graphic::PixelFormatList*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat& objXXXX = objYYYY[n];
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_PixelFormatList_at_PixelFormat_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat& objXXXX = ptrNativeObject->at(n);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_PixelFormatList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PixelFormatList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PixelFormatList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_PixelFormatList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::PixelFormatList* ptrNativeObject = (EarthView::World::Graphic::PixelFormatList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CPixelBox_data( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->data;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPixelBox_data( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CPixelBox*)pObjectXXXX)->data = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CPixelBox_format( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->format;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPixelBox_format( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CPixelBox*)pObjectXXXX)->format = (EarthView::World::Graphic::PixelFormat)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CPixelBox_rowPitch( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->rowPitch;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPixelBox_rowPitch( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CPixelBox*)pObjectXXXX)->rowPitch = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CPixelBox_slicePitch( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->slicePitch;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CPixelBox_slicePitch( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CPixelBox*)pObjectXXXX)->slicePitch = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelBox_setConsecutive_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ptrNativeObject->setConsecutive();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPixelBox_getRowSkip_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getRowSkip();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPixelBox_getSliceSkip_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getSliceSkip();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelBox_isConsecutive_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isConsecutive();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPixelBox_getConsecutiveSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getConsecutiveSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPixelBox_getSubVolume_CPixelBox_Box(void *pObjectXXXX, _in const void* def )
			{
				const EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				EarthView::World::Graphic::CPixelBox objXXXX = ptrNativeObject->getSubVolume(*(EarthView::World::Graphic::Box*)def);
				EarthView::World::Graphic::CPixelBox *pXXXX = new EarthView::World::Graphic::CPixelBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPixelBox_getColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  x, _in ev_uint64  y, _in ev_uint64  z )
			{
				EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getColourAt(x, y, z);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelBox_setColourAt_void_CColourValue_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in void* cv, _in ev_uint64  x, _in ev_uint64  y, _in ev_uint64  z )
			{
				EarthView::World::Graphic::CPixelBox* ptrNativeObject = (EarthView::World::Graphic::CPixelBox*) pObjectXXXX;
				ptrNativeObject->setColourAt(*(EarthView::World::Graphic::CColourValue*)cv, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPixelUtil_getNumElemBytes_ev_size_t_PixelFormat(_in int format )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CPixelUtil::getNumElemBytes((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPixelUtil_getNumElemBits_ev_size_t_PixelFormat(_in int format )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CPixelUtil::getNumElemBits((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPixelUtil_getMemorySize_ev_size_t_ev_size_t_ev_size_t_ev_size_t_PixelFormat(_in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  depth, _in int format )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CPixelUtil::getMemorySize(width, height, depth, (EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CPixelUtil_getFlags_ev_uint32_PixelFormat(_in int format )
			{
				ev_uint32 objXXXX = EarthView::World::Graphic::CPixelUtil::getFlags((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_hasAlpha_ev_bool_PixelFormat(_in int format )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::hasAlpha((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_isFloatingPoint_ev_bool_PixelFormat(_in int format )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::isFloatingPoint((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_isCompressed_ev_bool_PixelFormat(_in int format )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::isCompressed((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_isDepth_ev_bool_PixelFormat(_in int format )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::isDepth((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_isNativeEndian_ev_bool_PixelFormat(_in int format )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::isNativeEndian((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_isLuminance_ev_bool_PixelFormat(_in int format )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::isLuminance((EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_isValidExtent_ev_bool_ev_size_t_ev_size_t_ev_size_t_PixelFormat(_in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  depth, _in int format )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::isValidExtent(width, height, depth, (EarthView::World::Graphic::PixelFormat)format);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_getBitDepths_void_PixelFormat_ev_int32(_in int format, _in ev_int32* rgba )
			{
				EarthView::World::Graphic::CPixelUtil::getBitDepths((EarthView::World::Graphic::PixelFormat)format, rgba);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_getBitMasks_void_PixelFormat_ev_uint32(_in int format, _in ev_uint32* rgba )
			{
				EarthView::World::Graphic::CPixelUtil::getBitMasks((EarthView::World::Graphic::PixelFormat)format, rgba);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_getBitShifts_void_PixelFormat_ev_uchar(_in int format, _in ev_uchar* rgba )
			{
				EarthView::World::Graphic::CPixelUtil::getBitShifts((EarthView::World::Graphic::PixelFormat)format, rgba);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPixelUtil_getFormatName_EVString_PixelFormat(_in int srcformat )
			{
				EVString objXXXX = EarthView::World::Graphic::CPixelUtil::getFormatName((EarthView::World::Graphic::PixelFormat)srcformat);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPixelUtil_isAccessible_ev_bool_PixelFormat(_in int srcformat )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPixelUtil::isAccessible((EarthView::World::Graphic::PixelFormat)srcformat);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPixelUtil_getComponentType_PixelComponentType_PixelFormat(_in int fmt )
			{
				EarthView::World::Graphic::PixelComponentType objXXXX = EarthView::World::Graphic::CPixelUtil::getComponentType((EarthView::World::Graphic::PixelFormat)fmt);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPixelUtil_getComponentCount_ev_size_t_PixelFormat(_in int fmt )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CPixelUtil::getComponentCount((EarthView::World::Graphic::PixelFormat)fmt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString(_in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::PixelFormat objXXXX = EarthView::World::Graphic::CPixelUtil::getFormatFromName(name1);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString_ev_bool(_in const char* name, _in ev_bool accessibleOnly )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::PixelFormat objXXXX = EarthView::World::Graphic::CPixelUtil::getFormatFromName(name1, accessibleOnly);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPixelUtil_getFormatFromName_PixelFormat_EVString_ev_bool_ev_bool(_in const char* name, _in ev_bool accessibleOnly, _in ev_bool caseSensitive )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::PixelFormat objXXXX = EarthView::World::Graphic::CPixelUtil::getFormatFromName(name1, accessibleOnly, caseSensitive);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPixelUtil_getBNFExpressionOfPixelFormats_EVString( )
			{
				EVString objXXXX = EarthView::World::Graphic::CPixelUtil::getBNFExpressionOfPixelFormats();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPixelUtil_getBNFExpressionOfPixelFormats_EVString_ev_bool(_in ev_bool accessibleOnly )
			{
				EVString objXXXX = EarthView::World::Graphic::CPixelUtil::getBNFExpressionOfPixelFormats(accessibleOnly);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPixelUtil_getFormatForBitDepths_PixelFormat_PixelFormat_ev_uint16_ev_uint16(_inout int fmt, _in ev_uint16 integerBits, _in ev_uint16 floatBits )
			{
				EarthView::World::Graphic::PixelFormat objXXXX = EarthView::World::Graphic::CPixelUtil::getFormatForBitDepths((EarthView::World::Graphic::PixelFormat)fmt, integerBits, floatBits);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_packColour_void_CColourValue_PixelFormat_void(_in const void* colour, _in const int pf, _in void* dest )
			{
				EarthView::World::Graphic::CPixelUtil::packColour(*(EarthView::World::Graphic::CColourValue*)colour, (EarthView::World::Graphic::PixelFormat)pf, dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_packColour_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(_in const ev_uint8 r, _in const ev_uint8 g, _in const ev_uint8 b, _in const ev_uint8 a, _in const int pf, _in void* dest )
			{
				EarthView::World::Graphic::CPixelUtil::packColour(r, g, b, a, (EarthView::World::Graphic::PixelFormat)pf, dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_packColour_void_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(_in const ev_real32 r, _in const ev_real32 g, _in const ev_real32 b, _in const ev_real32 a, _in const int pf, _in void* dest )
			{
				EarthView::World::Graphic::CPixelUtil::packColour(r, g, b, a, (EarthView::World::Graphic::PixelFormat)pf, dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_unpackColour_void_CColourValue_PixelFormat_void(_out void* colour, _in int pf, _in const void* src )
			{
				EarthView::World::Graphic::CPixelUtil::unpackColour(*(EarthView::World::Graphic::CColourValue*)colour, (EarthView::World::Graphic::PixelFormat)pf, src);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_unpackColour_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(_out ev_uint8& r, _out ev_uint8& g, _out ev_uint8& b, _out ev_uint8& a, _in int pf, _in const void* src )
			{
				EarthView::World::Graphic::CPixelUtil::unpackColour(r, g, b, a, (EarthView::World::Graphic::PixelFormat)pf, src);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_unpackColour_void_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(_out ev_real32& r, _out ev_real32& g, _out ev_real32& b, _out ev_real32& a, _in int pf, _in const void* src )
			{
				EarthView::World::Graphic::CPixelUtil::unpackColour(r, g, b, a, (EarthView::World::Graphic::PixelFormat)pf, src);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_bulkPixelConversion_void_void_PixelFormat_void_PixelFormat_ev_uint32(_in void* src, _in int srcFormat, _in void* dest, _in int dstFormat, _in ev_uint32 count )
			{
				EarthView::World::Graphic::CPixelUtil::bulkPixelConversion(src, (EarthView::World::Graphic::PixelFormat)srcFormat, dest, (EarthView::World::Graphic::PixelFormat)dstFormat, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPixelUtil_bulkPixelConversion_void_CPixelBox_CPixelBox(_in const void* src, _in const void* dst )
			{
				EarthView::World::Graphic::CPixelUtil::bulkPixelConversion(*(EarthView::World::Graphic::CPixelBox*)src, *(EarthView::World::Graphic::CPixelBox*)dst);
			}
		}
	}
}
