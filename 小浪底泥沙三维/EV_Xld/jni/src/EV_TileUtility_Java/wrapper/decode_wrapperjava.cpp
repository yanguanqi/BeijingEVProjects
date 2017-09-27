/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/decode.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Decode_decode_17z_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong instream_7z_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr instream_7z = *(EarthView::World::Core::MemoryDataStreamPtr*) instream_7z_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CDecode::decode_7z(instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Decode_decode_17z_1CMemoryDataStream(JNIEnv *__env , jclass __clazz, jlong instream_7z_j)
			{
				EarthView::World::Core::CMemoryDataStream *instream_7z = (EarthView::World::Core::CMemoryDataStream*) instream_7z_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CDecode::decode_7z(instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Decode_decode_17z_1stream_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong instream_7z_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr instream_7z = *(EarthView::World::Core::MemoryDataStreamPtr*) instream_7z_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CDecode::decode_7z_stream(instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Decode_decode_17z_1stream_1CMemoryDataStream(JNIEnv *__env , jclass __clazz, jlong instream_7z_j)
			{
				EarthView::World::Core::CMemoryDataStream *instream_7z = (EarthView::World::Core::CMemoryDataStream*) instream_7z_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CDecode::decode_7z_stream(instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Decode_encode_17z_1archive_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong instream_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr instream = *(EarthView::World::Core::MemoryDataStreamPtr*) instream_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CDecode::encode_7z_archive(instream);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Decode_decode_17z_1archive_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong instream_7z_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr instream_7z = *(EarthView::World::Core::MemoryDataStreamPtr*) instream_7z_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CDecode::decode_7z_archive(instream_7z);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Decode_is7zMemoryArchive_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong instream_7z_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr instream_7z = *(EarthView::World::Core::MemoryDataStreamPtr*) instream_7z_j;
				ev_bool __values1 = EarthView::World::Spatial::CDecode::is7zMemoryArchive(instream_7z);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Decode_encode_17z_1archive_1ForBatch_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jlong instream_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr instream = *(EarthView::World::Core::MemoryDataStreamPtr*) instream_j;
				EarthView::World::Core::MemoryDataStreamPtr __values1 = EarthView::World::Spatial::CDecode::encode_7z_archive_ForBatch(instream);
				EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Decode_clearMemForBatch_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CDecode::clearMemForBatch();
			}
		}
	}
}
