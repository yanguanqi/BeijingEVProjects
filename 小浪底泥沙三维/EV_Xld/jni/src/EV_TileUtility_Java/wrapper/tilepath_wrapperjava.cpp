/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilepath.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_TilePath_setTilePathRule_1CTilePathRule(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tilepathrule_j)
			{
				const EarthView::World::Spatial::CTilePathRule *tilepathrule = (const EarthView::World::Spatial::CTilePathRule*) tilepathrule_j;
				EarthView::World::Spatial::CTilePath *pObjectX = (EarthView::World::Spatial::CTilePath*) pObjXXXX;
				pObjectX->setTilePathRule(tilepathrule);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_TilePath_getTilePathRule_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CTilePath *pObjectX = (EarthView::World::Spatial::CTilePath*) pObjXXXX;
				EarthView::World::Spatial::CTilePathRule* __values1 = pObjectX->getTilePathRule();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_TilePath_getPath_1ev_1int32_1ev_1uint32_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong row_j, jlong col_j, jstring format_j)
			{
				ev_int32 level = (ev_int32) level_j;
				ev_uint32 row = (ev_uint32) row_j;
				ev_uint32 col = (ev_uint32) col_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* format_ch = (const ev_char*)__env->GetStringUTFChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringUTFChars(format_j, (const char *)format_ch);
				#else
				const ev_wchar* format_ch = (const ev_wchar*)__env->GetStringChars(format_j,JNI_FALSE);
				const EVString format = format_ch;
				__env->ReleaseStringChars(format_j, (const jchar *)format_ch);
				#endif
				const 				EarthView::World::Spatial::CTilePath *pObjectX = (EarthView::World::Spatial::CTilePath*) pObjXXXX;
				const EVString __values1 = pObjectX->getPath(level, row, col, format);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
