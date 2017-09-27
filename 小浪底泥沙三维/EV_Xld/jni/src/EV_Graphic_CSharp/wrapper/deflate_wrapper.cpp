/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/deflate.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback)(_in void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  count);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback)(_in ev_char* buf, _in ev_uint64  maxCount, _in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback)(_in ev_char* buf, _in ev_uint64  maxCount);
			typedef char*  ( _stdcall EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback)(_in ev_bool trimAfter);
			typedef char*  ( _stdcall EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback)(_in char*& delim);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback)(_in ev_int32 count);
			typedef void  ( _stdcall EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback)(_in ev_uint64  pos);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDeflateStream_close_void_Callback)();
			class CDeflateStreamProxy : public EarthView::World::Graphic::CDeflateStream
			{
			private:
				EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback* m_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback;
				EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback* m_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback;
				EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback* m_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback;
				EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback;
				EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback* m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback;
				EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback* m_EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback;
				EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback* m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback;
				EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback* m_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback;
				EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback* m_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback;
				EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback* m_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback;
				EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback* m_EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback;
				EarthView_World_Graphic_CDeflateStream_close_void_Callback* m_EarthView_World_Graphic_CDeflateStream_close_void_Callback;
			public:
				CDeflateStreamProxy(EarthView::World::Core::CNameValuePairList *pList) : CDeflateStream(pList)
				{
					m_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDeflateStream_close_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool(EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool(EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t(EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t(EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t(EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool(EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_getLine_EVString(EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_getAsString_EVString(EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString(EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t(EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32(EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t(EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t(EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_eof_ev_bool(EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDeflateStream_close_void(EarthView_World_Graphic_CDeflateStream_close_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDeflateStream_close_void_Callback = pCallback;
				}
				virtual ev_size_t read(_in void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CDeflateStream::read(buf, count);
				}
				virtual ev_size_t write(_in const void* buf, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback(buf, count);
						return returnValue;
					}
					else
						return this->CDeflateStream::write(buf, count);
				}
				virtual void skip(_in ev_int32 count)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback(count);
					}
					else
						return this->CDeflateStream::skip(count);
				}
				virtual void seek(_in ev_size_t pos)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback(pos);
					}
					else
						return this->CDeflateStream::seek(pos);
				}
				virtual ev_size_t tell() const
				{
					if(m_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDeflateStream::tell();
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDeflateStream::eof();
				}
				virtual void close()
				{
					if(m_EarthView_World_Graphic_CDeflateStream_close_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDeflateStream_close_void_Callback();
					}
					else
						return this->CDeflateStream::close();
				}
				virtual ev_bool isReadable() const
				{
					if(m_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDeflateStream::isReadable();
				}
				virtual ev_bool isWriteable() const
				{
					if(m_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDeflateStream::isWriteable();
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount, _in const EVString& delim)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback(buf, maxCount, delim_Char);
						return returnValue;
					}
					else
						return this->CDeflateStream::readLine(buf, maxCount, delim);
				}
				virtual ev_size_t readLine(_in ev_char* buf, _in ev_size_t maxCount)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback(buf, maxCount);
						return returnValue;
					}
					else
						return this->CDeflateStream::readLine(buf, maxCount);
				}
				virtual EVString getLine(_in ev_bool trimAfter)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback(trimAfter);
						return returnValue;
					}
					else
						return this->CDeflateStream::getLine(trimAfter);
				}
				virtual EVString getLine()
				{
					if(m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDeflateStream::getLine();
				}
				virtual EVString getAsString()
				{
					if(m_EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDeflateStream::getAsString();
				}
				virtual ev_size_t skipLine(_in const EVString& delim)
				{
					if(m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* delim_Char = delim.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback(delim_Char);
						return returnValue;
					}
					else
						return this->CDeflateStream::skipLine(delim);
				}
				virtual ev_size_t skipLine()
				{
					if(m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDeflateStream::skipLine();
				}
			};
			REGISTER_FACTORY_CLASS(CDeflateStreamProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDeflateStream_isCompressedStreamValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isCompressedStreamValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				if (dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::read(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->read(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDeflateStream_read_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in void* buf, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::read(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				if (dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::write(buf, count);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->write(buf, count);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDeflateStream_write_ev_size_t_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::write(buf, count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				if (dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDeflateStream::skip(count);
				else
					ptrNativeObject->skip(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDeflateStream_skip_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 count )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDeflateStream::skip(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				if (dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDeflateStream::seek(pos);
				else
					ptrNativeObject->seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDeflateStream_seek_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDeflateStream::seek(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDeflateStream_tell_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				if (dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::tell();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->tell();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_tell_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CDeflateStream_tell_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::tell();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDeflateStream_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				if (dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_eof_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_eof_ev_bool_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CDeflateStream_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CDeflateStream::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDeflateStream_close_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				if (dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDeflateStream::close();
				else
					ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_close_void( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_close_void_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_close_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDeflateStream_close_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDeflateStream* ptrNativeObject = (EarthView::World::Graphic::CDeflateStream*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDeflateStream::close();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_isReadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_isWriteable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_readLine_ev_size_t_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_getLine_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_getLine_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_getLine_EVString_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_getLine_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_getAsString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_getAsString_EVString_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_getAsString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t_Callback* pCallback )
			{
				CDeflateStreamProxy* ptr = dynamic_cast<CDeflateStreamProxy*>((EarthView::World::Graphic::CDeflateStream*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDeflateStream_skipLine_ev_size_t(pCallback);
				}
			}
		}
	}
}
