/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/lasmerge.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasMerge_setParam_1CLasMergeQuadTreeParam(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong param_j)
			{
				CLasMergeQuadTreeParam &param = *(CLasMergeQuadTreeParam*) param_j;
				EarthView::World::SpatialLASConvertProxy::CLasMerge *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasMerge*) pObjXXXX;
				pObjectX->setParam(param);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasMerge_getParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::SpatialLASConvertProxy::CLasMerge *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasMerge*) pObjXXXX;
				CLasMergeQuadTreeParam& __values1 = pObjectX->getParam();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatiallasconvertproxy_LasMerge_merge_1EVString_1LasRecordInfoList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcFolder_j, jlong lasRecordInfoList_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* srcFolder_ch = (const ev_char*)__env->GetStringUTFChars(srcFolder_j,JNI_FALSE);
				const EVString srcFolder = srcFolder_ch;
				__env->ReleaseStringUTFChars(srcFolder_j, (const char *)srcFolder_ch);
				#else
				const ev_wchar* srcFolder_ch = (const ev_wchar*)__env->GetStringChars(srcFolder_j,JNI_FALSE);
				const EVString srcFolder = srcFolder_ch;
				__env->ReleaseStringChars(srcFolder_j, (const jchar *)srcFolder_ch);
				#endif
				LasRecordInfoList lasRecordInfoList = *(LasRecordInfoList*) lasRecordInfoList_j;
				EarthView::World::SpatialLASConvertProxy::CLasMerge *pObjectX = (EarthView::World::SpatialLASConvertProxy::CLasMerge*) pObjXXXX;
				pObjectX->merge(srcFolder, lasRecordInfoList);
			}
		}
	}
}
