/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_logger.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_setInternalDebugging_1ev_1bool(JNIEnv *__env , jclass __clazz, jboolean bOpen_j)
			{
				ev_bool bOpen = (ev_bool) bOpen_j;
				EarthView::World::Core::CLogger::setInternalDebugging(bOpen);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Logger_getInstance_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strLoggerName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strLoggerName_ch = (const ev_char*)__env->GetStringUTFChars(strLoggerName_j,JNI_FALSE);
				const ev_string strLoggerName = strLoggerName_ch;
				__env->ReleaseStringUTFChars(strLoggerName_j, (const char *)strLoggerName_ch);
				#else
				const ev_wchar* strLoggerName_ch = (const ev_wchar*)__env->GetStringChars(strLoggerName_j,JNI_FALSE);
				const ev_string strLoggerName = strLoggerName_ch;
				__env->ReleaseStringChars(strLoggerName_j, (const jchar *)strLoggerName_ch);
				#endif
				EarthView::World::Core::CLogger* __values1 = EarthView::World::Core::CLogger::getInstance(strLoggerName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Logger_getInstance_1ev_1string_1ev_1string(JNIEnv *__env , jclass __clazz, jstring strLoggerName_j, jstring strPattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strLoggerName_ch = (const ev_char*)__env->GetStringUTFChars(strLoggerName_j,JNI_FALSE);
				const ev_string strLoggerName = strLoggerName_ch;
				__env->ReleaseStringUTFChars(strLoggerName_j, (const char *)strLoggerName_ch);
				#else
				const ev_wchar* strLoggerName_ch = (const ev_wchar*)__env->GetStringChars(strLoggerName_j,JNI_FALSE);
				const ev_string strLoggerName = strLoggerName_ch;
				__env->ReleaseStringChars(strLoggerName_j, (const jchar *)strLoggerName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strPattern_ch = (const ev_char*)__env->GetStringUTFChars(strPattern_j,JNI_FALSE);
				const ev_string strPattern = strPattern_ch;
				__env->ReleaseStringUTFChars(strPattern_j, (const char *)strPattern_ch);
				#else
				const ev_wchar* strPattern_ch = (const ev_wchar*)__env->GetStringChars(strPattern_j,JNI_FALSE);
				const ev_string strPattern = strPattern_ch;
				__env->ReleaseStringChars(strPattern_j, (const jchar *)strPattern_ch);
				#endif
				EarthView::World::Core::CLogger* __values1 = EarthView::World::Core::CLogger::getInstance(strLoggerName, strPattern);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_getLoggerName_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong strLoggerName_j)
			{
				ev_string &strLoggerName = *(ev_string*) strLoggerName_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->getLoggerName(strLoggerName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_setLogLevel_1LOGLEVEL(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				const EarthView::World::Core::LOGLEVEL level = (const EarthView::World::Core::LOGLEVEL) level_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->setLogLevel(level);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Logger_getLogLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				EarthView::World::Core::LOGLEVEL __values1 = pObjectX->getLogLevel();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openConsoleAppender_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openConsoleAppender();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openFileAppender_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openFileAppender(strFilename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openFileAppender_1ev_1string_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j, jboolean bTrunc_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				ev_bool bTrunc = (ev_bool) bTrunc_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openFileAppender(strFilename, bTrunc);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openRollingFileAppender_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openRollingFileAppender(strFilename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openRollingFileAppender_1ev_1string_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j, jlong lMaxFileSize_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				ev_uint32 lMaxFileSize = (ev_uint32) lMaxFileSize_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openRollingFileAppender(strFilename, lMaxFileSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openRollingFileAppender_1ev_1string_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j, jlong lMaxFileSize_j, jlong nMaxBackupIndex_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				ev_uint32 lMaxFileSize = (ev_uint32) lMaxFileSize_j;
				ev_uint32 nMaxBackupIndex = (ev_uint32) nMaxBackupIndex_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openRollingFileAppender(strFilename, lMaxFileSize, nMaxBackupIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openDailyRollingFileAppender_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openDailyRollingFileAppender(strFilename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openDailyRollingFileAppender_1ev_1string_1LOGSCHEDULE(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j, jint schedule_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				const EarthView::World::Core::LOGSCHEDULE schedule = (const EarthView::World::Core::LOGSCHEDULE) schedule_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openDailyRollingFileAppender(strFilename, schedule);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openDailyRollingFileAppender_1ev_1string_1LOGSCHEDULE_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j, jint schedule_j, jlong maxBackupIndex_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				const EarthView::World::Core::LOGSCHEDULE schedule = (const EarthView::World::Core::LOGSCHEDULE) schedule_j;
				ev_uint32 maxBackupIndex = (ev_uint32) maxBackupIndex_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openDailyRollingFileAppender(strFilename, schedule, maxBackupIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_openSocketAppender_1ev_1string_1ev_1uint32_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strHost_j, jlong nPort_j, jstring strServerName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strHost_ch = (const ev_char*)__env->GetStringUTFChars(strHost_j,JNI_FALSE);
				const ev_string strHost = strHost_ch;
				__env->ReleaseStringUTFChars(strHost_j, (const char *)strHost_ch);
				#else
				const ev_wchar* strHost_ch = (const ev_wchar*)__env->GetStringChars(strHost_j,JNI_FALSE);
				const ev_string strHost = strHost_ch;
				__env->ReleaseStringChars(strHost_j, (const jchar *)strHost_ch);
				#endif
				ev_uint32 nPort = (ev_uint32) nPort_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strServerName_ch = (const ev_char*)__env->GetStringUTFChars(strServerName_j,JNI_FALSE);
				const ev_string strServerName = strServerName_ch;
				__env->ReleaseStringUTFChars(strServerName_j, (const char *)strServerName_ch);
				#else
				const ev_wchar* strServerName_ch = (const ev_wchar*)__env->GetStringChars(strServerName_j,JNI_FALSE);
				const ev_string strServerName = strServerName_ch;
				__env->ReleaseStringChars(strServerName_j, (const jchar *)strServerName_ch);
				#endif
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->openSocketAppender(strHost, nPort, strServerName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_closeAppender_1APPENDERTYPE_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j, jstring strFileName_j)
			{
				const EarthView::World::Core::APPENDERTYPE type = (const EarthView::World::Core::APPENDERTYPE) type_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFileName_ch = (const ev_char*)__env->GetStringUTFChars(strFileName_j,JNI_FALSE);
				const ev_string strFileName = strFileName_ch;
				__env->ReleaseStringUTFChars(strFileName_j, (const char *)strFileName_ch);
				#else
				const ev_wchar* strFileName_ch = (const ev_wchar*)__env->GetStringChars(strFileName_j,JNI_FALSE);
				const ev_string strFileName = strFileName_ch;
				__env->ReleaseStringChars(strFileName_j, (const jchar *)strFileName_ch);
				#endif
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->closeAppender(type, strFileName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Logger_writeLog_1LOGLEVEL_1ev_1string_1ev_1string_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jstring strMsg_j, jstring strFile_j, jlong nLine_j)
			{
				const EarthView::World::Core::LOGLEVEL level = (const EarthView::World::Core::LOGLEVEL) level_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strMsg_ch = (const ev_char*)__env->GetStringUTFChars(strMsg_j,JNI_FALSE);
				const ev_string strMsg = strMsg_ch;
				__env->ReleaseStringUTFChars(strMsg_j, (const char *)strMsg_ch);
				#else
				const ev_wchar* strMsg_ch = (const ev_wchar*)__env->GetStringChars(strMsg_j,JNI_FALSE);
				const ev_string strMsg = strMsg_ch;
				__env->ReleaseStringChars(strMsg_j, (const jchar *)strMsg_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFile_ch = (const ev_char*)__env->GetStringUTFChars(strFile_j,JNI_FALSE);
				const ev_string strFile = strFile_ch;
				__env->ReleaseStringUTFChars(strFile_j, (const char *)strFile_ch);
				#else
				const ev_wchar* strFile_ch = (const ev_wchar*)__env->GetStringChars(strFile_j,JNI_FALSE);
				const ev_string strFile = strFile_ch;
				__env->ReleaseStringChars(strFile_j, (const jchar *)strFile_ch);
				#endif
				ev_uint32 nLine = (ev_uint32) nLine_j;
				EarthView::World::Core::CLogger *pObjectX = (EarthView::World::Core::CLogger*) pObjXXXX;
				pObjectX->writeLog(level, strMsg, strFile, nLine);
			}
		}
	}
}
