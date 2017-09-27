/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/ddscodec.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback)(_inout void* input, _inout void* pData);
			typedef void  ( _stdcall EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback)(_inout void* input, _in char*& outFileName, _inout void* pData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback)(_inout void* input);
			typedef char*  ( _stdcall EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			typedef char*  ( _stdcall EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			class CDDSCodecProxy : public EarthView::World::Graphic::CDDSCodec
			{
			private:
				EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* m_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback;
				EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* m_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback;
				EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback* m_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback;
				EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback* m_EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback;
				EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback* m_EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback;
				EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback;
				EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback;
			public:
				CDDSCodecProxy(EarthView::World::Core::CNameValuePairList *pList) : CDDSCodec(pList)
				{
					m_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr(EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDDSCodec_getType_EVString(EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDDSCodec_getDataType_EVString(EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = pCallback;
				}
				virtual EarthView::World::Core::DataStreamPtr code(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback(&input, &pData);
						return returnValue;
					}
					else
						return this->CDDSCodec::code(input, pData);
				}
				virtual void codeToFile(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _in const EVString& outFileName, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						char* outFileName_Char = outFileName.makeBuffer();
						m_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback(&input, outFileName_Char, &pData);
					}
					else
						return this->CDDSCodec::codeToFile(input, outFileName, pData);
				}
				virtual EarthView::World::Graphic::CCodec::DecodeResult decode(_inout EarthView::World::Core::DataStreamPtr& input) const
				{
					if(m_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCodec::DecodeResult returnValue = *(EarthView::World::Graphic::CCodec::DecodeResult*)m_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback(&input);
						return returnValue;
					}
					else
						return this->CDDSCodec::decode(input);
				}
				virtual EVString magicNumberToFileExt(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CDDSCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDDSCodec::getType();
				}
				virtual EVString getDataType() const
				{
					if(m_EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDDSCodec::getDataType();
				}
				virtual ev_bool magicNumberMatch(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CDDSCodec::magicNumberMatch(magicNumberPtr, maxbytes);
				}
			};
			REGISTER_FACTORY_CLASS(CDDSCodecProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				if (dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback )
			{
				CDDSCodecProxy* ptr = dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDDSCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				if (dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDDSCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				else
					ptrNativeObject->codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback )
			{
				CDDSCodecProxy* ptr = dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDDSCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDDSCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				if (dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
					EarthView::World::Graphic::CCodec::DecodeResult *pXXXX = new EarthView::World::Graphic::CCodec::DecodeResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->decode(*(EarthView::World::Core::DataStreamPtr*)input);
					EarthView::World::Graphic::CCodec::DecodeResult *pXXXX = new EarthView::World::Graphic::CCodec::DecodeResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback )
			{
				CDDSCodecProxy* ptr = dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_NoVirtual(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
				EarthView::World::Graphic::CCodec::DecodeResult *pXXXX = new EarthView::World::Graphic::CCodec::DecodeResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDDSCodec_decode_DecodeResult_DataStreamPtr_ev_bool(void *pObjectXXXX, _inout void* input, _in ev_bool ignoreMipmap )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->decode(*(EarthView::World::Core::DataStreamPtr*)input, ignoreMipmap);
				EarthView::World::Graphic::CCodec::DecodeResult *pXXXX = new EarthView::World::Graphic::CCodec::DecodeResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				if (dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback )
			{
				CDDSCodecProxy* ptr = dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDDSCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDDSCodec_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				if (dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDDSCodec_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDDSCodec_getType_EVString_Callback* pCallback )
			{
				CDDSCodecProxy* ptr = dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDDSCodec_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDDSCodec_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDDSCodec::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDDSCodec_startup_void( )
			{
				EarthView::World::Graphic::CDDSCodec::startup();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDDSCodec_shutdown_void( )
			{
				EarthView::World::Graphic::CDDSCodec::shutdown();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDDSCodec_encodeImage_DataStreamPtr_MemoryDataStreamPtr_ev_int32_CImageData(void *pObjectXXXX, _inout void* input, _in ev_int32 dxtFormat, _inout void* imgData )
			{
				EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->encodeImage(*(EarthView::World::Core::MemoryDataStreamPtr*)input, dxtFormat, *(EarthView::World::Graphic::CImageCodec::CImageData*)imgData);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDDSCodec_resizeDDS_DataStreamPtr_DataStreamPtr_ev_uint32_ev_uint32(void *pObjectXXXX, _inout void* stream, _in ev_uint32 newW, _in ev_uint32 newH )
			{
				const EarthView::World::Graphic::CDDSCodec* ptrNativeObject = (EarthView::World::Graphic::CDDSCodec*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->resizeDDS(*(EarthView::World::Core::DataStreamPtr*)stream, newW, newH);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDDSCodec_getDataType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDDSCodec_getDataType_EVString_Callback* pCallback )
			{
				CDDSCodecProxy* ptr = dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDDSCodec_getDataType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback )
			{
				CDDSCodecProxy* ptr = dynamic_cast<CDDSCodecProxy*>((EarthView::World::Graphic::CDDSCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDDSCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(pCallback);
				}
			}
		}
	}
}
