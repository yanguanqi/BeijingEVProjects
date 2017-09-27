/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/datastream.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback)(_in void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback)(_in ev_char* buf, _in ev_uint64  maxCount, _in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback)(_in ev_char* buf, _in ev_uint64  maxCount);
			typedef char*  ( _stdcall EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback)(_in ev_bool trimAfter);
			typedef char*  ( _stdcall EarthView_World_Core_CDataStream_getLine_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CDataStream_getAsString_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback)(_in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback)(_in ev_int32 count);
			typedef void  ( _stdcall EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback)(_in ev_uint64  pos);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDataStream_tell_ev_size_t_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDataStream_eof_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDataStream_close_void_Callback)();
			class CDataStreamProxy : public EarthView::World::Core::CDataStream
			{
			private:
				EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback* m_EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback;
				EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback* m_EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback;
				EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback;
				EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback;
				EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback* m_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback;
				EarthView_World_Core_CDataStream_getLine_EVString_Callback* m_EarthView_World_Core_CDataStream_getLine_EVString_Callback;
				EarthView_World_Core_CDataStream_getAsString_EVString_Callback* m_EarthView_World_Core_CDataStream_getAsString_EVString_Callback;
				EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback* m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback;
				EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback* m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback;
				EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback* m_EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback;
				EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback* m_EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback;
				EarthView_World_Core_CDataStream_tell_ev_size_t_Callback* m_EarthView_World_Core_CDataStream_tell_ev_size_t_Callback;
				EarthView_World_Core_CDataStream_eof_ev_bool_Callback* m_EarthView_World_Core_CDataStream_eof_ev_bool_Callback;
				EarthView_World_Core_CDataStream_close_void_Callback* m_EarthView_World_Core_CDataStream_close_void_Callback;
			public:
				CDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataStream(pList)
				{
					m_EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDataStream_getLine_EVString_Callback = NULL;
					m_EarthView_World_Core_CDataStream_getAsString_EVString_Callback = NULL;
					m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDataStream_tell_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDataStream_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDataStream_close_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CDataStream_isReadable_ev_bool(EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_isWriteable_ev_bool(EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t(EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t(EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t(EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool(EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_getLine_EVString(EarthView_World_Core_CDataStream_getLine_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_getLine_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_getAsString_EVString(EarthView_World_Core_CDataStream_getAsString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_getAsString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString(EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_skipLine_ev_size_t(EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_skip_void_ev_int32(EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_seek_void_ev_size_t(EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_tell_ev_size_t(EarthView_World_Core_CDataStream_tell_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_tell_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_eof_ev_bool(EarthView_World_Core_CDataStream_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDataStream_close_void(EarthView_World_Core_CDataStream_close_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDataStream_close_void_Callback = pCallback;
				}
				virtual ev_bool isReadable() const
				{
					if(m_EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDataStream::isReadable();
				}
				virtual ev_bool isWriteable() const
				{
					if(m_EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDataStream::isWriteable();
				}
				virtual ev_size_t read(_in void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CDataStream::read(buf, count);
				}
				virtual ev_size_t write(_in const void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CDataStream::write(buf, count);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount, _in const EVString& delim)
				{
					if(m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback(buf, maxCount, delim_Char);
						return returnValue;
					}
					else
						return this->CDataStream::readLine(buf, maxCount, delim);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount)
				{
					if(m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback(buf, maxCount);
						return returnValue;
					}
					else
						return this->CDataStream::readLine(buf, maxCount);
				}
				virtual EVString getLine(_in ev_bool trimAfter)
				{
					if(m_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback(trimAfter);
						return returnValue;
					}
					else
						return this->CDataStream::getLine(trimAfter);
				}
				virtual EVString getLine()
				{
					if(m_EarthView_World_Core_CDataStream_getLine_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CDataStream_getLine_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDataStream::getLine();
				}
				virtual EVString getAsString()
				{
					if(m_EarthView_World_Core_CDataStream_getAsString_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CDataStream_getAsString_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDataStream::getAsString();
				}
				virtual ev_size_t skipLine(_in const EVString& delim)
				{
					if(m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback(delim_Char);
						return returnValue;
					}
					else
						return this->CDataStream::skipLine(delim);
				}
				virtual ev_size_t skipLine()
				{
					if(m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDataStream::skipLine();
				}
				virtual void skip(_in ev_int32 count)
				{
					if(m_EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback(count);
					}
					else
						return this->CDataStream::skip(count);
				}
				virtual void seek(_in ev_size_t pos)
				{
					if(m_EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback(pos);
					}
					else
						return this->CDataStream::seek(pos);
				}
				virtual ev_size_t tell() const
				{
					if(m_EarthView_World_Core_CDataStream_tell_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CDataStream_tell_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDataStream::tell();
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Core_CDataStream_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDataStream_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDataStream::eof();
				}
				virtual void close()
				{
					if(m_EarthView_World_Core_CDataStream_close_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDataStream_close_void_Callback();
					}
					else
						return this->CDataStream::close();
				}
			};
			REGISTER_FACTORY_CLASS(CDataStreamProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Core_CDataStream_getName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDataStream_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Core_CDataStream_getAccessMode_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getAccessMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStream_isReadable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::isReadable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isReadable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_isReadable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDataStream_isReadable_ev_bool_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_isReadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStream_isReadable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::isReadable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStream_isWriteable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::isWriteable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isWriteable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_isWriteable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDataStream_isWriteable_ev_bool_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_isWriteable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStream_isWriteable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::isWriteable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::read(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->read(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_read_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::read(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::write(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->write(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_write_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::write(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::readLine(buf, maxCount, delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount, delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::readLine(buf, maxCount, delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::readLine(buf, maxCount);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_readLine_ev_size_t_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::readLine(buf, maxCount);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDataStream_getLine_EVString_ev_bool(void *pObjectXXXX, _in ev_bool trimAfter )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::getLine(trimAfter);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLine(trimAfter);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_getLine_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDataStream_getLine_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool trimAfter )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::getLine(trimAfter);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDataStream_getLine_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::getLine();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLine();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_getLine_EVString( void *pObjectXXXX, EarthView_World_Core_CDataStream_getLine_EVString_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_getLine_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDataStream_getLine_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::getLine();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDataStream_getAsString_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::getAsString();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getAsString();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_getAsString_EVString( void *pObjectXXXX, EarthView_World_Core_CDataStream_getAsString_EVString_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_getAsString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CDataStream_getAsString_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::getAsString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::skipLine(delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine(delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_skipLine_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::skipLine(delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_skipLine_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::skipLine();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_skipLine_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDataStream_skipLine_ev_size_t_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_skipLine_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_skipLine_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::skipLine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDataStream_skip_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDataStream::skip(count);
				else
					ptrNativeObject->skip(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_skip_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CDataStream_skip_void_ev_int32_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_skip_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDataStream_skip_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDataStream::skip(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDataStream_seek_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDataStream::seek(pos);
				else
					ptrNativeObject->seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_seek_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDataStream_seek_void_ev_size_t_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_seek_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDataStream_seek_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDataStream::seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_tell_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::tell();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->tell();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_tell_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDataStream_tell_ev_size_t_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_tell_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_tell_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::tell();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStream_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_eof_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDataStream_eof_ev_bool_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStream_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDataStream::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDataStream_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDataStream_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				if (dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDataStream::close();
				else
					ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDataStream_close_void( void *pObjectXXXX, EarthView_World_Core_CDataStream_close_void_Callback* pCallback )
			{
				CDataStreamProxy* ptr = dynamic_cast<CDataStreamProxy*>((EarthView::World::Core::CDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDataStream_close_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDataStream_close_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStream* ptrNativeObject = (EarthView::World::Core::CDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDataStream::close();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readBool_ev_int32_ev_bool(void *pObjectXXXX, _inout ev_bool& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readBool(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readChar_ev_int32_ev_char(void *pObjectXXXX, _inout ev_char& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readChar(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readUChar_ev_int32_ev_uchar(void *pObjectXXXX, _inout ev_uchar& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readUChar(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readWChar_ev_int32_ev_wchar(void *pObjectXXXX, _inout ev_wchar& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readWChar(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readByte_ev_int32_ev_byte(void *pObjectXXXX, _inout ev_byte& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readByte(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readInt8_ev_int32_ev_int8(void *pObjectXXXX, _inout ev_int8& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readInt8(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readUInt8_ev_int32_ev_uint8(void *pObjectXXXX, _inout ev_uint8& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readUInt8(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readInt16_ev_int32_ev_int16(void *pObjectXXXX, _inout ev_int16& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readInt16(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readUInt16_ev_int32_ev_uint16(void *pObjectXXXX, _inout ev_uint16& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readUInt16(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readInt32_ev_int32_ev_int32(void *pObjectXXXX, _inout ev_int32& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readInt32(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readUInt32_ev_int32_ev_uint32(void *pObjectXXXX, _inout ev_uint32& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readUInt32(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readInt64_ev_int32_ev_int64(void *pObjectXXXX, _inout ev_int64& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readInt64(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readUInt64_ev_int32_ev_uint64(void *pObjectXXXX, _inout ev_uint64& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readUInt64(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readReal32_ev_int32_ev_real32(void *pObjectXXXX, _inout ev_real32& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readReal32(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readReal64_ev_int32_ev_real64(void *pObjectXXXX, _inout ev_real64& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readReal64(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readObjectAddr_ev_int32_void(void *pObjectXXXX, _in void*& value )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readObjectAddr(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readString_ev_int32_EVString(void *pObjectXXXX, _inout char*& value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readString(value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readString_ev_int32_EVString_ev_int32(void *pObjectXXXX, _inout char*& value, _in ev_int32 length )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readString(value1, length);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamReader_readRaw_ev_int32_CMemoryDataStream_ev_int32(void *pObjectXXXX, _inout void* value, _in ev_int32 length )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->readRaw(*(EarthView::World::Core::CMemoryDataStream*)value, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStreamReader_eof_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CDataStreamReader_dataStream_CDataStream(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStreamReader* ptrNativeObject = (EarthView::World::Core::CDataStreamReader*) pObjectXXXX;
				EarthView::World::Core::CDataStream& objXXXX = ptrNativeObject->dataStream();
				EarthView::World::Core::CDataStream *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeBool_ev_int32_ev_bool(void *pObjectXXXX, _in ev_bool value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeBool(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeChar_ev_int32_ev_char(void *pObjectXXXX, _in ev_char value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeChar(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeUChar_ev_int32_ev_uchar(void *pObjectXXXX, _in ev_uchar value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeUChar(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeWChar_ev_int32_ev_wchar(void *pObjectXXXX, _in ev_wchar value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeWChar(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeByte_ev_int32_ev_byte(void *pObjectXXXX, _in ev_byte value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeByte(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeInt8_ev_int32_ev_int8(void *pObjectXXXX, _in ev_int8 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeInt8(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeUInt8_ev_int32_ev_uint8(void *pObjectXXXX, _in ev_uint8 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeUInt8(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeInt16_ev_int32_ev_int16(void *pObjectXXXX, _in ev_int16 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeInt16(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeUInt16_ev_int32_ev_uint16(void *pObjectXXXX, _in ev_uint16 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeUInt16(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeInt32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeInt32(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeUInt32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeUInt32(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeInt64_ev_int32_ev_int64(void *pObjectXXXX, _in ev_int64 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeInt64(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeUInt64_ev_int32_ev_uint64(void *pObjectXXXX, _in ev_uint64 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeUInt64(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeReal32_ev_int32_ev_real32(void *pObjectXXXX, _in ev_real32 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeReal32(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeReal64_ev_int32_ev_real64(void *pObjectXXXX, _in ev_real64 value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeReal64(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeObjectAddr_ev_int32_void(void *pObjectXXXX, _in void* value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeObjectAddr(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeString_ev_int32_EVString(void *pObjectXXXX, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeString(value1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeString_ev_int32_EVString_ev_int32(void *pObjectXXXX, _in const char* value, _in ev_int32 length )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeString(value1, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CDataStreamWriter_writeRaw_ev_int32_CMemoryDataStream(void *pObjectXXXX, _inout void* value )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->writeRaw(*(EarthView::World::Core::CMemoryDataStream*)value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDataStreamWriter_eof_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CDataStreamWriter_dataStream_CDataStream(void *pObjectXXXX )
			{
				EarthView::World::Core::CDataStreamWriter* ptrNativeObject = (EarthView::World::Core::CDataStreamWriter*) pObjectXXXX;
				EarthView::World::Core::CDataStream& objXXXX = ptrNativeObject->dataStream();
				EarthView::World::Core::CDataStream *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CDataStream*  _stdcall EarthView_World_Core_DataStreamPtr_get_CDataStream(void *pObjectXXXX )
			{
				const EarthView::World::Core::DataStreamPtr* ptrNativeObject = (EarthView::World::Core::DataStreamPtr*) pObjectXXXX;
				EarthView::World::Core::CDataStream* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_push_back_void_DataStreamPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Core::DataStreamPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_push_front_void_DataStreamPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Core::DataStreamPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_DataStreamList_front_DataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Core::DataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_DataStreamList_back_DataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Core::DataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_DataStreamList_at_DataStreamPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Core::DataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_insert_void_ev_uint32_DataStreamPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Core::DataStreamPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_DataStreamList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_DataStreamList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_DataStreamList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::DataStreamList* ptrNativeObject = (EarthView::World::Core::DataStreamList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::DataStreamList*  _stdcall EarthView_World_Core_DataStreamListPtr_get_DataStreamList(void *pObjectXXXX )
			{
				const EarthView::World::Core::DataStreamListPtr* ptrNativeObject = (EarthView::World::Core::DataStreamListPtr*) pObjectXXXX;
				EarthView::World::Core::DataStreamList* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback)(_in void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback)(_in ev_char* buf, _in ev_uint64  maxCount, _in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback)(_in ev_char* buf, _in ev_uint64  maxCount);
			typedef char*  ( _stdcall EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback)(_in ev_bool trimAfter);
			typedef char*  ( _stdcall EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback)(_in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback)(_in ev_int32 count);
			typedef void  ( _stdcall EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback)(_in ev_uint64  pos);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CMemoryDataStream_close_void_Callback)();
			class CMemoryDataStreamProxy : public EarthView::World::Core::CMemoryDataStream
			{
			private:
				EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback* m_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback;
				EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback* m_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback;
				EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback;
				EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback;
				EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback* m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback;
				EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback* m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback;
				EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback* m_EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback;
				EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback* m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback;
				EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback* m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback;
				EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback* m_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback;
				EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback* m_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback;
				EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback* m_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback;
				EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback* m_EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback;
				EarthView_World_Core_CMemoryDataStream_close_void_Callback* m_EarthView_World_Core_CMemoryDataStream_close_void_Callback;
			public:
				CMemoryDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CMemoryDataStream(pList)
				{
					m_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CMemoryDataStream_close_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool(EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool(EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t(EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t(EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t(EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool(EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_getLine_EVString(EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_getAsString_EVString(EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString(EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t(EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32(EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t(EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t(EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_eof_ev_bool(EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CMemoryDataStream_close_void(EarthView_World_Core_CMemoryDataStream_close_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CMemoryDataStream_close_void_Callback = pCallback;
				}
				virtual ev_size_t read(_in void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CMemoryDataStream::read(buf, count);
				}
				virtual ev_size_t write(_in const void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CMemoryDataStream::write(buf, count);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount, _in const EVString& delim)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback(buf, maxCount, delim_Char);
						return returnValue;
					}
					else
						return this->CMemoryDataStream::readLine(buf, maxCount, delim);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback(buf, maxCount);
						return returnValue;
					}
					else
						return this->CMemoryDataStream::readLine(buf, maxCount);
				}
				virtual ev_size_t skipLine(_in const EVString& delim)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback(delim_Char);
						return returnValue;
					}
					else
						return this->CMemoryDataStream::skipLine(delim);
				}
				virtual ev_size_t skipLine()
				{
					if(m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMemoryDataStream::skipLine();
				}
				virtual void skip(_in ev_int32 count)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback(count);
					}
					else
						return this->CMemoryDataStream::skip(count);
				}
				virtual void seek(_in ev_size_t pos)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback(pos);
					}
					else
						return this->CMemoryDataStream::seek(pos);
				}
				virtual ev_size_t tell() const
				{
					if(m_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMemoryDataStream::tell();
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMemoryDataStream::eof();
				}
				virtual void close()
				{
					if(m_EarthView_World_Core_CMemoryDataStream_close_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CMemoryDataStream_close_void_Callback();
					}
					else
						return this->CMemoryDataStream::close();
				}
				virtual ev_bool isReadable() const
				{
					if(m_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMemoryDataStream::isReadable();
				}
				virtual ev_bool isWriteable() const
				{
					if(m_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMemoryDataStream::isWriteable();
				}
				virtual EVString getLine(_in ev_bool trimAfter)
				{
					if(m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback(trimAfter);
						return returnValue;
					}
					else
						return this->CMemoryDataStream::getLine(trimAfter);
				}
				virtual EVString getLine()
				{
					if(m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMemoryDataStream::getLine();
				}
				virtual EVString getAsString()
				{
					if(m_EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMemoryDataStream::getAsString();
				}
			};
			REGISTER_FACTORY_CLASS(CMemoryDataStreamProxy);
			extern "C" EV_DLL_EXPORT  ev_uchar*  _stdcall EarthView_World_Core_CMemoryDataStream_getPtr_ev_uchar(void *pObjectXXXX )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_uchar* objXXXX = ptrNativeObject->getPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uchar*  _stdcall EarthView_World_Core_CMemoryDataStream_getCurrentPtr_ev_uchar(void *pObjectXXXX )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_uchar* objXXXX = ptrNativeObject->getCurrentPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::read(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->read(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_read_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::read(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::write(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->write(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_write_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::write(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount, delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount, delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount, delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_readLine_ev_size_t_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::readLine(buf, maxCount);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::skipLine(delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine(delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::skipLine(delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::skipLine();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_skipLine_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::skipLine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CMemoryDataStream::skip(count);
				else
					ptrNativeObject->skip(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMemoryDataStream_skip_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CMemoryDataStream::skip(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CMemoryDataStream::seek(pos);
				else
					ptrNativeObject->seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMemoryDataStream_seek_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CMemoryDataStream::seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_tell_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::tell();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->tell();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_tell_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CMemoryDataStream_tell_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::tell();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CMemoryDataStream_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_eof_ev_bool( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_eof_ev_bool_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CMemoryDataStream_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CMemoryDataStream::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMemoryDataStream_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				if (dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CMemoryDataStream::close();
				else
					ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_close_void( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_close_void_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_close_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMemoryDataStream_close_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CMemoryDataStream::close();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMemoryDataStream_setFreeOnClose_void_ev_bool(void *pObjectXXXX, _in ev_bool free )
			{
				EarthView::World::Core::CMemoryDataStream* ptrNativeObject = (EarthView::World::Core::CMemoryDataStream*) pObjectXXXX;
				ptrNativeObject->setFreeOnClose(free);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_isReadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_isWriteable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_getLine_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_getLine_EVString( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_getLine_EVString_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_getLine_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CMemoryDataStream_getAsString_EVString( void *pObjectXXXX, EarthView_World_Core_CMemoryDataStream_getAsString_EVString_Callback* pCallback )
			{
				CMemoryDataStreamProxy* ptr = dynamic_cast<CMemoryDataStreamProxy*>((EarthView::World::Core::CMemoryDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CMemoryDataStream_getAsString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CMemoryDataStream*  _stdcall EarthView_World_Core_MemoryDataStreamPtr_get_CMemoryDataStream(void *pObjectXXXX )
			{
				const EarthView::World::Core::MemoryDataStreamPtr* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamPtr*) pObjectXXXX;
				EarthView::World::Core::CMemoryDataStream* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_MemoryDataStreamPtr_OperatorConvertionDataStreamPtr_DataStreamPtr(void *pObjXXXX )
			{
				EarthView::World::Core::MemoryDataStreamPtr& objYYYY = *(EarthView::World::Core::MemoryDataStreamPtr*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = objYYYY ;
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback)(_in void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback)(_in ev_char* buf, _in ev_uint64  maxCount, _in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback)(_in ev_char* buf, _in ev_uint64  maxCount);
			typedef char*  ( _stdcall EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback)(_in ev_bool trimAfter);
			typedef char*  ( _stdcall EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback)(_in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback)(_in ev_int32 count);
			typedef void  ( _stdcall EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback)(_in ev_uint64  pos);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CFileStreamDataStream_close_void_Callback)();
			class CFileStreamDataStreamProxy : public EarthView::World::Core::CFileStreamDataStream
			{
			private:
				EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback* m_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback;
				EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback* m_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback;
				EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback;
				EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback;
				EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback* m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback;
				EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback* m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback;
				EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback* m_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback;
				EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback* m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback;
				EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback* m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback;
				EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback* m_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback;
				EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback* m_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback;
				EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback* m_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback;
				EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback* m_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback;
				EarthView_World_Core_CFileStreamDataStream_close_void_Callback* m_EarthView_World_Core_CFileStreamDataStream_close_void_Callback;
			public:
				CFileStreamDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CFileStreamDataStream(pList)
				{
					m_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileStreamDataStream_close_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool(EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool(EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t(EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t(EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t(EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool(EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_getLine_EVString(EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString(EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString(EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t(EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32(EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t(EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t(EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool(EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileStreamDataStream_close_void(EarthView_World_Core_CFileStreamDataStream_close_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileStreamDataStream_close_void_Callback = pCallback;
				}
				virtual ev_size_t read(_in void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::read(buf, count);
				}
				virtual ev_size_t write(_in const void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::write(buf, count);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount, _in const EVString& delim)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback(buf, maxCount, delim_Char);
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::readLine(buf, maxCount, delim);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback(buf, maxCount);
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::readLine(buf, maxCount);
				}
				virtual void skip(_in ev_int32 count)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback(count);
					}
					else
						return this->CFileStreamDataStream::skip(count);
				}
				virtual void seek(_in ev_size_t pos)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback(pos);
					}
					else
						return this->CFileStreamDataStream::seek(pos);
				}
				virtual ev_size_t tell() const
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::tell();
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::eof();
				}
				virtual void close()
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_close_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CFileStreamDataStream_close_void_Callback();
					}
					else
						return this->CFileStreamDataStream::close();
				}
				virtual ev_bool isReadable() const
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::isReadable();
				}
				virtual ev_bool isWriteable() const
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::isWriteable();
				}
				virtual EVString getLine(_in ev_bool trimAfter)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback(trimAfter);
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::getLine(trimAfter);
				}
				virtual EVString getLine()
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::getLine();
				}
				virtual EVString getAsString()
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::getAsString();
				}
				virtual ev_size_t skipLine(_in const EVString& delim)
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback(delim_Char);
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::skipLine(delim);
				}
				virtual ev_size_t skipLine()
				{
					if(m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CFileStreamDataStream::skipLine();
				}
			};
			REGISTER_FACTORY_CLASS(CFileStreamDataStreamProxy);
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::read(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->read(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_read_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::read(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::write(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->write(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_write_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::write(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount, delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount, delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount, delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_readLine_ev_size_t_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::readLine(buf, maxCount);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::skip(count);
				else
					ptrNativeObject->skip(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileStreamDataStream_skip_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::skip(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::seek(pos);
				else
					ptrNativeObject->seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileStreamDataStream_seek_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::tell();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->tell();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileStreamDataStream_tell_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::tell();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileStreamDataStream_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileStreamDataStream_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileStreamDataStream_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::close();
				else
					ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_close_void( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_close_void_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_close_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileStreamDataStream_close_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileStreamDataStream* ptrNativeObject = (EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CFileStreamDataStream::close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_isReadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_isWriteable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_getLine_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_getLine_EVString( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_getLine_EVString_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_getLine_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_getAsString_EVString_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_getAsString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t_Callback* pCallback )
			{
				CFileStreamDataStreamProxy* ptr = dynamic_cast<CFileStreamDataStreamProxy*>((EarthView::World::Core::CFileStreamDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileStreamDataStream_skipLine_ev_size_t(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback)(_in void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback)(_in ev_char* buf, _in ev_uint64  maxCount, _in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback)(_in ev_char* buf, _in ev_uint64  maxCount);
			typedef char*  ( _stdcall EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback)(_in ev_bool trimAfter);
			typedef char*  ( _stdcall EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback)(_in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback)(_in ev_int32 count);
			typedef void  ( _stdcall EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback)(_in ev_uint64  pos);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CBufferDataStream_close_void_Callback)();
			class CBufferDataStreamProxy : public EarthView::World::Core::CBufferDataStream
			{
			private:
				EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback* m_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback;
				EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback* m_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback;
				EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback;
				EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback;
				EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback* m_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback;
				EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback* m_EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback;
				EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback* m_EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback;
				EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback* m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback;
				EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback* m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback;
				EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback* m_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback;
				EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback* m_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback;
				EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback* m_EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback;
				EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback* m_EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback;
				EarthView_World_Core_CBufferDataStream_close_void_Callback* m_EarthView_World_Core_CBufferDataStream_close_void_Callback;
			public:
				CBufferDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CBufferDataStream(pList)
				{
					m_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CBufferDataStream_close_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool(EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool(EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t(EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t(EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t(EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool(EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_getLine_EVString(EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_getAsString_EVString(EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString(EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t(EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32(EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t(EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_tell_ev_size_t(EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_eof_ev_bool(EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBufferDataStream_close_void(EarthView_World_Core_CBufferDataStream_close_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CBufferDataStream_close_void_Callback = pCallback;
				}
				virtual ev_size_t read(_in void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CBufferDataStream::read(buf, count);
				}
				virtual ev_size_t write(_in const void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CBufferDataStream::write(buf, count);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount, _in const EVString& delim)
				{
					if(m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback(buf, maxCount, delim_Char);
						return returnValue;
					}
					else
						return this->CBufferDataStream::readLine(buf, maxCount, delim);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount)
				{
					if(m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback(buf, maxCount);
						return returnValue;
					}
					else
						return this->CBufferDataStream::readLine(buf, maxCount);
				}
				virtual EVString getLine(_in ev_bool trimAfter)
				{
					if(m_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback(trimAfter);
						return returnValue;
					}
					else
						return this->CBufferDataStream::getLine(trimAfter);
				}
				virtual EVString getLine()
				{
					if(m_EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBufferDataStream::getLine();
				}
				virtual EVString getAsString()
				{
					if(m_EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBufferDataStream::getAsString();
				}
				virtual ev_size_t skipLine(_in const EVString& delim)
				{
					if(m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback(delim_Char);
						return returnValue;
					}
					else
						return this->CBufferDataStream::skipLine(delim);
				}
				virtual ev_size_t skipLine()
				{
					if(m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CBufferDataStream::skipLine();
				}
				virtual void skip(_in ev_int32 count)
				{
					if(m_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback(count);
					}
					else
						return this->CBufferDataStream::skip(count);
				}
				virtual void seek(_in ev_size_t pos)
				{
					if(m_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback(pos);
					}
					else
						return this->CBufferDataStream::seek(pos);
				}
				virtual ev_size_t tell() const
				{
					if(m_EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CBufferDataStream::tell();
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBufferDataStream::eof();
				}
				virtual void close()
				{
					if(m_EarthView_World_Core_CBufferDataStream_close_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CBufferDataStream_close_void_Callback();
					}
					else
						return this->CBufferDataStream::close();
				}
				virtual ev_bool isReadable() const
				{
					if(m_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBufferDataStream::isReadable();
				}
				virtual ev_bool isWriteable() const
				{
					if(m_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CBufferDataStream::isWriteable();
				}
			};
			REGISTER_FACTORY_CLASS(CBufferDataStreamProxy);
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::read(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->read(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_read_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::read(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::write(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->write(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_write_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::write(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount, delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount, delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount, delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_readLine_ev_size_t_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::readLine(buf, maxCount);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool(void *pObjectXXXX, _in ev_bool trimAfter )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::getLine(trimAfter);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLine(trimAfter);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBufferDataStream_getLine_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool trimAfter )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::getLine(trimAfter);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBufferDataStream_getLine_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::getLine();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLine();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_getLine_EVString( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_getLine_EVString_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_getLine_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBufferDataStream_getLine_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::getLine();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBufferDataStream_getAsString_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::getAsString();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getAsString();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_getAsString_EVString( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_getAsString_EVString_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_getAsString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBufferDataStream_getAsString_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::getAsString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::skipLine(delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine(delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::skipLine(delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::skipLine();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_skipLine_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::skipLine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBufferDataStream_skip_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CBufferDataStream::skip(count);
				else
					ptrNativeObject->skip(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_skip_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBufferDataStream_skip_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CBufferDataStream::skip(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CBufferDataStream::seek(pos);
				else
					ptrNativeObject->seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBufferDataStream_seek_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CBufferDataStream::seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_tell_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::tell();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->tell();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_tell_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_tell_ev_size_t_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_tell_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CBufferDataStream_tell_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::tell();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CBufferDataStream_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_eof_ev_bool( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_eof_ev_bool_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CBufferDataStream_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CBufferDataStream::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBufferDataStream_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				if (dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CBufferDataStream::close();
				else
					ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_close_void( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_close_void_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_close_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBufferDataStream_close_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CBufferDataStream* ptrNativeObject = (EarthView::World::Core::CBufferDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CBufferDataStream::close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_isReadable_ev_bool_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_isReadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool_Callback* pCallback )
			{
				CBufferDataStreamProxy* ptr = dynamic_cast<CBufferDataStreamProxy*>((EarthView::World::Core::CBufferDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBufferDataStream_isWriteable_ev_bool(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback)(_in void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback)(_in ev_char* buf, _in ev_uint64  maxCount, _in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback)(_in ev_char* buf, _in ev_uint64  maxCount);
			typedef char*  ( _stdcall EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback)(_in ev_bool trimAfter);
			typedef char*  ( _stdcall EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback)(_in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback)(_in ev_int32 count);
			typedef void  ( _stdcall EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback)(_in ev_uint64  pos);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CFileHandleDataStream_close_void_Callback)();
			class CFileHandleDataStreamProxy : public EarthView::World::Core::CFileHandleDataStream
			{
			private:
				EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback* m_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback;
				EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback* m_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback;
				EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback;
				EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback;
				EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback* m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback;
				EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback* m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback;
				EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback* m_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback;
				EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback* m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback;
				EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback* m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback;
				EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback* m_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback;
				EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback* m_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback;
				EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback* m_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback;
				EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback* m_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback;
				EarthView_World_Core_CFileHandleDataStream_close_void_Callback* m_EarthView_World_Core_CFileHandleDataStream_close_void_Callback;
			public:
				CFileHandleDataStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CFileHandleDataStream(pList)
				{
					m_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CFileHandleDataStream_close_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool(EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool(EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t(EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t(EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t(EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool(EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_getLine_EVString(EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString(EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString(EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t(EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32(EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t(EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t(EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool(EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CFileHandleDataStream_close_void(EarthView_World_Core_CFileHandleDataStream_close_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CFileHandleDataStream_close_void_Callback = pCallback;
				}
				virtual ev_size_t read(_in void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::read(buf, count);
				}
				virtual ev_size_t write(_in const void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::write(buf, count);
				}
				virtual void skip(_in ev_int32 count)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback(count);
					}
					else
						return this->CFileHandleDataStream::skip(count);
				}
				virtual void seek(_in ev_size_t pos)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback(pos);
					}
					else
						return this->CFileHandleDataStream::seek(pos);
				}
				virtual ev_size_t tell() const
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::tell();
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::eof();
				}
				virtual void close()
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_close_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CFileHandleDataStream_close_void_Callback();
					}
					else
						return this->CFileHandleDataStream::close();
				}
				virtual ev_bool isReadable() const
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::isReadable();
				}
				virtual ev_bool isWriteable() const
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::isWriteable();
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount, _in const EVString& delim)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback(buf, maxCount, delim_Char);
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::readLine(buf, maxCount, delim);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback(buf, maxCount);
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::readLine(buf, maxCount);
				}
				virtual EVString getLine(_in ev_bool trimAfter)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback(trimAfter);
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::getLine(trimAfter);
				}
				virtual EVString getLine()
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::getLine();
				}
				virtual EVString getAsString()
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::getAsString();
				}
				virtual ev_size_t skipLine(_in const EVString& delim)
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback(delim_Char);
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::skipLine(delim);
				}
				virtual ev_size_t skipLine()
				{
					if(m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CFileHandleDataStream::skipLine();
				}
			};
			REGISTER_FACTORY_CLASS(CFileHandleDataStreamProxy);
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::read(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->read(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileHandleDataStream_read_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::read(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::write(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->write(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileHandleDataStream_write_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::write(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::skip(count);
				else
					ptrNativeObject->skip(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileHandleDataStream_skip_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::skip(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::seek(pos);
				else
					ptrNativeObject->seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileHandleDataStream_seek_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::tell();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->tell();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CFileHandleDataStream_tell_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::tell();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileHandleDataStream_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFileHandleDataStream_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileHandleDataStream_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				if (dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::close();
				else
					ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_close_void( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_close_void_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_close_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFileHandleDataStream_close_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CFileHandleDataStream* ptrNativeObject = (EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CFileHandleDataStream::close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_isReadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_isWriteable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_readLine_ev_size_t_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_getLine_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_getLine_EVString( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_getLine_EVString_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_getLine_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_getAsString_EVString_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_getAsString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t_Callback* pCallback )
			{
				CFileHandleDataStreamProxy* ptr = dynamic_cast<CFileHandleDataStreamProxy*>((EarthView::World::Core::CFileHandleDataStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CFileHandleDataStream_skipLine_ev_size_t(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback)();
			typedef const ev_char*  ( _stdcall EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback)(_in void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback)(_in ev_char* buf, _in ev_uint64  maxCount, _in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback)(_in ev_char* buf, _in ev_uint64  maxCount);
			typedef char*  ( _stdcall EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback)(_in ev_bool trimAfter);
			typedef char*  ( _stdcall EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback)(_in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback)(_in ev_int32 count);
			typedef void  ( _stdcall EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback)(_in ev_uint64  pos);
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CSqlBlobStream_close_void_Callback)();
			class CSqlBlobStreamProxy : public EarthView::World::Core::CSqlBlobStream
			{
			private:
				EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback* m_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback;
				EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback* m_EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback;
				EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback* m_EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback;
				EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback* m_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback;
				EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback* m_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback;
				EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback;
				EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback;
				EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback* m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback;
				EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback* m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback;
				EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback* m_EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback;
				EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback* m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback;
				EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback* m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback;
				EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback* m_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback;
				EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback* m_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback;
				EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback* m_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback;
				EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback* m_EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback;
				EarthView_World_Core_CSqlBlobStream_close_void_Callback* m_EarthView_World_Core_CSqlBlobStream_close_void_Callback;
			public:
				CSqlBlobStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlBlobStream(pList)
				{
					m_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CSqlBlobStream_close_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr(EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_DriverName_EVString(EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_data_ev_char(EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool(EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool(EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t(EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t(EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t(EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool(EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_getLine_EVString(EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_getAsString_EVString(EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString(EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t(EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32(EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t(EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t(EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_eof_ev_bool(EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSqlBlobStream_close_void(EarthView_World_Core_CSqlBlobStream_close_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CSqlBlobStream_close_void_Callback = pCallback;
				}
				virtual ev_size_t read(_in void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CSqlBlobStream::read(buf, count);
				}
				virtual void skip(_in ev_int32 count)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback(count);
					}
					else
						return this->CSqlBlobStream::skip(count);
				}
				virtual void seek(_in ev_size_t pos)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback(pos);
					}
					else
						return this->CSqlBlobStream::seek(pos);
				}
				virtual ev_size_t tell() const
				{
					if(m_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::tell();
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::eof();
				}
				virtual void close()
				{
					if(m_EarthView_World_Core_CSqlBlobStream_close_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CSqlBlobStream_close_void_Callback();
					}
					else
						return this->CSqlBlobStream::close();
				}
				virtual EarthView::World::Core::MemoryDataStreamPtr toDataStream()
				{
					if(m_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::MemoryDataStreamPtr returnValue = *(EarthView::World::Core::MemoryDataStreamPtr*)m_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::toDataStream();
				}
				virtual ev_size_t write(_in const void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CSqlBlobStream::write(buf, count);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount, _in const EVString& delim)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback(buf, maxCount, delim_Char);
						return returnValue;
					}
					else
						return this->CSqlBlobStream::readLine(buf, maxCount, delim);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback(buf, maxCount);
						return returnValue;
					}
					else
						return this->CSqlBlobStream::readLine(buf, maxCount);
				}
				virtual EVString getLine(_in ev_bool trimAfter)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback(trimAfter);
						return returnValue;
					}
					else
						return this->CSqlBlobStream::getLine(trimAfter);
				}
				virtual EVString getLine()
				{
					if(m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::getLine();
				}
				virtual EVString getAsString()
				{
					if(m_EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::getAsString();
				}
				virtual ev_size_t skipLine(_in const EVString& delim)
				{
					if(m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback(delim_Char);
						return returnValue;
					}
					else
						return this->CSqlBlobStream::skipLine(delim);
				}
				virtual ev_size_t skipLine()
				{
					if(m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::skipLine();
				}
				virtual EVString DriverName() const
				{
					if(m_EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::DriverName();
				}
				virtual const ev_char* data() const
				{
					if(m_EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback != NULL && this->isCustomExtend())
					{
						const ev_char* returnValue = m_EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::data();
				}
				virtual ev_bool isReadable() const
				{
					if(m_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::isReadable();
				}
				virtual ev_bool isWriteable() const
				{
					if(m_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSqlBlobStream::isWriteable();
				}
			};
			REGISTER_FACTORY_CLASS(CSqlBlobStreamProxy);
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::read(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->read(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_read_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::read(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CSqlBlobStream::skip(count);
				else
					ptrNativeObject->skip(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CSqlBlobStream_skip_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CSqlBlobStream::skip(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CSqlBlobStream::seek(pos);
				else
					ptrNativeObject->seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CSqlBlobStream_seek_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CSqlBlobStream::seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_tell_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::tell();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->tell();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_tell_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_tell_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::tell();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CSqlBlobStream_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_eof_ev_bool( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_eof_ev_bool_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CSqlBlobStream_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CSqlBlobStream_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CSqlBlobStream::close();
				else
					ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_close_void( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_close_void_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_close_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CSqlBlobStream_close_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CSqlBlobStream::close();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::toDataStream();
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->toDataStream();
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CSqlBlobStream_toDataStream_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::toDataStream();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::write(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->write(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_write_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::write(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount, delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount, delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount, delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->readLine(buf, maxCount);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_readLine_ev_size_t_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_char* buf, _in ev_uint64  maxCount )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::readLine(buf, maxCount);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool(void *pObjectXXXX, _in ev_bool trimAfter )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::getLine(trimAfter);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLine(trimAfter);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_getLine_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool trimAfter )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::getLine(trimAfter);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_getLine_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::getLine();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLine();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_getLine_EVString( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_getLine_EVString_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_getLine_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_getLine_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::getLine();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_getAsString_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::getAsString();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getAsString();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_getAsString_EVString( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_getAsString_EVString_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_getAsString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_getAsString_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::getAsString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::skipLine(delim1);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine(delim1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_EVString_NoVirtual(void *pObjectXXXX, _in const char* delim )
			{
				EarthView::World::Core::ev_string delim1 = delim;
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::skipLine(delim1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::skipLine();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->skipLine();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CSqlBlobStream_skipLine_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::skipLine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_DriverName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::DriverName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->DriverName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_DriverName_EVString( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_DriverName_EVString_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_DriverName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CSqlBlobStream_DriverName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::DriverName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Core_CSqlBlobStream_data_ev_char(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				if (dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*)ptrNativeObject) != NULL)
				{
					const ev_char* objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::data();
					return objXXXX;
				}
				else
				{
					const ev_char* objXXXX = ptrNativeObject->data();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_data_ev_char( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_data_ev_char_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_data_ev_char(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const ev_char*  _stdcall EarthView_World_Core_CSqlBlobStream_data_ev_char_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CSqlBlobStream* ptrNativeObject = (EarthView::World::Core::CSqlBlobStream*) pObjectXXXX;
				const ev_char* objXXXX = ptrNativeObject->EarthView::World::Core::CSqlBlobStream::data();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_isReadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool( void *pObjectXXXX, EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool_Callback* pCallback )
			{
				CSqlBlobStreamProxy* ptr = dynamic_cast<CSqlBlobStreamProxy*>((EarthView::World::Core::CSqlBlobStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSqlBlobStream_isWriteable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_MemoryDataStreamVector_push_back_void_MemoryDataStreamPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Core::MemoryDataStreamPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_MemoryDataStreamVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_MemoryDataStreamVector_front_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_MemoryDataStreamVector_back_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_MemoryDataStreamVector_at_MemoryDataStreamPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_MemoryDataStreamVector_insert_void_ev_uint32_MemoryDataStreamPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Core::MemoryDataStreamPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_MemoryDataStreamVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_MemoryDataStreamVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_MemoryDataStreamVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_MemoryDataStreamVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_MemoryDataStreamVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Core::MemoryDataStreamVector* ptrNativeObject = (EarthView::World::Core::MemoryDataStreamVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
		}
	}
}
