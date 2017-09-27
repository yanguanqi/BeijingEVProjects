/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/imagecodec.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback)(_inout void* input, _inout void* pData);
			typedef void  ( _stdcall EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback)(_inout void* input, _in char*& outFileName, _inout void* pData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback)(_inout void* input);
			typedef char*  ( _stdcall EarthView_World_Graphic_CImageCodec_getType_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			typedef char*  ( _stdcall EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			class CImageCodecProxy : public EarthView::World::Graphic::CImageCodec
			{
			private:
				EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* m_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback;
				EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* m_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback;
				EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback* m_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback;
				EarthView_World_Graphic_CImageCodec_getType_EVString_Callback* m_EarthView_World_Graphic_CImageCodec_getType_EVString_Callback;
				EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback* m_EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback;
				EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback;
				EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback;
			public:
				CImageCodecProxy(EarthView::World::Core::CNameValuePairList *pList) : CImageCodec(pList)
				{
					m_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CImageCodec_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr(EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_getType_EVString(EarthView_World_Graphic_CImageCodec_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_getDataType_EVString(EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = pCallback;
				}
				virtual EVString getDataType() const
				{
					if(m_EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CImageCodec::getDataType();
				}
				virtual EarthView::World::Core::DataStreamPtr code(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback(&input, &pData);
						return returnValue;
					}
					else
						return this->CImageCodec::code(input, pData);
				}
				virtual void codeToFile(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _in const EVString& outFileName, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						char* outFileName_Char = outFileName.makeBuffer();
						m_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback(&input, outFileName_Char, &pData);
					}
					else
						return this->CImageCodec::codeToFile(input, outFileName, pData);
				}
				virtual EarthView::World::Graphic::CCodec::DecodeResult decode(_inout EarthView::World::Core::DataStreamPtr& input) const
				{
					if(m_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCodec::DecodeResult returnValue = *(EarthView::World::Graphic::CCodec::DecodeResult*)m_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback(&input);
						return returnValue;
					}
					else
						return this->CImageCodec::decode(input);
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CImageCodec_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CImageCodec_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CImageCodec::getType();
				}
				virtual ev_bool magicNumberMatch(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CImageCodec::magicNumberMatch(magicNumberPtr, maxbytes);
				}
				virtual EVString magicNumberToFileExt(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CImageCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				}
			};
			REGISTER_FACTORY_CLASS(CImageCodecProxy);
			typedef char*  ( _stdcall EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback)();
			class CImageDataProxy : public EarthView::World::Graphic::CImageCodec::CImageData
			{
			private:
				EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback* m_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback;
			public:
				CImageDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CImageData(pList)
				{
					m_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString(EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback = pCallback;
				}
				virtual EVString dataType() const
				{
					if(m_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CImageData::dataType();
				}
			};
			REGISTER_FACTORY_CLASS(CImageDataProxy);
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CImageCodec_CImageData_height( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->height;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImageCodec_CImageData_height( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CImageCodec::CImageData*)pObjectXXXX)->height = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CImageCodec_CImageData_width( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->width;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImageCodec_CImageData_width( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CImageCodec::CImageData*)pObjectXXXX)->width = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CImageCodec_CImageData_depth( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->depth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImageCodec_CImageData_depth( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CImageCodec::CImageData*)pObjectXXXX)->depth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CImageCodec_CImageData_size( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImageCodec_CImageData_size( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CImageCodec::CImageData*)pObjectXXXX)->size = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CImageCodec_CImageData_num_mipmaps( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->num_mipmaps;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImageCodec_CImageData_num_mipmaps( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CImageCodec::CImageData*)pObjectXXXX)->num_mipmaps = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CImageCodec_CImageData_flags( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->flags;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImageCodec_CImageData_flags( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CImageCodec::CImageData*)pObjectXXXX)->flags = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CImageCodec_CImageData_format( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->format;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CImageCodec_CImageData_format( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CImageCodec::CImageData*)pObjectXXXX)->format = (EarthView::World::Graphic::PixelFormat)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				if (dynamic_cast<CImageDataProxy*>((EarthView::World::Graphic::CImageCodec::CImageData*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CImageCodec::CImageData::dataType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->dataType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_Callback* pCallback )
			{
				CImageDataProxy* ptr = dynamic_cast<CImageDataProxy*>((EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CImageCodec_CImageData_dataType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImageCodec::CImageData* ptrNativeObject = (EarthView::World::Graphic::CImageCodec::CImageData*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CImageCodec::CImageData::dataType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CImageCodec_getDataType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImageCodec* ptrNativeObject = (EarthView::World::Graphic::CImageCodec*) pObjectXXXX;
				if (dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CImageCodec::getDataType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDataType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_getDataType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_getDataType_EVString_Callback* pCallback )
			{
				CImageCodecProxy* ptr = dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_getDataType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CImageCodec_getDataType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CImageCodec* ptrNativeObject = (EarthView::World::Graphic::CImageCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CImageCodec::getDataType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback )
			{
				CImageCodecProxy* ptr = dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback )
			{
				CImageCodecProxy* ptr = dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback )
			{
				CImageCodecProxy* ptr = dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_decode_DecodeResult_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_getType_EVString_Callback* pCallback )
			{
				CImageCodecProxy* ptr = dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback )
			{
				CImageCodecProxy* ptr = dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback )
			{
				CImageCodecProxy* ptr = dynamic_cast<CImageCodecProxy*>((EarthView::World::Graphic::CImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(pCallback);
				}
			}
		}
	}
}
