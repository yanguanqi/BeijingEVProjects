/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/file.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_open_1ev_1string_1FILEMODE(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFileName_j, jint eMode_j)
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
				const EarthView::World::Core::FILEMODE eMode = (const EarthView::World::Core::FILEMODE) eMode_j;
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->open(strFileName, eMode);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_isOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->isOpen();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_File_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				pObjectX->close();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_File_readLine_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong strLine_j)
			{
				ev_string &strLine = *(ev_string*) strLine_j;
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->readLine(strLine);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_File_writeLine_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strLine_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strLine_ch = (const ev_char*)__env->GetStringUTFChars(strLine_j,JNI_FALSE);
				const ev_string strLine = strLine_ch;
				__env->ReleaseStringUTFChars(strLine_j, (const char *)strLine_ch);
				#else
				const ev_wchar* strLine_ch = (const ev_wchar*)__env->GetStringChars(strLine_j,JNI_FALSE);
				const ev_string strLine = strLine_ch;
				__env->ReleaseStringChars(strLine_j, (const jchar *)strLine_ch);
				#endif
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->writeLine(strLine);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_File_read_1ev_1byte_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong nNum_j)
			{
				ev_byte *buf = (ev_byte*) buf_j;
				ev_uint64 nNum = *(ev_uint64*) nNum_j;
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->read(buf, nNum);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_File_write_1ev_1byte_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong nNum_j)
			{
				ev_byte *buf = (ev_byte*) buf_j;
				ev_uint64 nNum = *(ev_uint64*) nNum_j;
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->write(buf, nNum);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_File_seek_1ev_1uint64_1FILEWAY(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nPosOff_j, jint way_j)
			{
				ev_uint64 nPosOff = *(ev_uint64*) nPosOff_j;
				const EarthView::World::Core::FILEWAY way = (const EarthView::World::Core::FILEWAY) way_j;
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->seek(nPosOff, way);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_save_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CFile *pObjectX = (EarthView::World::Core::CFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->save();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_rename_1ev_1string_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strFileName_j, jstring strNwName_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strNwName_ch = (const ev_char*)__env->GetStringUTFChars(strNwName_j,JNI_FALSE);
				const ev_string strNwName = strNwName_ch;
				__env->ReleaseStringUTFChars(strNwName_j, (const char *)strNwName_ch);
				#else
				const ev_wchar* strNwName_ch = (const ev_wchar*)__env->GetStringChars(strNwName_j,JNI_FALSE);
				const ev_string strNwName = strNwName_ch;
				__env->ReleaseStringChars(strNwName_j, (const jchar *)strNwName_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CFile::rename(strFileName, strNwName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_copy_1ev_1string_1ev_1string_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring strSrcFileName_j, jstring strDstFolder_j, jboolean bOverWrite_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSrcFileName_ch = (const ev_char*)__env->GetStringUTFChars(strSrcFileName_j,JNI_FALSE);
				const ev_string strSrcFileName = strSrcFileName_ch;
				__env->ReleaseStringUTFChars(strSrcFileName_j, (const char *)strSrcFileName_ch);
				#else
				const ev_wchar* strSrcFileName_ch = (const ev_wchar*)__env->GetStringChars(strSrcFileName_j,JNI_FALSE);
				const ev_string strSrcFileName = strSrcFileName_ch;
				__env->ReleaseStringChars(strSrcFileName_j, (const jchar *)strSrcFileName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDstFolder_ch = (const ev_char*)__env->GetStringUTFChars(strDstFolder_j,JNI_FALSE);
				const ev_string strDstFolder = strDstFolder_ch;
				__env->ReleaseStringUTFChars(strDstFolder_j, (const char *)strDstFolder_ch);
				#else
				const ev_wchar* strDstFolder_ch = (const ev_wchar*)__env->GetStringChars(strDstFolder_j,JNI_FALSE);
				const ev_string strDstFolder = strDstFolder_ch;
				__env->ReleaseStringChars(strDstFolder_j, (const jchar *)strDstFolder_ch);
				#endif
				ev_bool bOverWrite = (ev_bool) bOverWrite_j;
				ev_bool __values1 = EarthView::World::Core::CFile::copy(strSrcFileName, strDstFolder, bOverWrite);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_move_1ev_1string_1ev_1string_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring strSrcFileName_j, jstring strDstFolder_j, jboolean bOverWrite_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSrcFileName_ch = (const ev_char*)__env->GetStringUTFChars(strSrcFileName_j,JNI_FALSE);
				const ev_string strSrcFileName = strSrcFileName_ch;
				__env->ReleaseStringUTFChars(strSrcFileName_j, (const char *)strSrcFileName_ch);
				#else
				const ev_wchar* strSrcFileName_ch = (const ev_wchar*)__env->GetStringChars(strSrcFileName_j,JNI_FALSE);
				const ev_string strSrcFileName = strSrcFileName_ch;
				__env->ReleaseStringChars(strSrcFileName_j, (const jchar *)strSrcFileName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strDstFolder_ch = (const ev_char*)__env->GetStringUTFChars(strDstFolder_j,JNI_FALSE);
				const ev_string strDstFolder = strDstFolder_ch;
				__env->ReleaseStringUTFChars(strDstFolder_j, (const char *)strDstFolder_ch);
				#else
				const ev_wchar* strDstFolder_ch = (const ev_wchar*)__env->GetStringChars(strDstFolder_j,JNI_FALSE);
				const ev_string strDstFolder = strDstFolder_ch;
				__env->ReleaseStringChars(strDstFolder_j, (const jchar *)strDstFolder_ch);
				#endif
				ev_bool bOverWrite = (ev_bool) bOverWrite_j;
				ev_bool __values1 = EarthView::World::Core::CFile::move(strSrcFileName, strDstFolder, bOverWrite);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_remove_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strFileName_j)
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
				ev_bool __values1 = EarthView::World::Core::CFile::remove(strFileName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_exists_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strFileName_j)
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
				ev_bool __values1 = EarthView::World::Core::CFile::exists(strFileName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_File_getSize_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strFileName_j)
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
				ev_uint64 __values1 = EarthView::World::Core::CFile::getSize(strFileName);
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_getAttributes_1ev_1string_1FileAttributes(JNIEnv *__env , jclass __clazz, jstring strFileName_j, jlong attrs_j)
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
				EarthView::World::Core::FileAttributes &attrs = *(EarthView::World::Core::FileAttributes*) attrs_j;
				ev_bool __values1 = EarthView::World::Core::CFile::getAttributes(strFileName, attrs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_File_isAbsoluteFile_1EVString(JNIEnv *__env , jclass __clazz, jstring filepath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filepath_ch = (const ev_char*)__env->GetStringUTFChars(filepath_j,JNI_FALSE);
				const EVString filepath = filepath_ch;
				__env->ReleaseStringUTFChars(filepath_j, (const char *)filepath_ch);
				#else
				const ev_wchar* filepath_ch = (const ev_wchar*)__env->GetStringChars(filepath_j,JNI_FALSE);
				const EVString filepath = filepath_ch;
				__env->ReleaseStringChars(filepath_j, (const jchar *)filepath_ch);
				#endif
				ev_bool __values1 = EarthView::World::Core::CFile::isAbsoluteFile(filepath);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
