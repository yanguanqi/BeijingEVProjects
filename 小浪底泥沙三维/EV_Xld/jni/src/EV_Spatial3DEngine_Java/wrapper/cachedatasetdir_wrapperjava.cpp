/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/cachedatasetdir.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_CacheDatasetDir_calcImageTileCacheFilePath_1EVTileModeType_1EVString_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jint tilemode_j, jstring layerPath_j, jint level_j, jint row_j, jint col_j)
			{
				EarthView::World::Spatial::EVTileModeType tilemode = (EarthView::World::Spatial::EVTileModeType) tilemode_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerPath_ch = (const ev_char*)__env->GetStringUTFChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringUTFChars(layerPath_j, (const char *)layerPath_ch);
				#else
				const ev_wchar* layerPath_ch = (const ev_wchar*)__env->GetStringChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringChars(layerPath_j, (const jchar *)layerPath_ch);
				#endif
				const ev_int32 level = (ev_int32) level_j;
				const ev_int32 row = (ev_int32) row_j;
				const ev_int32 col = (ev_int32) col_j;
				EVString __values1 = EarthView::World::Spatial3D::CCacheDatasetDir::calcImageTileCacheFilePath(tilemode, layerPath, level, row, col);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_CacheDatasetDir_calcDemCacheFilePath_1EVString_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jstring layerPath_j, jint level_j, jint row_j, jint col_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* layerPath_ch = (const ev_char*)__env->GetStringUTFChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringUTFChars(layerPath_j, (const char *)layerPath_ch);
				#else
				const ev_wchar* layerPath_ch = (const ev_wchar*)__env->GetStringChars(layerPath_j,JNI_FALSE);
				const EVString layerPath = layerPath_ch;
				__env->ReleaseStringChars(layerPath_j, (const jchar *)layerPath_ch);
				#endif
				const ev_int32 level = (ev_int32) level_j;
				const ev_int32 row = (ev_int32) row_j;
				const ev_int32 col = (ev_int32) col_j;
				EVString __values1 = EarthView::World::Spatial3D::CCacheDatasetDir::calcDemCacheFilePath(layerPath, level, row, col);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
