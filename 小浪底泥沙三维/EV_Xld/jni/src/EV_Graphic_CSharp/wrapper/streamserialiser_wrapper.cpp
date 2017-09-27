/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/streamserialiser.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef int  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback)();
			typedef const EarthView::World::Graphic::CStreamSerialiser::Chunk*  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback)();
			typedef const EarthView::World::Graphic::CStreamSerialiser::Chunk*  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback)(_in ev_uint32 id, _in ev_uint16 maxVersion, _in char*& msg);
			typedef const EarthView::World::Graphic::CStreamSerialiser::Chunk*  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback)(_in ev_uint32 id, _in ev_uint16 maxVersion);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback)(_in ev_uint32 id);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback)(_in ev_uint32 id);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback)();
			typedef const EarthView::World::Graphic::CStreamSerialiser::Chunk*  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback)(_in ev_uint32 id, _in ev_uint16 version);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback)(_in ev_uint32 id);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback)(_in ev_uint32 id);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback)(_in const void* buf, _in ev_uint64  size, _in ev_uint64  count);
			typedef EarthView::World::Graphic::CStreamSerialiser::Chunk*  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback)(_in ev_uint32 id, _in ev_uint16 version);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback)(_in EarthView::World::Graphic::CStreamSerialiser::Chunk* c);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback)(_in ev_bool failOnEof, _in ev_bool validateReadable, _in ev_bool validateWriteable);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback)(_in ev_bool failOnEof, _in ev_bool validateReadable);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback)(_in ev_bool failOnEof);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback)(_inout void* pData, _in ev_uint64  size);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback)();
			typedef EarthView::World::Graphic::CStreamSerialiser::Chunk*  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback)(_in ev_uint32 id);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback)(_in const ev_real32* val, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback)(_in const ev_real64* val, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback)(_out ev_real64* val, _in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback)(_out ev_real32* val, _in ev_uint64  count);
			class CStreamSerialiserProxy : public EarthView::World::Graphic::CStreamSerialiser
			{
			private:
				EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback* m_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback;
				EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback* m_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback* m_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback;
				EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback* m_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback;
				EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback* m_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback;
				EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback* m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback;
				EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback* m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback;
				EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback* m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback;
				EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback* m_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback;
				EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback* m_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback;
				EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback* m_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback;
				EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback* m_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback;
			public:
				CStreamSerialiserProxy(EarthView::World::Core::CNameValuePairList *pList) : CStreamSerialiser(pList)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian(EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk(EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString(EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16(EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32(EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32(EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32(EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32(EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool(EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk(EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16(EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32(EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32(EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk(EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16(EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readHeader_void(EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void(EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk(EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool(EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool(EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void(EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t(EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void(EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32(EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t(EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t(EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t(EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t(EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CStreamSerialiser::Endian getEndian() const
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CStreamSerialiser::Endian returnValue = (EarthView::World::Graphic::CStreamSerialiser::Endian)m_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback();
						return returnValue;
					}
					else
						return this->CStreamSerialiser::getEndian();
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkBegin()
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CStreamSerialiser::Chunk* returnValue = m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback();
						return returnValue;
					}
					else
						return this->CStreamSerialiser::readChunkBegin();
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkBegin(_in ev_uint32 id, _in ev_uint16 maxVersion, _in const EVString& msg)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* msg_Char = msg.makeBuffer();
						const EarthView::World::Graphic::CStreamSerialiser::Chunk* returnValue = m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback(id, maxVersion, msg_Char);
						return returnValue;
					}
					else
						return this->CStreamSerialiser::readChunkBegin(id, maxVersion, msg);
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkBegin(_in ev_uint32 id, _in ev_uint16 maxVersion)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CStreamSerialiser::Chunk* returnValue = m_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback(id, maxVersion);
						return returnValue;
					}
					else
						return this->CStreamSerialiser::readChunkBegin(id, maxVersion);
				}
				virtual void undoReadChunk(_in ev_uint32 id)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback(id);
					}
					else
						return this->CStreamSerialiser::undoReadChunk(id);
				}
				virtual ev_uint32 peekNextChunkID()
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CStreamSerialiser::peekNextChunkID();
				}
				virtual void readChunkEnd(_in ev_uint32 id)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback(id);
					}
					else
						return this->CStreamSerialiser::readChunkEnd(id);
				}
				virtual ev_bool isEndOfChunk(_in ev_uint32 id)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback(id);
						return returnValue;
					}
					else
						return this->CStreamSerialiser::isEndOfChunk(id);
				}
				virtual ev_bool eof() const
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStreamSerialiser::eof();
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* getCurrentChunk() const
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CStreamSerialiser::Chunk* returnValue = m_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback();
						return returnValue;
					}
					else
						return this->CStreamSerialiser::getCurrentChunk();
				}
				virtual void writeChunkBegin(_in ev_uint32 id, _in ev_uint16 version)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback(id, version);
					}
					else
						return this->CStreamSerialiser::writeChunkBegin(id, version);
				}
				virtual void writeChunkBegin(_in ev_uint32 id)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback(id);
					}
					else
						return this->CStreamSerialiser::writeChunkBegin(id);
				}
				virtual void writeChunkEnd(_in ev_uint32 id)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback(id);
					}
					else
						return this->CStreamSerialiser::writeChunkEnd(id);
				}
				virtual void writeData(_in const void* buf, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback(buf, size, count);
					}
					else
						return this->CStreamSerialiser::writeData(buf, size, count);
				}
				virtual EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkImpl()
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CStreamSerialiser::Chunk* returnValue = m_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CStreamSerialiser::readChunkImpl();
				}
				virtual void writeChunkImpl(_in ev_uint32 id, _in ev_uint16 version)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback(id, version);
					}
					else
						return this->CStreamSerialiser::writeChunkImpl(id, version);
				}
				virtual void readHeader()
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback();
					}
					else
						return this->CStreamSerialiser::readHeader();
				}
				virtual void writeHeader()
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback();
					}
					else
						return this->CStreamSerialiser::writeHeader();
				}
				virtual ev_uint32 calculateChecksum(_in EarthView::World::Graphic::CStreamSerialiser::Chunk* c)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback(c);
						return returnValue;
					}
					else
						return this->CStreamSerialiser::calculateChecksum(c);
				}
				virtual void checkStream(_in ev_bool failOnEof, _in ev_bool validateReadable, _in ev_bool validateWriteable) const
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback(failOnEof, validateReadable, validateWriteable);
					}
					else
						return this->CStreamSerialiser::checkStream(failOnEof, validateReadable, validateWriteable);
				}
				virtual void checkStream(_in ev_bool failOnEof, _in ev_bool validateReadable) const
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback(failOnEof, validateReadable);
					}
					else
						return this->CStreamSerialiser::checkStream(failOnEof, validateReadable);
				}
				virtual void checkStream(_in ev_bool failOnEof) const
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback(failOnEof);
					}
					else
						return this->CStreamSerialiser::checkStream(failOnEof);
				}
				virtual void checkStream() const
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback();
					}
					else
						return this->CStreamSerialiser::checkStream();
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback(pData, size, count);
					}
					else
						return this->CStreamSerialiser::flipEndian(pData, size, count);
				}
				virtual void flipEndian(_inout void* pData, _in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback(pData, size);
					}
					else
						return this->CStreamSerialiser::flipEndian(pData, size);
				}
				virtual void determineEndianness()
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback();
					}
					else
						return this->CStreamSerialiser::determineEndianness();
				}
				virtual EarthView::World::Graphic::CStreamSerialiser::Chunk* popChunk(_in ev_uint32 id)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CStreamSerialiser::Chunk* returnValue = m_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback(id);
						return returnValue;
					}
					else
						return this->CStreamSerialiser::popChunk(id);
				}
				virtual void writeFloatsAsDoubles(_in const ev_real32* val, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback(val, count);
					}
					else
						return this->CStreamSerialiser::writeFloatsAsDoubles(val, count);
				}
				virtual void writeDoublesAsFloats(_in const ev_real64* val, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback(val, count);
					}
					else
						return this->CStreamSerialiser::writeDoublesAsFloats(val, count);
				}
				virtual void readFloatsAsDoubles(_out ev_real64* val, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback(val, count);
					}
					else
						return this->CStreamSerialiser::readFloatsAsDoubles(val, count);
				}
				virtual void readDoublesAsFloats(_out ev_real32* val, _in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback(val, count);
					}
					else
						return this->CStreamSerialiser::readDoublesAsFloats(val, count);
				}
			};
			REGISTER_FACTORY_CLASS(CStreamSerialiserProxy);
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CStreamSerialiser_Chunk_id( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->id;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStreamSerialiser_Chunk_id( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjectXXXX)->id = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CStreamSerialiser_Chunk_version( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->version;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStreamSerialiser_Chunk_version( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjectXXXX)->version = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CStreamSerialiser_Chunk_length( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->length;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStreamSerialiser_Chunk_length( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjectXXXX)->length = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CStreamSerialiser_Chunk_offset( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->offset;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CStreamSerialiser_Chunk_offset( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjectXXXX)->offset = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CStreamSerialiser::Endian objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::getEndian();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CStreamSerialiser::Endian objXXXX = ptrNativeObject->getEndian();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CStreamSerialiser_getEndian_Endian_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				EarthView::World::Graphic::CStreamSerialiser::Endian objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::getEndian();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStreamSerialiser_makeIdentifier_ev_uint32_EVString(_in const char* code )
			{
				EarthView::World::Core::ev_string code1 = code;
				ev_uint32 objXXXX = EarthView::World::Graphic::CStreamSerialiser::makeIdentifier(code1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStreamSerialiser_getCurrentChunkDepth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCurrentChunkDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStreamSerialiser_getCurrentChunkID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getCurrentChunkID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CStreamSerialiser_getOffsetFromChunkStart_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getOffsetFromChunkStart();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->readChunkBegin();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 maxVersion, _in const char* msg )
			{
				EarthView::World::Core::ev_string msg1 = msg;
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion, msg1);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->readChunkBegin(id, maxVersion, msg1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_EVString_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 maxVersion, _in const char* msg )
			{
				EarthView::World::Core::ev_string msg1 = msg;
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion, msg1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 maxVersion )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->readChunkBegin(id, maxVersion);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkBegin_Chunk_ev_uint32_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 maxVersion )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::undoReadChunk(id);
				else
					ptrNativeObject->undoReadChunk(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_undoReadChunk_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::undoReadChunk(id);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::peekNextChunkID();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->peekNextChunkID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStreamSerialiser_peekNextChunkID_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::peekNextChunkID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkEnd(id);
				else
					ptrNativeObject->readChunkEnd(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkEnd_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkEnd(id);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::isEndOfChunk(id);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isEndOfChunk(id);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamSerialiser_isEndOfChunk_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::isEndOfChunk(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::eof();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->eof();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamSerialiser_eof_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::getCurrentChunk();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->getCurrentChunk();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_getCurrentChunk_Chunk_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::getCurrentChunk();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 version )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id, version);
				else
					ptrNativeObject->writeChunkBegin(id, version);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 version )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id, version);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id);
				else
					ptrNativeObject->writeChunkBegin(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkBegin_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkEnd(id);
				else
					ptrNativeObject->writeChunkEnd(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkEnd_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkEnd(id);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _in const void* buf, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeData(buf, size, count);
				else
					ptrNativeObject->writeData(buf, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeData_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* buf, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeData(buf, size, count);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkImpl();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->readChunkImpl();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_readChunkImpl_Chunk_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readChunkImpl();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 version )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkImpl(id, version);
				else
					ptrNativeObject->writeChunkImpl(id, version);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeChunkImpl_void_ev_uint32_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _in ev_uint16 version )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeChunkImpl(id, version);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readHeader_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readHeader();
				else
					ptrNativeObject->readHeader();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readHeader_void_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readHeader_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readHeader();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeHeader_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeHeader();
				else
					ptrNativeObject->writeHeader();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeHeader_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeHeader_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeHeader();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk(void *pObjectXXXX, _in EarthView::World::Graphic::CStreamSerialiser::Chunk* c )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::calculateChecksum(c);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->calculateChecksum(c);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CStreamSerialiser_calculateChecksum_ev_uint32_Chunk_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CStreamSerialiser::Chunk* c )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::calculateChecksum(c);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool failOnEof, _in ev_bool validateReadable, _in ev_bool validateWriteable )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable, validateWriteable);
				else
					ptrNativeObject->checkStream(failOnEof, validateReadable, validateWriteable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool failOnEof, _in ev_bool validateReadable, _in ev_bool validateWriteable )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable, validateWriteable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool failOnEof, _in ev_bool validateReadable )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable);
				else
					ptrNativeObject->checkStream(failOnEof, validateReadable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool failOnEof, _in ev_bool validateReadable )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool(void *pObjectXXXX, _in ev_bool failOnEof )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof);
				else
					ptrNativeObject->checkStream(failOnEof);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool failOnEof )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream();
				else
					ptrNativeObject->checkStream();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_checkStream_void_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_checkStream_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_checkStream_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::checkStream();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size, count);
				else
					ptrNativeObject->flipEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size);
				else
					ptrNativeObject->flipEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_flipEndian_void_void_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* pData, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::determineEndianness();
				else
					ptrNativeObject->determineEndianness();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_determineEndianness_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::determineEndianness();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::popChunk(id);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->popChunk(id);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CStreamSerialiser::Chunk*  _stdcall EarthView_World_Graphic_CStreamSerialiser_popChunk_Chunk_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				EarthView::World::Graphic::CStreamSerialiser::Chunk* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::popChunk(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t(void *pObjectXXXX, _in const ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeFloatsAsDoubles(val, count);
				else
					ptrNativeObject->writeFloatsAsDoubles(val, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeFloatsAsDoubles_void_ev_real32_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeFloatsAsDoubles(val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t(void *pObjectXXXX, _in const ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeDoublesAsFloats(val, count);
				else
					ptrNativeObject->writeDoublesAsFloats(val, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_writeDoublesAsFloats_void_ev_real64_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::writeDoublesAsFloats(val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t(void *pObjectXXXX, _out ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readFloatsAsDoubles(val, count);
				else
					ptrNativeObject->readFloatsAsDoubles(val, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readFloatsAsDoubles_void_ev_real64_ev_size_t_NoVirtual(void *pObjectXXXX, _out ev_real64* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readFloatsAsDoubles(val, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t(void *pObjectXXXX, _out ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				if (dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readDoublesAsFloats(val, count);
				else
					ptrNativeObject->readDoublesAsFloats(val, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_Callback* pCallback )
			{
				CStreamSerialiserProxy* ptr = dynamic_cast<CStreamSerialiserProxy*>((EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamSerialiser_readDoublesAsFloats_void_ev_real32_ev_size_t_NoVirtual(void *pObjectXXXX, _out ev_real32* val, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CStreamSerialiser* ptrNativeObject = (EarthView::World::Graphic::CStreamSerialiser*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamSerialiser::readDoublesAsFloats(val, count);
			}
		}
	}
}
