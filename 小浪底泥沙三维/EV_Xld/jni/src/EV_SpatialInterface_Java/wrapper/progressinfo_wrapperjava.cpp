/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/progressinfo.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_raster_EvSpatialInterfaceGlobal_EVgsTermProgress_1ev_1real64_1ev_1char_1void(JNIEnv *__env, jclass __clazz, jdouble dfComplete_j, jlong pszMessage_j, jlong pProgressArg_j)
				{
					ev_real64 dfComplete = (ev_real64) dfComplete_j;
					const ev_char *pszMessage = (const ev_char*) pszMessage_j;
					void *pProgressArg = (void*) pProgressArg_j;
					ev_int32 __values1 = EVgsTermProgress(dfComplete, pszMessage, pProgressArg);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_raster_ProgressInfo_getPercent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CProgressInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjXXXX;
					const ev_real64 __values1 = pObjectX->getPercent();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_raster_ProgressInfo_getMessage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Raster::CProgressInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjXXXX;
					const EVString __values1 = pObjectX->getMessage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_ProgressInfo_setPercent_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dfPercent_j)
				{
					ev_real64 dfPercent = (ev_real64) dfPercent_j;
					EarthView::World::Spatial2D::Raster::CProgressInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjXXXX;
					pObjectX->setPercent(dfPercent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_ProgressInfo_setMessage_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strMessage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strMessage_ch = (const ev_char*)__env->GetStringUTFChars(strMessage_j,JNI_FALSE);
					const EVString strMessage = strMessage_ch;
					__env->ReleaseStringUTFChars(strMessage_j, (const char *)strMessage_ch);
					#else
					const ev_wchar* strMessage_ch = (const ev_wchar*)__env->GetStringChars(strMessage_j,JNI_FALSE);
					const EVString strMessage = strMessage_ch;
					__env->ReleaseStringChars(strMessage_j, (const jchar *)strMessage_ch);
					#endif
					EarthView::World::Spatial2D::Raster::CProgressInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjXXXX;
					pObjectX->setMessage(strMessage);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_ProgressInfo_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Raster::CProgressInfo *pObjectX = (EarthView::World::Spatial2D::Raster::CProgressInfo*) pObjXXXX;
					pObjectX->reset();
				}
			}
		}
	}
}
