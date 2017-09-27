/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/freeimagecodec.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback)(_inout void* input, _inout void* pData);
			typedef void  ( _stdcall EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback)(_inout void* input, _in char*& outFileName, _inout void* pData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback)(_inout void* input);
			typedef char*  ( _stdcall EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			typedef char*  ( _stdcall EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			class CFreeImageCodecProxy : public EarthView::World::Graphic::CFreeImageCodec
			{
			private:
				EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* m_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback;
				EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* m_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback;
				EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback* m_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback;
				EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback* m_EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback;
				EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback* m_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback;
				EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback;
				EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback;
			public:
				CFreeImageCodecProxy(EarthView::World::Core::CNameValuePairList *pList) : CFreeImageCodec(pList)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr(EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFreeImageCodec_getType_EVString(EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString(EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = pCallback;
				}
				virtual EarthView::World::Core::DataStreamPtr code(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback(&input, &pData);
						return returnValue;
					}
					else
						return this->CFreeImageCodec::code(input, pData);
				}
				virtual void codeToFile(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _in const EVString& outFileName, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						char* outFileName_Char = outFileName.makeBuffer();
						m_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback(&input, outFileName_Char, &pData);
					}
					else
						return this->CFreeImageCodec::codeToFile(input, outFileName, pData);
				}
				virtual EarthView::World::Graphic::CCodec::DecodeResult decode(_inout EarthView::World::Core::DataStreamPtr& input) const
				{
					if(m_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCodec::DecodeResult returnValue = *(EarthView::World::Graphic::CCodec::DecodeResult*)m_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback(&input);
						return returnValue;
					}
					else
						return this->CFreeImageCodec::decode(input);
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFreeImageCodec::getType();
				}
				virtual EVString magicNumberToFileExt(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CFreeImageCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				}
				virtual EVString getDataType() const
				{
					if(m_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFreeImageCodec::getDataType();
				}
				virtual ev_bool magicNumberMatch(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CFreeImageCodec::magicNumberMatch(magicNumberPtr, maxbytes);
				}
			};
			REGISTER_FACTORY_CLASS(CFreeImageCodecProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				if (dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback )
			{
				CFreeImageCodecProxy* ptr = dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFreeImageCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				if (dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				else
					ptrNativeObject->codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback )
			{
				CFreeImageCodecProxy* ptr = dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFreeImageCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				if (dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback )
			{
				CFreeImageCodecProxy* ptr = dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFreeImageCodec_decode_DecodeResult_DataStreamPtr_NoVirtual(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
				EarthView::World::Graphic::CCodec::DecodeResult *pXXXX = new EarthView::World::Graphic::CCodec::DecodeResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFreeImageCodec_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				if (dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFreeImageCodec_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFreeImageCodec_getType_EVString_Callback* pCallback )
			{
				CFreeImageCodecProxy* ptr = dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFreeImageCodec_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFreeImageCodec_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				if (dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback )
			{
				CFreeImageCodecProxy* ptr = dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFreeImageCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CFreeImageCodec* ptrNativeObject = (EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFreeImageCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFreeImageCodec_startup_void( )
			{
				EarthView::World::Graphic::CFreeImageCodec::startup();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFreeImageCodec_shutdown_void( )
			{
				EarthView::World::Graphic::CFreeImageCodec::shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString_Callback* pCallback )
			{
				CFreeImageCodecProxy* ptr = dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFreeImageCodec_getDataType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback )
			{
				CFreeImageCodecProxy* ptr = dynamic_cast<CFreeImageCodecProxy*>((EarthView::World::Graphic::CFreeImageCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFreeImageCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(pCallback);
				}
			}
		}
	}
}
