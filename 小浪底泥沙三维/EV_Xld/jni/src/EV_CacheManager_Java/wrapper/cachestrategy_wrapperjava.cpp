/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "cachemanager/cachestrategy.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_CacheBaseTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CBT_UnKnow,
					CBT_Location,
					CBT_VaildTime
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_CacheStrategy_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CacheStrategy *pObjectX = (EarthView::World::Spatial::CacheStrategy*) pObjXXXX;
				EarthView::World::Spatial::CacheBaseType __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheStrategy_setType_1CacheBaseType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
			{
				EarthView::World::Spatial::CacheBaseType type = (EarthView::World::Spatial::CacheBaseType) type_j;
				EarthView::World::Spatial::CacheStrategy *pObjectX = (EarthView::World::Spatial::CacheStrategy*) pObjXXXX;
				pObjectX->setType(type);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_CacheStrategy_getLimitedValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CacheStrategy *pObjectX = (EarthView::World::Spatial::CacheStrategy*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getLimitedValue();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheStrategy_setLimitedValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint limitValue_j)
			{
				ev_int32 limitValue = (ev_int32) limitValue_j;
				EarthView::World::Spatial::CacheStrategy *pObjectX = (EarthView::World::Spatial::CacheStrategy*) pObjXXXX;
				pObjectX->setLimitedValue(limitValue);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheStrategy_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CacheStrategy *pObjectX = (EarthView::World::Spatial::CacheStrategy*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheStrategy_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Spatial::CacheStrategy *pObjectX = (EarthView::World::Spatial::CacheStrategy*) pObjXXXX;
				pObjectX->setEnabled(enable);
			}
		}
	}
}
