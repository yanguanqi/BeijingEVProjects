/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/codec.h"
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
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CodecList_push_ev_bool_EVString_CCodec(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CCodec*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CodecList* ptrNativeObject = (EarthView::World::Graphic::CodecList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CodecList_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CodecList* ptrNativeObject = (EarthView::World::Graphic::CodecList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec*  _stdcall EarthView_World_Graphic_CodecList_OperatorIndex_CCodec_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CodecList& objYYYY = *(EarthView::World::Graphic::CodecList*) pObjXXXX;
				EarthView::World::Graphic::CCodec* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec*  _stdcall EarthView_World_Graphic_CodecList_get_CCodec_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CodecList* ptrNativeObject = (EarthView::World::Graphic::CodecList*) pObjectXXXX;
				EarthView::World::Graphic::CCodec* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CodecList_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CodecList* ptrNativeObject = (EarthView::World::Graphic::CodecList*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CodecList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CodecList* ptrNativeObject = (EarthView::World::Graphic::CodecList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CodecList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CodecList* ptrNativeObject = (EarthView::World::Graphic::CodecList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CodecList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CodecList* ptrNativeObject = (EarthView::World::Graphic::CodecList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback)(_inout void* input, _inout void* pData);
			typedef void  ( _stdcall EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback)(_inout void* input, _in char*& outFileName, _inout void* pData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback)(_inout void* input);
			typedef char*  ( _stdcall EarthView_World_Graphic_CCodec_getType_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CCodec_getDataType_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			typedef char*  ( _stdcall EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback)(_in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes);
			class CCodecProxy : public EarthView::World::Graphic::CCodec
			{
			private:
				EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* m_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback;
				EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* m_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback;
				EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback* m_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback;
				EarthView_World_Graphic_CCodec_getType_EVString_Callback* m_EarthView_World_Graphic_CCodec_getType_EVString_Callback;
				EarthView_World_Graphic_CCodec_getDataType_EVString_Callback* m_EarthView_World_Graphic_CCodec_getDataType_EVString_Callback;
				EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback;
				EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback;
			public:
				CCodecProxy(EarthView::World::Core::CNameValuePairList *pList) : CCodec(pList)
				{
					m_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CCodec_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCodec_getDataType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr(EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCodec_getType_EVString(EarthView_World_Graphic_CCodec_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCodec_getDataType_EVString(EarthView_World_Graphic_CCodec_getDataType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_getDataType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback = pCallback;
				}
				virtual EarthView::World::Core::DataStreamPtr code(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback(&input, &pData);
						return returnValue;
					}
					else
						return this->CCodec::code(input, pData);
				}
				virtual void codeToFile(_inout EarthView::World::Core::MemoryDataStreamPtr& input, _in const EVString& outFileName, _inout EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if(m_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback != NULL && this->isCustomExtend())
					{
						char* outFileName_Char = outFileName.makeBuffer();
						m_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback(&input, outFileName_Char, &pData);
					}
					else
						return this->CCodec::codeToFile(input, outFileName, pData);
				}
				virtual EarthView::World::Graphic::CCodec::DecodeResult decode(_inout EarthView::World::Core::DataStreamPtr& input) const
				{
					if(m_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCodec::DecodeResult returnValue = *(EarthView::World::Graphic::CCodec::DecodeResult*)m_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback(&input);
						return returnValue;
					}
					else
						return this->CCodec::decode(input);
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CCodec_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCodec_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCodec::getType();
				}
				virtual EVString getDataType() const
				{
					if(m_EarthView_World_Graphic_CCodec_getDataType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCodec_getDataType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCodec::getDataType();
				}
				virtual ev_bool magicNumberMatch(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CCodec::magicNumberMatch(magicNumberPtr, maxbytes);
				}
				virtual EVString magicNumberToFileExt(_in const ev_char* magicNumberPtr, _in ev_size_t maxbytes) const
				{
					if(m_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback(magicNumberPtr, maxbytes);
						return returnValue;
					}
					else
						return this->CCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				}
			};
			REGISTER_FACTORY_CLASS(CCodecProxy);
			typedef char*  ( _stdcall EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback)();
			class CCodecDataProxy : public EarthView::World::Graphic::CCodec::CCodecData
			{
			private:
				EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback* m_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback;
			public:
				CCodecDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CCodecData(pList)
				{
					m_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString(EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback = pCallback;
				}
				virtual EVString dataType() const
				{
					if(m_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCodecData::dataType();
				}
			};
			REGISTER_FACTORY_CLASS(CCodecDataProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec::CCodecData* ptrNativeObject = (EarthView::World::Graphic::CCodec::CCodecData*) pObjectXXXX;
				if (dynamic_cast<CCodecDataProxy*>((EarthView::World::Graphic::CCodec::CCodecData*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::CCodecData::dataType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->dataType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_Callback* pCallback )
			{
				CCodecDataProxy* ptr = dynamic_cast<CCodecDataProxy*>((EarthView::World::Graphic::CCodec::CCodecData*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_CCodecData_dataType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec::CCodecData* ptrNativeObject = (EarthView::World::Graphic::CCodec::CCodecData*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::CCodecData::dataType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec::CCodecData*  _stdcall EarthView_World_Graphic_CCodec_CodecDataPtr_get_CCodecData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec::CodecDataPtr* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecDataPtr*) pObjectXXXX;
				EarthView::World::Graphic::CCodec::CCodecData* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCodec_CCodecPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CCodecPair* ptrNativeObject = (EarthView::World::Graphic::CCodec::CCodecPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_CCodecPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCodec::CCodecPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec*  _stdcall Get_EarthView_World_Graphic_CCodec_CCodecPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CCodecPair* ptrNativeObject = (EarthView::World::Graphic::CCodec::CCodecPair*) pObjectXXXX;
				EarthView::World::Graphic::CCodec* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_CCodecPair_second( void *pObjectXXXX, EarthView::World::Graphic::CCodec*  value )
			{
				((EarthView::World::Graphic::CCodec::CCodecPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec*  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_nextValue_CCodec(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCodec* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec**  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_nextValuePtr_CCodec(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCodec** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec*  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_next_CCodec(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCodec* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_getBegin_CCodecPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CCodec::CCodecPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CCodec::CCodecPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_getEnd_CCodecPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CCodec::CCodecPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CCodec::CCodecPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CCodec_CodecIterator_getCurrent_CCodecPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::CodecIterator* ptrNativeObject = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CCodec::CCodecPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CCodec::CCodecPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCodec_NeedConversion( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->NeedConversion;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_NeedConversion( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCodec*)pObjectXXXX)->NeedConversion = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCodec_NeedDeCompress( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->NeedDeCompress;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_NeedDeCompress( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCodec*)pObjectXXXX)->NeedDeCompress = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCodec_IsEVG( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->IsEVG;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_IsEVG( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCodec*)pObjectXXXX)->IsEVG = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CCodec_DxtFormat( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->DxtFormat;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_DxtFormat( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CCodec*)pObjectXXXX)->DxtFormat = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCodec_HasMipMap( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->HasMipMap;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_HasMipMap( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCodec*)pObjectXXXX)->HasMipMap = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCodec_HasOneBitAlpha( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->HasOneBitAlpha;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_HasOneBitAlpha( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCodec*)pObjectXXXX)->HasOneBitAlpha = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCodec_registerCodec_void_CCodec(_in EarthView::World::Graphic::CCodec* ref_pCodec )
			{
				EarthView::World::Graphic::CCodec::registerCodec(ref_pCodec);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCodec_isCodecRegistered_ev_bool_EVString(_in const char* codecType )
			{
				EarthView::World::Core::ev_string codecType1 = codecType;
				ev_bool objXXXX = EarthView::World::Graphic::CCodec::isCodecRegistered(codecType1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCodec_unRegisterCodec_void_CCodec(_in EarthView::World::Graphic::CCodec* pCodec )
			{
				EarthView::World::Graphic::CCodec::unRegisterCodec(pCodec);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCodec_getCodecIterator_CodecIterator( )
			{
				EarthView::World::Graphic::CCodec::CodecIterator objXXXX = EarthView::World::Graphic::CCodec::getCodecIterator();
				EarthView::World::Graphic::CCodec::CodecIterator *pXXXX = new EarthView::World::Graphic::CCodec::CodecIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCodec_getExtensions_StringVector( )
			{
				EarthView::World::Core::StringVector objXXXX = EarthView::World::Graphic::CCodec::getExtensions();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec*  _stdcall EarthView_World_Graphic_CCodec_getCodec_CCodec_EVString(_in const char* extension )
			{
				EarthView::World::Core::ev_string extension1 = extension;
				EarthView::World::Graphic::CCodec* objXXXX = EarthView::World::Graphic::CCodec::getCodec(extension1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCodec*  _stdcall EarthView_World_Graphic_CCodec_getCodec_CCodec_ev_char_ev_size_t(_in ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				EarthView::World::Graphic::CCodec* objXXXX = EarthView::World::Graphic::CCodec::getCodec(magicNumberPtr, maxbytes);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				if (dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_Callback* pCallback )
			{
				CCodecProxy* ptr = dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCodec_code_DataStreamPtr_MemoryDataStreamPtr_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _inout void* pData )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::code(*(EarthView::World::Core::MemoryDataStreamPtr*)input, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				if (dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
				else
					ptrNativeObject->codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr( void *pObjectXXXX, EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_Callback* pCallback )
			{
				CCodecProxy* ptr = dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCodec_codeToFile_void_MemoryDataStreamPtr_EVString_CodecDataPtr_NoVirtual(void *pObjectXXXX, _inout void* input, _in const char* outFileName, _inout void* pData )
			{
				EarthView::World::Core::ev_string outFileName1 = outFileName;
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCodec::codeToFile(*(EarthView::World::Core::MemoryDataStreamPtr*)input, outFileName1, *(EarthView::World::Graphic::CCodec::CodecDataPtr*)pData);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCodec_DecodeResult_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::DecodeResult* ptrNativeObject = (EarthView::World::Graphic::CCodec::DecodeResult*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->first;
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_DecodeResult_first( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCodec::DecodeResult*)pObjectXXXX)->first = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCodec_DecodeResult_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCodec::DecodeResult* ptrNativeObject = (EarthView::World::Graphic::CCodec::DecodeResult*) pObjectXXXX;
				EarthView::World::Graphic::CCodec::CodecDataPtr &objXXXX = ptrNativeObject->second;
				EarthView::World::Graphic::CCodec::CodecDataPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCodec_DecodeResult_second( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCodec::DecodeResult*)pObjectXXXX)->second = *(EarthView::World::Graphic::CCodec::CodecDataPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				if (dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_Callback* pCallback )
			{
				CCodecProxy* ptr = dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCodec_decode_DecodeResult_DataStreamPtr_NoVirtual(void *pObjectXXXX, _inout void* input )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				EarthView::World::Graphic::CCodec::DecodeResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::decode(*(EarthView::World::Core::DataStreamPtr*)input);
				EarthView::World::Graphic::CCodec::DecodeResult *pXXXX = new EarthView::World::Graphic::CCodec::DecodeResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				if (dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCodec_getType_EVString_Callback* pCallback )
			{
				CCodecProxy* ptr = dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_getDataType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				if (dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::getDataType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDataType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_getDataType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCodec_getDataType_EVString_Callback* pCallback )
			{
				CCodecProxy* ptr = dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_getDataType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_getDataType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::getDataType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				if (dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::magicNumberMatch(magicNumberPtr, maxbytes);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->magicNumberMatch(magicNumberPtr, maxbytes);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_Callback* pCallback )
			{
				CCodecProxy* ptr = dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCodec_magicNumberMatch_ev_bool_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::magicNumberMatch(magicNumberPtr, maxbytes);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				if (dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->magicNumberToFileExt(magicNumberPtr, maxbytes);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_Callback* pCallback )
			{
				CCodecProxy* ptr = dynamic_cast<CCodecProxy*>((EarthView::World::Graphic::CCodec*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCodec_magicNumberToFileExt_EVString_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_char* magicNumberPtr, _in ev_uint64  maxbytes )
			{
				const EarthView::World::Graphic::CCodec* ptrNativeObject = (EarthView::World::Graphic::CCodec*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				return objXXXX.makeBuffer();
			}
		}
	}
}
