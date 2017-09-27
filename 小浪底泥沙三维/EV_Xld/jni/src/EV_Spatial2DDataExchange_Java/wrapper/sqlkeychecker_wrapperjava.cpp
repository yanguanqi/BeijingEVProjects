/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/sqlkeychecker.h"
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
			namespace Convertor
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_convertor_Sqlkeychecker_getInstance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Convertor::CSQLKeyChecker* __values1 = EarthView::World::Spatial::Convertor::CSQLKeyChecker::getInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_Sqlkeychecker_reloadKeyValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CSQLKeyChecker *pObjectX = (EarthView::World::Spatial::Convertor::CSQLKeyChecker*) pObjXXXX;
					ev_int32 __values1 = pObjectX->reloadKeyValue();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_convertor_Sqlkeychecker_isNameConflict_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					const 					EarthView::World::Spatial::Convertor::CSQLKeyChecker *pObjectX = (EarthView::World::Spatial::Convertor::CSQLKeyChecker*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNameConflict(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
