/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/filemapping.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileMapping_open_1ev_1string_1FILEACCESS_1ev_1uint64_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFileName_j, jint access_j, jlong nMaxSize_j, jstring strShareName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFileName_ch = (const ev_char*)__env->GetStringUTFChars(strFileName_j,JNI_FALSE);
				const ev_string strFileName = strFileName_ch;
				__env->ReleaseStringUTFChars(strFileName_j, (const char *)strFileName_ch);
				#else
				const ev_wchar* strFileName_ch = (const ev_wchar*)__env->GetStringChars(strFileName_j,JNI_FALSE);
				const ev_string strFileName = strFileName_ch;
				__env->ReleaseStringChars(strFileName_j, (const jchar *)strFileName_ch);
				#endif
				const EarthView::World::Core::FILEACCESS access = (const EarthView::World::Core::FILEACCESS) access_j;
				ev_uint64 nMaxSize = *(ev_uint64*) nMaxSize_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strShareName_ch = (const ev_char*)__env->GetStringUTFChars(strShareName_j,JNI_FALSE);
				const ev_string strShareName = strShareName_ch;
				__env->ReleaseStringUTFChars(strShareName_j, (const char *)strShareName_ch);
				#else
				const ev_wchar* strShareName_ch = (const ev_wchar*)__env->GetStringChars(strShareName_j,JNI_FALSE);
				const ev_string strShareName = strShareName_ch;
				__env->ReleaseStringChars(strShareName_j, (const jchar *)strShareName_ch);
				#endif
				EarthView::World::Core::CFileMapping *pObjectX = (EarthView::World::Core::CFileMapping*) pObjXXXX;
				ev_bool __values1 = pObjectX->open(strFileName, access, nMaxSize, strShareName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileMapping_isOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileMapping *pObjectX = (EarthView::World::Core::CFileMapping*) pObjXXXX;
				ev_bool __values1 = pObjectX->isOpen();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileMapping_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileMapping *pObjectX = (EarthView::World::Core::CFileMapping*) pObjXXXX;
				pObjectX->close();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileMapping_mapViewOfFile_1ev_1uint64_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nOffset_j, jlong nBytes_j)
			{
				ev_uint64 nOffset = *(ev_uint64*) nOffset_j;
				ev_uint64 nBytes = *(ev_uint64*) nBytes_j;
				EarthView::World::Core::CFileMapping *pObjectX = (EarthView::World::Core::CFileMapping*) pObjXXXX;
				void* __values1 = pObjectX->mapViewOfFile(nOffset, nBytes);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileMapping_flushMapViewOfFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileMapping *pObjectX = (EarthView::World::Core::CFileMapping*) pObjXXXX;
				ev_bool __values1 = pObjectX->flushMapViewOfFile();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileMapping_unMapViewOfFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFileMapping *pObjectX = (EarthView::World::Core::CFileMapping*) pObjXXXX;
				ev_bool __values1 = pObjectX->unMapViewOfFile();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
