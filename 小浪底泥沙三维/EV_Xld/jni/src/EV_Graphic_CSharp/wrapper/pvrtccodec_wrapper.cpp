/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pvrtccodec.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback)(_inout void* input, _inout void* pData);
			typedef void  ( _stdcall EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback)(_inout void* input, _in char*& outFileName, _inout void* pData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback)(_inout void* input);
			typedef char*  ( _stdcall EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			typedef char*  ( _stdcall EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			class CPVRTCCodecProxy : public EarthView::World::Graphic::CPVRTCCodec
			{
			private:
				EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* m_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback;
				EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* m_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback;
				EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback* m_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback;
				EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback* m_EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback;
				EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback* m_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback;
				EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback;
				EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback;
			public:
				CPVRTCCodecProxy(EarthView::World::Core::CNameValuePairList *pList) : CPVRTCCodec(pList)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr(EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPVRTCCodec_getType_EVString(EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString(EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = pCallback;
				}
				virtual EarthView::World::Core::DataStreamPtr code(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback(&input, &pData);
						return returnValue;
					}
					else
						return this->CPVRTCCodec::code(input, pData);
				}
				virtual void codeToFile(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _in const EVString& outFileName, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						char* outFileName_Char = outFileName.makeBuffer();
						m_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback(&input, outFileName_Char, &pData);
					}
					else
						return this->CPVRTCCodec::codeToFile(input, outFileName, pData);
				}
				virtual EarthView::World::Graphic::CCodec::DecodeResult decode(_inout EarthView::World::Core::DataStreamPtr& input) const
				{
					if(m_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCodec::DecodeResult returnValue = *(EarthView::World::Graphic::CCodec::DecodeResult*)m_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback(&input);
						return returnValue;
					}
					else
						return this->CPVRTCCodec::decode(input);
				}
				virtual EVString magicNumberToFileExt(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CPVRTCCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPVRTCCodec::getType();
				}
				virtual EVString getDataType() const
				{
					if(m_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPVRTCCodec::getDataType();
				}
				virtual ev_bool magicNumberMatch(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CPVRTCCodec::magicNumberMatch(magicNumberPtr, maxbytes);
				}
			};
			REGISTER_FACTORY_CLASS(CPVRTCCodecProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				if (dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback )
			{
				CPVRTCCodecProxy* ptr = dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPVRTCCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				if (dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				else
					ptrNativeObject->codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback )
			{
				CPVRTCCodecProxy* ptr = dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPVRTCCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				if (dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback )
			{
				CPVRTCCodecProxy* ptr = dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPVRTCCodec_decode_DecodeResult_DataStreamPtr_NoVirtual(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
				EarthView::World::Graphic::CCodec::DecodeResult *pXXXX = new EarthView::World::Graphic::CCodec::DecodeResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				if (dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback )
			{
				CPVRTCCodecProxy* ptr = dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPVRTCCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPVRTCCodec_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				if (dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPVRTCCodec_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPVRTCCodec_getType_EVString_Callback* pCallback )
			{
				CPVRTCCodecProxy* ptr = dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPVRTCCodec_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPVRTCCodec_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPVRTCCodec* ptrNativeObject = (EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CPVRTCCodec::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPVRTCCodec_startup_void( )
			{
				EarthView::World::Graphic::CPVRTCCodec::startup();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPVRTCCodec_shutdown_void( )
			{
				EarthView::World::Graphic::CPVRTCCodec::shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString_Callback* pCallback )
			{
				CPVRTCCodecProxy* ptr = dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPVRTCCodec_getDataType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback )
			{
				CPVRTCCodecProxy* ptr = dynamic_cast<CPVRTCCodecProxy*>((EarthView::World::Graphic::CPVRTCCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPVRTCCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(pCallback);
				}
			}
		}
	}
}
