/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticefontmanager.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_LatticeFontManager_00024MaterialTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CLatticeFontManager::NORMAL_DCHECK,
					CLatticeFontManager::NORMAL,
					CLatticeFontManager::HIGHLIGHT_DCHECK,
					CLatticeFontManager::HIGHLIGHT
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeFontManager_destroySingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CLatticeFontManager::destroySingleton();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LatticeFontManager_create_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CLatticeFontManager::create();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeFontManager_generateTextMaterial_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jstring materialName_j, jstring resgrpName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resgrpName_ch = (const ev_char*)__env->GetStringUTFChars(resgrpName_j,JNI_FALSE);
				const EVString resgrpName = resgrpName_ch;
				__env->ReleaseStringUTFChars(resgrpName_j, (const char *)resgrpName_ch);
				#else
				const ev_wchar* resgrpName_ch = (const ev_wchar*)__env->GetStringChars(resgrpName_j,JNI_FALSE);
				const EVString resgrpName = resgrpName_ch;
				__env->ReleaseStringChars(resgrpName_j, (const jchar *)resgrpName_ch);
				#endif
				EarthView::World::Graphic::CMaterialPtr __values1 = EarthView::World::Graphic::CLatticeFontManager::generateTextMaterial(materialName, resgrpName);
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeFontManager_getTextMaterial_1MaterialType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint maType_j)
			{
				EarthView::World::Graphic::CLatticeFontManager::MaterialType maType = (EarthView::World::Graphic::CLatticeFontManager::MaterialType) maType_j;
				EarthView::World::Graphic::CLatticeFontManager *pObjectX = (EarthView::World::Graphic::CLatticeFontManager*) pObjXXXX;
				EarthView::World::Graphic::CMaterialPtr __values1 = pObjectX->getTextMaterial(maType);
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LatticeFontManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CLatticeFontManager* __values1 = EarthView::World::Graphic::CLatticeFontManager::getSingleton();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
