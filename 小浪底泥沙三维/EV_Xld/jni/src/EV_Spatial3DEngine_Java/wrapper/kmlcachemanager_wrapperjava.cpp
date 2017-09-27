/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlcachemanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlCacheManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager* __values1 = EarthView::World::Spatial3D::KmlManager::CKmlCacheManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlCacheManager_genKmlPicCache_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring picPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* picPath_ch = (const ev_char*)__env->GetStringUTFChars(picPath_j,JNI_FALSE);
					const EVString picPath = picPath_ch;
					__env->ReleaseStringUTFChars(picPath_j, (const char *)picPath_ch);
					#else
					const ev_wchar* picPath_ch = (const ev_wchar*)__env->GetStringChars(picPath_j,JNI_FALSE);
					const EVString picPath = picPath_ch;
					__env->ReleaseStringChars(picPath_j, (const jchar *)picPath_ch);
					#endif
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlCacheManager*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->genKmlPicCache(picPath);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlCacheManager_genKmlOrKmzCache_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring kmlPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* kmlPath_ch = (const ev_char*)__env->GetStringUTFChars(kmlPath_j,JNI_FALSE);
					const EVString kmlPath = kmlPath_ch;
					__env->ReleaseStringUTFChars(kmlPath_j, (const char *)kmlPath_ch);
					#else
					const ev_wchar* kmlPath_ch = (const ev_wchar*)__env->GetStringChars(kmlPath_j,JNI_FALSE);
					const EVString kmlPath = kmlPath_ch;
					__env->ReleaseStringChars(kmlPath_j, (const jchar *)kmlPath_ch);
					#endif
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlCacheManager*) pObjXXXX;
					EVString __values1 = pObjectX->genKmlOrKmzCache(kmlPath);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlCacheManager_genKmlModelCache_1EVString_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring modelPath_j, jlong sceneMgr_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* modelPath_ch = (const ev_char*)__env->GetStringUTFChars(modelPath_j,JNI_FALSE);
					const EVString modelPath = modelPath_ch;
					__env->ReleaseStringUTFChars(modelPath_j, (const char *)modelPath_ch);
					#else
					const ev_wchar* modelPath_ch = (const ev_wchar*)__env->GetStringChars(modelPath_j,JNI_FALSE);
					const EVString modelPath = modelPath_ch;
					__env->ReleaseStringChars(modelPath_j, (const jchar *)modelPath_ch);
					#endif
					EarthView::World::Graphic::CSceneManager *sceneMgr = (EarthView::World::Graphic::CSceneManager*) sceneMgr_j;
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlCacheManager*) pObjXXXX;
					EVString __values1 = pObjectX->genKmlModelCache(modelPath, sceneMgr);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
