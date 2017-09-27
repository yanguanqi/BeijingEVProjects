/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/decode.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CDecode_decode_7z_MemoryDataStreamPtr_MemoryDataStreamPtr(_in void* instream_7z )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CDecode::decode_7z(*(EarthView::World::Core::MemoryDataStreamPtr*)instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CDecode_decode_7z_MemoryDataStreamPtr_CMemoryDataStream(_in EarthView::World::Core::CMemoryDataStream* instream_7z )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CDecode::decode_7z(instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CDecode_decode_7z_stream_MemoryDataStreamPtr_MemoryDataStreamPtr(_in void* instream_7z )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CDecode::decode_7z_stream(*(EarthView::World::Core::MemoryDataStreamPtr*)instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CDecode_decode_7z_stream_MemoryDataStreamPtr_CMemoryDataStream(_in EarthView::World::Core::CMemoryDataStream* instream_7z )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CDecode::decode_7z_stream(instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CDecode_encode_7z_archive_MemoryDataStreamPtr_MemoryDataStreamPtr(_in void* instream )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CDecode::encode_7z_archive(*(EarthView::World::Core::MemoryDataStreamPtr*)instream);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CDecode_decode_7z_archive_MemoryDataStreamPtr_MemoryDataStreamPtr(_in void* instream_7z )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CDecode::decode_7z_archive(*(EarthView::World::Core::MemoryDataStreamPtr*)instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CDecode_is7zMemoryArchive_ev_bool_MemoryDataStreamPtr(_in void* instream_7z )
			{
				ev_bool objXXXX = EarthView::World::Spatial::CDecode::is7zMemoryArchive(*(EarthView::World::Core::MemoryDataStreamPtr*)instream_7z);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CDecode_encode_7z_archive_ForBatch_MemoryDataStreamPtr_MemoryDataStreamPtr(_in void* instream )
			{
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial::CDecode::encode_7z_archive_ForBatch(*(EarthView::World::Core::MemoryDataStreamPtr*)instream);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CDecode_clearMemForBatch_void( )
			{
				EarthView::World::Spatial::CDecode::clearMemForBatch();
			}
		}
	}
}
