/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/lodstrategymanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategyManager_addStrategy_1CLodStrategy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_strategy_j)
			{
				EarthView::World::Graphic::CLodStrategy *ref_strategy = (EarthView::World::Graphic::CLodStrategy*) ref_strategy_j;
				EarthView::World::Graphic::CLodStrategyManager *pObjectX = (EarthView::World::Graphic::CLodStrategyManager*) pObjXXXX;
				pObjectX->addStrategy(ref_strategy);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LodStrategyManager_removeStrategy_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CLodStrategyManager *pObjectX = (EarthView::World::Graphic::CLodStrategyManager*) pObjXXXX;
				EarthView::World::Graphic::CLodStrategy* __values1 = pObjectX->removeStrategy(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategyManager_removeAllStrategies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLodStrategyManager *pObjectX = (EarthView::World::Graphic::CLodStrategyManager*) pObjXXXX;
				pObjectX->removeAllStrategies();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LodStrategyManager_getStrategy_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CLodStrategyManager *pObjectX = (EarthView::World::Graphic::CLodStrategyManager*) pObjXXXX;
				EarthView::World::Graphic::CLodStrategy* __values1 = pObjectX->getStrategy(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategyManager_setDefaultStrategy_1CLodStrategy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_strategy_j)
			{
				EarthView::World::Graphic::CLodStrategy *ref_strategy = (EarthView::World::Graphic::CLodStrategy*) ref_strategy_j;
				EarthView::World::Graphic::CLodStrategyManager *pObjectX = (EarthView::World::Graphic::CLodStrategyManager*) pObjXXXX;
				pObjectX->setDefaultStrategy(ref_strategy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LodStrategyManager_setDefaultStrategy_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CLodStrategyManager *pObjectX = (EarthView::World::Graphic::CLodStrategyManager*) pObjXXXX;
				pObjectX->setDefaultStrategy(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LodStrategyManager_getDefaultStrategy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CLodStrategyManager *pObjectX = (EarthView::World::Graphic::CLodStrategyManager*) pObjXXXX;
				EarthView::World::Graphic::CLodStrategy* __values1 = pObjectX->getDefaultStrategy();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LodStrategyManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CLodStrategyManager& __values1 = EarthView::World::Graphic::CLodStrategyManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LodStrategyManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CLodStrategyManager* __values1 = EarthView::World::Graphic::CLodStrategyManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
