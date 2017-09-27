/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/externaltexturesourcemanager.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CExternalTextureSourceManager& __values1 = EarthView::World::Graphic::CExternalTextureSourceManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CExternalTextureSourceManager* __values1 = EarthView::World::Graphic::CExternalTextureSourceManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_setCurrentPlugin_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTexturePlugInType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTexturePlugInType_ch = (const ev_char*)__env->GetStringUTFChars(sTexturePlugInType_j,JNI_FALSE);
				const EVString sTexturePlugInType = sTexturePlugInType_ch;
				__env->ReleaseStringUTFChars(sTexturePlugInType_j, (const char *)sTexturePlugInType_ch);
				#else
				const ev_wchar* sTexturePlugInType_ch = (const ev_wchar*)__env->GetStringChars(sTexturePlugInType_j,JNI_FALSE);
				const EVString sTexturePlugInType = sTexturePlugInType_ch;
				__env->ReleaseStringChars(sTexturePlugInType_j, (const jchar *)sTexturePlugInType_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSourceManager *pObjectX = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjXXXX;
				pObjectX->setCurrentPlugin(sTexturePlugInType);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_getCurrentPlugin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CExternalTextureSourceManager *pObjectX = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjXXXX;
				EarthView::World::Graphic::CExternalTextureSource* __values1 = pObjectX->getCurrentPlugin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_destroyAdvancedTexture_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTextureName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTextureName_ch = (const ev_char*)__env->GetStringUTFChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringUTFChars(sTextureName_j, (const char *)sTextureName_ch);
				#else
				const ev_wchar* sTextureName_ch = (const ev_wchar*)__env->GetStringChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringChars(sTextureName_j, (const jchar *)sTextureName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSourceManager *pObjectX = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjXXXX;
				pObjectX->destroyAdvancedTexture(sTextureName, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_destroyAdvancedTexture_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTextureName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTextureName_ch = (const ev_char*)__env->GetStringUTFChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringUTFChars(sTextureName_j, (const char *)sTextureName_ch);
				#else
				const ev_wchar* sTextureName_ch = (const ev_wchar*)__env->GetStringChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringChars(sTextureName_j, (const jchar *)sTextureName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSourceManager *pObjectX = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjXXXX;
				pObjectX->destroyAdvancedTexture(sTextureName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_getExternalTextureSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTexturePlugInType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTexturePlugInType_ch = (const ev_char*)__env->GetStringUTFChars(sTexturePlugInType_j,JNI_FALSE);
				const EVString sTexturePlugInType = sTexturePlugInType_ch;
				__env->ReleaseStringUTFChars(sTexturePlugInType_j, (const char *)sTexturePlugInType_ch);
				#else
				const ev_wchar* sTexturePlugInType_ch = (const ev_wchar*)__env->GetStringChars(sTexturePlugInType_j,JNI_FALSE);
				const EVString sTexturePlugInType = sTexturePlugInType_ch;
				__env->ReleaseStringChars(sTexturePlugInType_j, (const jchar *)sTexturePlugInType_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSourceManager *pObjectX = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjXXXX;
				EarthView::World::Graphic::CExternalTextureSource* __values1 = pObjectX->getExternalTextureSource(sTexturePlugInType);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSourceManager_setExternalTextureSource_1EVString_1CExternalTextureSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTexturePlugInType_j, jlong ref_pTextureSystem_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTexturePlugInType_ch = (const ev_char*)__env->GetStringUTFChars(sTexturePlugInType_j,JNI_FALSE);
				const EVString sTexturePlugInType = sTexturePlugInType_ch;
				__env->ReleaseStringUTFChars(sTexturePlugInType_j, (const char *)sTexturePlugInType_ch);
				#else
				const ev_wchar* sTexturePlugInType_ch = (const ev_wchar*)__env->GetStringChars(sTexturePlugInType_j,JNI_FALSE);
				const EVString sTexturePlugInType = sTexturePlugInType_ch;
				__env->ReleaseStringChars(sTexturePlugInType_j, (const jchar *)sTexturePlugInType_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *ref_pTextureSystem = (EarthView::World::Graphic::CExternalTextureSource*) ref_pTextureSystem_j;
				EarthView::World::Graphic::CExternalTextureSourceManager *pObjectX = (EarthView::World::Graphic::CExternalTextureSourceManager*) pObjXXXX;
				pObjectX->setExternalTextureSource(sTexturePlugInType, ref_pTextureSystem);
			}
		}
	}
}
